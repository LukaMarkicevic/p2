
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
    osebe[0] = ustvari("Davorin", 57);
    osebe[1] = ustvari("Tia", 87);
    osebe[2] = ustvari("Jadran", 80);
    osebe[3] = ustvari("Amel", 20);
    osebe[4] = ustvari("Lukas", 37);
    osebe[5] = ustvari("Magdalena", 8);
    osebe[6] = ustvari("Gaia", 27);
    osebe[7] = ustvari("Silvester", 57);
    osebe[8] = ustvari("Zoja", 38);

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
