
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
    osebe[0] = ustvari("Tina", 22);
    osebe[1] = ustvari("Noel", 2);
    osebe[2] = ustvari("Zlatka", 99);
    osebe[3] = ustvari("Kaja", 20);
    osebe[4] = ustvari("Stanka", 43);
    osebe[5] = ustvari("Miha", 94);
    osebe[6] = ustvari("Roza", 97);
    osebe[7] = ustvari("Benjamin", 91);
    osebe[8] = ustvari("Geza", 56);
    osebe[9] = ustvari("Dunja", 23);
    osebe[10] = ustvari("Jerneja", 24);
    osebe[11] = ustvari("Edvard", 13);
    osebe[12] = ustvari("Ula", 29);

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
