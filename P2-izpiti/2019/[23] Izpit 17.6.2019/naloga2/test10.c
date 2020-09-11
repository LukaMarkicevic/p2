
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
    osebe[0] = ustvari("Klavdij", 75);
    osebe[1] = ustvari("Neda", 12);
    osebe[2] = ustvari("Tiana", 50);
    osebe[3] = ustvari("Silvana", 63);
    osebe[4] = ustvari("Renato", 25);
    osebe[5] = ustvari("Olga", 36);
    osebe[6] = ustvari("Verica", 14);
    osebe[7] = ustvari("Anel", 93);
    osebe[8] = ustvari("Zora", 5);

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
