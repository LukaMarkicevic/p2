
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
    int n = 87;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Karmen", 12);
    osebe[1] = ustvari("Tajda", 56);
    osebe[2] = ustvari("Klementina", 93);
    osebe[3] = ustvari("Esad", 80);
    osebe[4] = ustvari("Ada", 11);
    osebe[5] = ustvari("Damjana", 64);
    osebe[6] = ustvari("Julij", 12);
    osebe[7] = ustvari("Ada", 85);
    osebe[8] = ustvari("Samir", 68);
    osebe[9] = ustvari("Ota", 94);
    osebe[10] = ustvari("Ivo", 13);
    osebe[11] = ustvari("Luka", 12);
    osebe[12] = ustvari("Tajda", 73);
    osebe[13] = ustvari("Vladimir", 45);
    osebe[14] = ustvari("Avgust", 86);
    osebe[15] = ustvari("Ksenja", 44);
    osebe[16] = ustvari("Vitomir", 22);
    osebe[17] = ustvari("Gabriel", 62);
    osebe[18] = ustvari("Vladimir", 41);
    osebe[19] = ustvari("Tajda", 11);
    osebe[20] = ustvari("Julij", 22);
    osebe[21] = ustvari("Avgust", 74);
    osebe[22] = ustvari("Minea", 38);
    osebe[23] = ustvari("Ota", 14);
    osebe[24] = ustvari("Stella", 12);
    osebe[25] = ustvari("Gabriel", 93);
    osebe[26] = ustvari("Damjana", 8);
    osebe[27] = ustvari("Samir", 87);
    osebe[28] = ustvari("Zdenka", 78);
    osebe[29] = ustvari("Kristjan", 85);
    osebe[30] = ustvari("Minea", 11);
    osebe[31] = ustvari("Tone", 54);
    osebe[32] = ustvari("Julij", 12);
    osebe[33] = ustvari("Stjepan", 36);
    osebe[34] = ustvari("Ela", 12);
    osebe[35] = ustvari("Tone", 17);
    osebe[36] = ustvari("Petja", 57);
    osebe[37] = ustvari("Nik", 83);
    osebe[38] = ustvari("Stjepan", 34);
    osebe[39] = ustvari("Nik", 42);
    osebe[40] = ustvari("Samir", 73);
    osebe[41] = ustvari("Damjana", 59);
    osebe[42] = ustvari("Niko", 69);
    osebe[43] = ustvari("Julij", 1);
    osebe[44] = ustvari("Zdenka", 23);
    osebe[45] = ustvari("Amna", 66);
    osebe[46] = ustvari("Nikolaj", 81);
    osebe[47] = ustvari("Stjepan", 89);
    osebe[48] = ustvari("Vitomir", 23);
    osebe[49] = ustvari("Nik", 89);
    osebe[50] = ustvari("Petja", 50);
    osebe[51] = ustvari("Tajda", 36);
    osebe[52] = ustvari("Nedeljko", 56);
    osebe[53] = ustvari("Tone", 29);
    osebe[54] = ustvari("Nik", 31);
    osebe[55] = ustvari("Milivoj", 71);
    osebe[56] = ustvari("Milivoj", 13);
    osebe[57] = ustvari("Karmen", 98);
    osebe[58] = ustvari("Esad", 48);
    osebe[59] = ustvari("Damjana", 70);
    osebe[60] = ustvari("Karmen", 46);
    osebe[61] = ustvari("Doroteja", 37);
    osebe[62] = ustvari("Ela", 16);
    osebe[63] = ustvari("Teodor", 79);
    osebe[64] = ustvari("Stjepan", 51);
    osebe[65] = ustvari("Julij", 14);
    osebe[66] = ustvari("Liam", 29);
    osebe[67] = ustvari("Nedeljko", 20);
    osebe[68] = ustvari("Liam", 58);
    osebe[69] = ustvari("Ota", 17);
    osebe[70] = ustvari("Petja", 90);
    osebe[71] = ustvari("Tone", 80);
    osebe[72] = ustvari("Samanta", 78);
    osebe[73] = ustvari("Ada", 99);
    osebe[74] = ustvari("Nedeljko", 17);
    osebe[75] = ustvari("Tajda", 73);
    osebe[76] = ustvari("Ada", 15);
    osebe[77] = ustvari("Luka", 66);
    osebe[78] = ustvari("Petja", 20);
    osebe[79] = ustvari("Vasja", 91);
    osebe[80] = ustvari("Ota", 63);
    osebe[81] = ustvari("Liam", 46);
    osebe[82] = ustvari("Nikolaj", 22);
    osebe[83] = ustvari("Vladimir", 51);
    osebe[84] = ustvari("Vekoslav", 65);
    osebe[85] = ustvari("Karmen", 63);
    osebe[86] = ustvari("Milivoj", 91);

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
