
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
    osebe[0] = ustvari("Silvija", 65);
    osebe[1] = ustvari("Margareta", 26);
    osebe[2] = ustvari("Darjan", 26);
    osebe[3] = ustvari("Jelena", 95);
    osebe[4] = ustvari("Adela", 99);
    osebe[5] = ustvari("Nikolaj", 7);
    osebe[6] = ustvari("Tijan", 51);
    osebe[7] = ustvari("Elina", 91);
    osebe[8] = ustvari("Lan", 76);
    osebe[9] = ustvari("Katja", 75);
    osebe[10] = ustvari("Vanessa", 12);
    osebe[11] = ustvari("Inaja", 21);
    osebe[12] = ustvari("Radivoj", 23);

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
