
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
    int n = 13;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Ernest", 96);
    osebe[1] = ustvari("Majda", 41);
    osebe[2] = ustvari("Slavka", 27);
    osebe[3] = ustvari("Ibrahim", 78);
    osebe[4] = ustvari("Adolf", 12);
    osebe[5] = ustvari("Dean", 80);
    osebe[6] = ustvari("Ljudmila", 60);
    osebe[7] = ustvari("Vojko", 46);
    osebe[8] = ustvari("Oliver", 36);
    osebe[9] = ustvari("Rajko", 45);
    osebe[10] = ustvari("Brigita", 94);
    osebe[11] = ustvari("Tara", 49);
    osebe[12] = ustvari("Zlatka", 29);

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
