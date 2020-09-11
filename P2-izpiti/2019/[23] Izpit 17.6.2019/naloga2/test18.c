
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
    int n = 18;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Zvonko", 83);
    osebe[1] = ustvari("Enes", 21);
    osebe[2] = ustvari("Ali", 25);
    osebe[3] = ustvari("Mirela", 37);
    osebe[4] = ustvari("Valentina", 87);
    osebe[5] = ustvari("Kai", 86);
    osebe[6] = ustvari("France", 59);
    osebe[7] = ustvari("Taj", 99);
    osebe[8] = ustvari("Bernard", 20);
    osebe[9] = ustvari("Nejla", 11);
    osebe[10] = ustvari("Simon", 72);
    osebe[11] = ustvari("Ranko", 4);
    osebe[12] = ustvari("Patrick", 43);
    osebe[13] = ustvari("Ivona", 15);
    osebe[14] = ustvari("Ljuba", 75);
    osebe[15] = ustvari("Julija", 13);
    osebe[16] = ustvari("Dino", 15);
    osebe[17] = ustvari("Henrik", 77);

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
