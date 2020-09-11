
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
    int n = 22;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Branka", 79);
    osebe[1] = ustvari("Larisa", 96);
    osebe[2] = ustvari("Daris", 68);
    osebe[3] = ustvari("Janja", 4);
    osebe[4] = ustvari("Silvestra", 48);
    osebe[5] = ustvari("Naja", 62);
    osebe[6] = ustvari("Izet", 78);
    osebe[7] = ustvari("Mirza", 95);
    osebe[8] = ustvari("Amadeja", 18);
    osebe[9] = ustvari("Pero", 74);
    osebe[10] = ustvari("Kristijan", 51);
    osebe[11] = ustvari("Zmaga", 13);
    osebe[12] = ustvari("Valentin", 72);
    osebe[13] = ustvari("Edis", 78);
    osebe[14] = ustvari("Gaia", 34);
    osebe[15] = ustvari("Romana", 11);
    osebe[16] = ustvari("Osman", 3);
    osebe[17] = ustvari("Cvetka", 92);
    osebe[18] = ustvari("Trina", 61);
    osebe[19] = ustvari("Friderika", 34);
    osebe[20] = ustvari("Hinko", 66);
    osebe[21] = ustvari("Urban", 28);

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
