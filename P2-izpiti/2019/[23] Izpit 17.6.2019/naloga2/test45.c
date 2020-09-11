
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
    int n = 167;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Viktorija", 52);
    osebe[1] = ustvari("Eman", 90);
    osebe[2] = ustvari("Aleksander", 6);
    osebe[3] = ustvari("Tajda", 71);
    osebe[4] = ustvari("Adisa", 9);
    osebe[5] = ustvari("Tia", 44);
    osebe[6] = ustvari("Zvonka", 74);
    osebe[7] = ustvari("Elizabeta", 30);
    osebe[8] = ustvari("Irina", 1);
    osebe[9] = ustvari("Darjan", 92);
    osebe[10] = ustvari("Melisa", 64);
    osebe[11] = ustvari("Breda", 65);
    osebe[12] = ustvari("Ela", 16);
    osebe[13] = ustvari("Stella", 50);
    osebe[14] = ustvari("Katja", 60);
    osebe[15] = ustvari("Rudi", 38);
    osebe[16] = ustvari("Zmaga", 35);
    osebe[17] = ustvari("Val", 27);
    osebe[18] = ustvari("Stanislava", 87);
    osebe[19] = ustvari("Stanislava", 94);
    osebe[20] = ustvari("Oto", 19);
    osebe[21] = ustvari("Nick", 15);
    osebe[22] = ustvari("Tia", 9);
    osebe[23] = ustvari("Ela", 96);
    osebe[24] = ustvari("Breda", 39);
    osebe[25] = ustvari("Katja", 83);
    osebe[26] = ustvari("Rade", 64);
    osebe[27] = ustvari("Julijan", 48);
    osebe[28] = ustvari("Apolonija", 86);
    osebe[29] = ustvari("Amir", 91);
    osebe[30] = ustvari("Mitja", 78);
    osebe[31] = ustvari("Ela", 64);
    osebe[32] = ustvari("Aleksander", 11);
    osebe[33] = ustvari("Vladimira", 18);
    osebe[34] = ustvari("Agata", 34);
    osebe[35] = ustvari("Hilda", 89);
    osebe[36] = ustvari("Barbka", 3);
    osebe[37] = ustvari("Stella", 55);
    osebe[38] = ustvari("Mitja", 63);
    osebe[39] = ustvari("Agata", 11);
    osebe[40] = ustvari("Samuel", 53);
    osebe[41] = ustvari("Val", 6);
    osebe[42] = ustvari("Hanna", 21);
    osebe[43] = ustvari("Hana", 8);
    osebe[44] = ustvari("Zvonka", 31);
    osebe[45] = ustvari("Ela", 77);
    osebe[46] = ustvari("Renata", 86);
    osebe[47] = ustvari("Mladen", 78);
    osebe[48] = ustvari("Ela", 71);
    osebe[49] = ustvari("Nick", 30);
    osebe[50] = ustvari("Apolonija", 82);
    osebe[51] = ustvari("Vili", 49);
    osebe[52] = ustvari("Jovo", 69);
    osebe[53] = ustvari("Edis", 22);
    osebe[54] = ustvari("Amir", 99);
    osebe[55] = ustvari("Val", 67);
    osebe[56] = ustvari("Herman", 66);
    osebe[57] = ustvari("Barbara", 3);
    osebe[58] = ustvari("Amna", 75);
    osebe[59] = ustvari("Renata", 29);
    osebe[60] = ustvari("Karel", 39);
    osebe[61] = ustvari("Rade", 82);
    osebe[62] = ustvari("Robert", 74);
    osebe[63] = ustvari("Mladen", 64);
    osebe[64] = ustvari("Hana", 64);
    osebe[65] = ustvari("Eman", 56);
    osebe[66] = ustvari("Florjan", 11);
    osebe[67] = ustvari("Barbka", 23);
    osebe[68] = ustvari("Vladimira", 68);
    osebe[69] = ustvari("Enej", 74);
    osebe[70] = ustvari("Marina", 84);
    osebe[71] = ustvari("Albert", 3);
    osebe[72] = ustvari("Rok", 78);
    osebe[73] = ustvari("Elvir", 79);
    osebe[74] = ustvari("Katica", 11);
    osebe[75] = ustvari("Katja", 86);
    osebe[76] = ustvari("Nino", 99);
    osebe[77] = ustvari("Vojka", 95);
    osebe[78] = ustvari("Katica", 94);
    osebe[79] = ustvari("Selma", 14);
    osebe[80] = ustvari("Jasmin", 65);
    osebe[81] = ustvari("Lana", 38);
    osebe[82] = ustvari("Viktorija", 78);
    osebe[83] = ustvari("France", 37);
    osebe[84] = ustvari("Nick", 47);
    osebe[85] = ustvari("Adriana", 60);
    osebe[86] = ustvari("Breda", 77);
    osebe[87] = ustvari("Robert", 22);
    osebe[88] = ustvari("Barbara", 47);
    osebe[89] = ustvari("Bogomil", 76);
    osebe[90] = ustvari("Elizabeta", 11);
    osebe[91] = ustvari("Breda", 8);
    osebe[92] = ustvari("Hanna", 77);
    osebe[93] = ustvari("Tia", 65);
    osebe[94] = ustvari("Vilko", 9);
    osebe[95] = ustvari("Edis", 51);
    osebe[96] = ustvari("Melisa", 11);
    osebe[97] = ustvari("Robert", 60);
    osebe[98] = ustvari("Hanna", 29);
    osebe[99] = ustvari("Agata", 65);
    osebe[100] = ustvari("Vojka", 21);
    osebe[101] = ustvari("Lana", 48);
    osebe[102] = ustvari("Amir", 69);
    osebe[103] = ustvari("Ciril", 69);
    osebe[104] = ustvari("Rudi", 78);
    osebe[105] = ustvari("Viktorija", 1);
    osebe[106] = ustvari("Barbara", 58);
    osebe[107] = ustvari("Tajda", 96);
    osebe[108] = ustvari("Robert", 16);
    osebe[109] = ustvari("Lana", 68);
    osebe[110] = ustvari("Melisa", 56);
    osebe[111] = ustvari("Mustafa", 61);
    osebe[112] = ustvari("Katja", 95);
    osebe[113] = ustvari("Barbara", 22);
    osebe[114] = ustvari("Stanislava", 73);
    osebe[115] = ustvari("Amir", 51);
    osebe[116] = ustvari("Nick", 17);
    osebe[117] = ustvari("Aleksander", 3);
    osebe[118] = ustvari("Vojka", 85);
    osebe[119] = ustvari("Aleksander", 9);
    osebe[120] = ustvari("Edis", 11);
    osebe[121] = ustvari("Tajda", 25);
    osebe[122] = ustvari("Selma", 70);
    osebe[123] = ustvari("Marina", 61);
    osebe[124] = ustvari("Kristjan", 29);
    osebe[125] = ustvari("Val", 95);
    osebe[126] = ustvari("Jovo", 57);
    osebe[127] = ustvari("Val", 78);
    osebe[128] = ustvari("Jovanka", 78);
    osebe[129] = ustvari("Nino", 45);
    osebe[130] = ustvari("Edita", 4);
    osebe[131] = ustvari("Damjana", 29);
    osebe[132] = ustvari("Edita", 18);
    osebe[133] = ustvari("Adisa", 20);
    osebe[134] = ustvari("Hilda", 60);
    osebe[135] = ustvari("Zvonka", 25);
    osebe[136] = ustvari("Rade", 2);
    osebe[137] = ustvari("Selma", 28);
    osebe[138] = ustvari("Jovanka", 36);
    osebe[139] = ustvari("Anica", 80);
    osebe[140] = ustvari("Lev", 72);
    osebe[141] = ustvari("Darjan", 68);
    osebe[142] = ustvari("Stella", 1);
    osebe[143] = ustvari("Katja", 95);
    osebe[144] = ustvari("Katja", 57);
    osebe[145] = ustvari("Elizabeta", 96);
    osebe[146] = ustvari("Tomi", 17);
    osebe[147] = ustvari("Anica", 2);
    osebe[148] = ustvari("Breda", 98);
    osebe[149] = ustvari("Melisa", 86);
    osebe[150] = ustvari("Nick", 69);
    osebe[151] = ustvari("Julijan", 66);
    osebe[152] = ustvari("Apolonija", 55);
    osebe[153] = ustvari("Rade", 51);
    osebe[154] = ustvari("Agata", 76);
    osebe[155] = ustvari("Katica", 37);
    osebe[156] = ustvari("Kristjan", 43);
    osebe[157] = ustvari("Vojka", 25);
    osebe[158] = ustvari("Bogomil", 57);
    osebe[159] = ustvari("Trina", 66);
    osebe[160] = ustvari("Vilko", 97);
    osebe[161] = ustvari("Apolonija", 84);
    osebe[162] = ustvari("Viktorija", 58);
    osebe[163] = ustvari("Eman", 7);
    osebe[164] = ustvari("Lev", 9);
    osebe[165] = ustvari("Gal", 41);
    osebe[166] = ustvari("Trina", 97);

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
