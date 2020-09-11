
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
    int n = 15;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Albina", 29);
    osebe[1] = ustvari("Marijan", 62);
    osebe[2] = ustvari("Nikita", 79);
    osebe[3] = ustvari("Leila", 75);
    osebe[4] = ustvari("Jakob", 20);
    osebe[5] = ustvari("Denis", 64);
    osebe[6] = ustvari("Pia", 46);
    osebe[7] = ustvari("Elvir", 72);
    osebe[8] = ustvari("Sandra", 26);
    osebe[9] = ustvari("Hilda", 4);
    osebe[10] = ustvari("Vitan", 63);
    osebe[11] = ustvari("Tijana", 74);
    osebe[12] = ustvari("Breda", 89);
    osebe[13] = ustvari("Ciril", 32);
    osebe[14] = ustvari("Zvonimir", 99);

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
