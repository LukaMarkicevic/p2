
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
    int n = 51;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Ajda", 42);
    osebe[1] = ustvari("Indira", 79);
    osebe[2] = ustvari("Asmir", 83);
    osebe[3] = ustvari("Jaka", 44);
    osebe[4] = ustvari("Vanja", 83);
    osebe[5] = ustvari("Ajda", 39);
    osebe[6] = ustvari("Zvonka", 68);
    osebe[7] = ustvari("Zvonko", 68);
    osebe[8] = ustvari("Adolf", 29);
    osebe[9] = ustvari("Asmir", 87);
    osebe[10] = ustvari("Tine", 59);
    osebe[11] = ustvari("Magdalena", 72);
    osebe[12] = ustvari("Zofija", 46);
    osebe[13] = ustvari("Indira", 85);
    osebe[14] = ustvari("Mustafa", 32);
    osebe[15] = ustvari("Zvonka", 29);
    osebe[16] = ustvari("Zoran", 2);
    osebe[17] = ustvari("Zvonko", 56);
    osebe[18] = ustvari("Janko", 80);
    osebe[19] = ustvari("Draga", 13);
    osebe[20] = ustvari("Vanja", 49);
    osebe[21] = ustvari("Svetlana", 2);
    osebe[22] = ustvari("Magdalena", 62);
    osebe[23] = ustvari("Maj", 6);
    osebe[24] = ustvari("Pia", 22);
    osebe[25] = ustvari("Zoran", 77);
    osebe[26] = ustvari("Asmir", 42);
    osebe[27] = ustvari("Vanja", 93);
    osebe[28] = ustvari("Adolf", 40);
    osebe[29] = ustvari("Janko", 12);
    osebe[30] = ustvari("Genovefa", 66);
    osebe[31] = ustvari("Adolf", 74);
    osebe[32] = ustvari("Vid", 37);
    osebe[33] = ustvari("Ajda", 60);
    osebe[34] = ustvari("Haris", 10);
    osebe[35] = ustvari("Janko", 86);
    osebe[36] = ustvari("Liam", 68);
    osebe[37] = ustvari("Magdalena", 7);
    osebe[38] = ustvari("Draga", 24);
    osebe[39] = ustvari("Janko", 91);
    osebe[40] = ustvari("Genovefa", 26);
    osebe[41] = ustvari("Indira", 53);
    osebe[42] = ustvari("Julian", 77);
    osebe[43] = ustvari("Draga", 85);
    osebe[44] = ustvari("Genovefa", 28);
    osebe[45] = ustvari("Indira", 93);
    osebe[46] = ustvari("Zvonko", 12);
    osebe[47] = ustvari("Maj", 85);
    osebe[48] = ustvari("Genovefa", 89);
    osebe[49] = ustvari("Genovefa", 30);
    osebe[50] = ustvari("Vladimir", 76);

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
