
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
    osebe[0] = ustvari("Milena", 71);
    osebe[1] = ustvari("Amna", 94);
    osebe[2] = ustvari("Gabriela", 86);
    osebe[3] = ustvari("Rudolf", 26);
    osebe[4] = ustvari("Timotej", 90);
    osebe[5] = ustvari("Nia", 66);
    osebe[6] = ustvari("Barica", 62);
    osebe[7] = ustvari("Zorka", 91);
    osebe[8] = ustvari("Dan", 78);
    osebe[9] = ustvari("Florjan", 37);
    osebe[10] = ustvari("Jerica", 85);
    osebe[11] = ustvari("Kristina", 84);
    osebe[12] = ustvari("Vida", 32);
    osebe[13] = ustvari("Erika", 5);
    osebe[14] = ustvari("Stanislav", 33);
    osebe[15] = ustvari("Iztok", 69);
    osebe[16] = ustvari("Pavel", 33);
    osebe[17] = ustvari("Lea", 21);
    osebe[18] = ustvari("Osman", 80);
    osebe[19] = ustvari("Herta", 62);
    osebe[20] = ustvari("Urh", 59);
    osebe[21] = ustvari("Ciril", 47);

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
