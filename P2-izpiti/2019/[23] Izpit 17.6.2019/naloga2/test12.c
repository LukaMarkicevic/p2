
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
    osebe[0] = ustvari("Lena", 8);
    osebe[1] = ustvari("Osman", 88);
    osebe[2] = ustvari("Amadej", 50);
    osebe[3] = ustvari("Draga", 78);
    osebe[4] = ustvari("Erazem", 78);
    osebe[5] = ustvari("Zofija", 57);
    osebe[6] = ustvari("Ciril", 61);
    osebe[7] = ustvari("Nedeljko", 55);
    osebe[8] = ustvari("Petja", 34);
    osebe[9] = ustvari("Timotej", 2);
    osebe[10] = ustvari("Branka", 8);
    osebe[11] = ustvari("Rebeka", 7);
    osebe[12] = ustvari("Fran", 1);

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
