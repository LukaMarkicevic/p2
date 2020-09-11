
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

Oseba* ustvari(char* ime, int starost) {
    Oseba* os = malloc(sizeof(Oseba));
    os->ime = ime;
    os->starost = starost;
    return os;
}

int __main__() {
    int n = 15;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Adolf", 68);
    osebe[1] = ustvari("Karol", 58);
    osebe[2] = ustvari("Emma", 16);
    osebe[3] = ustvari("Gaia", 60);
    osebe[4] = ustvari("Tea", 99);
    osebe[5] = ustvari("Jasna", 74);
    osebe[6] = ustvari("Indira", 26);
    osebe[7] = ustvari("Lavra", 22);
    osebe[8] = ustvari("Bernardka", 31);
    osebe[9] = ustvari("Samir", 58);
    osebe[10] = ustvari("Marjetica", 31);
    osebe[11] = ustvari("Nace", 78);
    osebe[12] = ustvari("Din", 18);
    osebe[13] = ustvari("Regina", 95);
    osebe[14] = ustvari("Olga", 93);

    uredi(osebe, n);
    for (int i = 0;  i < n;  i++) {
        printf("%s/%d\n", osebe[i]->ime, osebe[i]->starost);
    }

    for (int i = 0;  i < n;  i++) {
        free(osebe[i]);
    }
    free(osebe);

    exit(0);
    return 0;
}
