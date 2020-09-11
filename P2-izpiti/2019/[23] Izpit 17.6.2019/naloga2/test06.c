
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
    int n = 7;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Slobodan", 50);
    osebe[1] = ustvari("Ksenija", 11);
    osebe[2] = ustvari("Enja", 20);
    osebe[3] = ustvari("Tai", 94);
    osebe[4] = ustvari("Magda", 18);
    osebe[5] = ustvari("Zmaga", 45);
    osebe[6] = ustvari("Angela", 54);

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
