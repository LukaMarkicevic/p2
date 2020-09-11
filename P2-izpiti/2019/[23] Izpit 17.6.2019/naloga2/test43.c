
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
    int n = 115;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Gaj", 7);
    osebe[1] = ustvari("Matilda", 56);
    osebe[2] = ustvari("Amadeja", 10);
    osebe[3] = ustvari("Admir", 8);
    osebe[4] = ustvari("Anica", 78);
    osebe[5] = ustvari("Admir", 26);
    osebe[6] = ustvari("Iza", 11);
    osebe[7] = ustvari("Erika", 29);
    osebe[8] = ustvari("Amanda", 13);
    osebe[9] = ustvari("Bogdan", 92);
    osebe[10] = ustvari("Jonas", 41);
    osebe[11] = ustvari("Lidija", 77);
    osebe[12] = ustvari("Vinko", 9);
    osebe[13] = ustvari("Ina", 12);
    osebe[14] = ustvari("Vlado", 71);
    osebe[15] = ustvari("Marta", 21);
    osebe[16] = ustvari("Aria", 84);
    osebe[17] = ustvari("Marjanca", 34);
    osebe[18] = ustvari("Medina", 50);
    osebe[19] = ustvari("Admir", 88);
    osebe[20] = ustvari("Enes", 1);
    osebe[21] = ustvari("Slava", 34);
    osebe[22] = ustvari("Nea", 64);
    osebe[23] = ustvari("Slava", 50);
    osebe[24] = ustvari("Marta", 7);
    osebe[25] = ustvari("Tina", 3);
    osebe[26] = ustvari("Anica", 25);
    osebe[27] = ustvari("Dejan", 6);
    osebe[28] = ustvari("Medina", 40);
    osebe[29] = ustvari("Slava", 48);
    osebe[30] = ustvari("Matilda", 1);
    osebe[31] = ustvari("Marta", 71);
    osebe[32] = ustvari("Brigita", 29);
    osebe[33] = ustvari("Bogdan", 54);
    osebe[34] = ustvari("Iza", 28);
    osebe[35] = ustvari("Berta", 20);
    osebe[36] = ustvari("Metka", 64);
    osebe[37] = ustvari("Erika", 64);
    osebe[38] = ustvari("Bogdan", 36);
    osebe[39] = ustvari("Medina", 78);
    osebe[40] = ustvari("Silvana", 46);
    osebe[41] = ustvari("Urh", 45);
    osebe[42] = ustvari("Zlatica", 91);
    osebe[43] = ustvari("Silvana", 84);
    osebe[44] = ustvari("Enej", 8);
    osebe[45] = ustvari("Jerca", 5);
    osebe[46] = ustvari("Ljubomir", 80);
    osebe[47] = ustvari("Admir", 52);
    osebe[48] = ustvari("Dejan", 79);
    osebe[49] = ustvari("Nedeljko", 41);
    osebe[50] = ustvari("Branka", 21);
    osebe[51] = ustvari("Nermina", 39);
    osebe[52] = ustvari("Ankica", 99);
    osebe[53] = ustvari("Dejan", 30);
    osebe[54] = ustvari("Marta", 18);
    osebe[55] = ustvari("Vlado", 90);
    osebe[56] = ustvari("Matilda", 37);
    osebe[57] = ustvari("Berta", 42);
    osebe[58] = ustvari("Zlatica", 43);
    osebe[59] = ustvari("Admir", 73);
    osebe[60] = ustvari("Brigita", 98);
    osebe[61] = ustvari("Amanda", 64);
    osebe[62] = ustvari("Dolores", 50);
    osebe[63] = ustvari("Nermina", 36);
    osebe[64] = ustvari("Dolores", 67);
    osebe[65] = ustvari("Tina", 23);
    osebe[66] = ustvari("Jerca", 52);
    osebe[67] = ustvari("Jerca", 32);
    osebe[68] = ustvari("Herman", 56);
    osebe[69] = ustvari("Anita", 47);
    osebe[70] = ustvari("Francka", 53);
    osebe[71] = ustvari("Aria", 1);
    osebe[72] = ustvari("Emina", 96);
    osebe[73] = ustvari("Ankica", 10);
    osebe[74] = ustvari("Anica", 12);
    osebe[75] = ustvari("Zdravko", 39);
    osebe[76] = ustvari("Ksenija", 88);
    osebe[77] = ustvari("Dejan", 53);
    osebe[78] = ustvari("Ilija", 38);
    osebe[79] = ustvari("Dolores", 55);
    osebe[80] = ustvari("Iza", 93);
    osebe[81] = ustvari("Mirjam", 90);
    osebe[82] = ustvari("Anita", 14);
    osebe[83] = ustvari("Silvana", 53);
    osebe[84] = ustvari("Nana", 22);
    osebe[85] = ustvari("Amanda", 90);
    osebe[86] = ustvari("Mirjam", 69);
    osebe[87] = ustvari("Lea", 76);
    osebe[88] = ustvari("Matilda", 27);
    osebe[89] = ustvari("Jernej", 2);
    osebe[90] = ustvari("Emina", 96);
    osebe[91] = ustvari("Teo", 12);
    osebe[92] = ustvari("Elvir", 65);
    osebe[93] = ustvari("Aria", 69);
    osebe[94] = ustvari("Amadeja", 98);
    osebe[95] = ustvari("Leopoldina", 39);
    osebe[96] = ustvari("Lidija", 44);
    osebe[97] = ustvari("Mirjam", 15);
    osebe[98] = ustvari("Jernej", 24);
    osebe[99] = ustvari("Lidija", 36);
    osebe[100] = ustvari("Admir", 61);
    osebe[101] = ustvari("Lidija", 16);
    osebe[102] = ustvari("Taj", 97);
    osebe[103] = ustvari("Medina", 30);
    osebe[104] = ustvari("Lea", 82);
    osebe[105] = ustvari("Rebeka", 4);
    osebe[106] = ustvari("Slava", 14);
    osebe[107] = ustvari("Nermina", 47);
    osebe[108] = ustvari("Herman", 94);
    osebe[109] = ustvari("Tina", 26);
    osebe[110] = ustvari("Jonas", 11);
    osebe[111] = ustvari("Francka", 20);
    osebe[112] = ustvari("Medina", 46);
    osebe[113] = ustvari("Nermina", 34);
    osebe[114] = ustvari("Amadeja", 90);

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
