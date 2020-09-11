
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
    int n = 12;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Kristian", 79);
    osebe[1] = ustvari("Cvetka", 56);
    osebe[2] = ustvari("Anita", 62);
    osebe[3] = ustvari("Pavel", 14);
    osebe[4] = ustvari("Elvedin", 2);
    osebe[5] = ustvari("Tobija", 74);
    osebe[6] = ustvari("Justina", 1);
    osebe[7] = ustvari("Boris", 40);
    osebe[8] = ustvari("Miha", 1);
    osebe[9] = ustvari("Hanna", 4);
    osebe[10] = ustvari("Zarja", 1);
    osebe[11] = ustvari("Ljiljana", 97);

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
