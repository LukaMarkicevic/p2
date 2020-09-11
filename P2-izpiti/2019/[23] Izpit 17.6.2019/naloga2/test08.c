
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
    int n = 9;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Feliks", 50);
    osebe[1] = ustvari("Ladislava", 42);
    osebe[2] = ustvari("Amadeja", 25);
    osebe[3] = ustvari("Ina", 95);
    osebe[4] = ustvari("Daniela", 84);
    osebe[5] = ustvari("Edvard", 77);
    osebe[6] = ustvari("Janez", 20);
    osebe[7] = ustvari("Kenan", 38);
    osebe[8] = ustvari("Tomo", 76);

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
