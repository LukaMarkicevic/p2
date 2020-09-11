
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
    osebe[0] = ustvari("Almir", 62);
    osebe[1] = ustvari("Rihard", 54);
    osebe[2] = ustvari("Ljudmila", 42);
    osebe[3] = ustvari("Melita", 97);
    osebe[4] = ustvari("Ota", 7);
    osebe[5] = ustvari("Hinko", 46);
    osebe[6] = ustvari("Samir", 87);
    osebe[7] = ustvari("Nermin", 98);
    osebe[8] = ustvari("Elvira", 10);

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
