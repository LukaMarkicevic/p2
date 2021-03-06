
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
    int n = 385;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Haris", 29);
    osebe[1] = ustvari("Jerca", 50);
    osebe[2] = ustvari("Miodrag", 59);
    osebe[3] = ustvari("Jakob", 80);
    osebe[4] = ustvari("Boris", 53);
    osebe[5] = ustvari("Tiana", 19);
    osebe[6] = ustvari("Ivona", 36);
    osebe[7] = ustvari("Ahmet", 47);
    osebe[8] = ustvari("Tiana", 23);
    osebe[9] = ustvari("Brina", 20);
    osebe[10] = ustvari("Lili", 47);
    osebe[11] = ustvari("Tinkara", 9);
    osebe[12] = ustvari("Sven", 98);
    osebe[13] = ustvari("Tomi", 2);
    osebe[14] = ustvari("Kim", 40);
    osebe[15] = ustvari("Zlatko", 50);
    osebe[16] = ustvari("Tomislav", 1);
    osebe[17] = ustvari("Urban", 98);
    osebe[18] = ustvari("Lovro", 79);
    osebe[19] = ustvari("Dominika", 91);
    osebe[20] = ustvari("Florjan", 24);
    osebe[21] = ustvari("Grega", 79);
    osebe[22] = ustvari("Angela", 57);
    osebe[23] = ustvari("Timon", 79);
    osebe[24] = ustvari("Roman", 38);
    osebe[25] = ustvari("Antun", 37);
    osebe[26] = ustvari("Janez", 19);
    osebe[27] = ustvari("Ksenja", 27);
    osebe[28] = ustvari("Laura", 96);
    osebe[29] = ustvari("Selma", 48);
    osebe[30] = ustvari("Edina", 96);
    osebe[31] = ustvari("Vita", 32);
    osebe[32] = ustvari("Nedeljko", 88);
    osebe[33] = ustvari("Elena", 29);
    osebe[34] = ustvari("Nives", 77);
    osebe[35] = ustvari("Dominika", 92);
    osebe[36] = ustvari("Antun", 77);
    osebe[37] = ustvari("Zlatica", 47);
    osebe[38] = ustvari("Bogomira", 27);
    osebe[39] = ustvari("Dario", 12);
    osebe[40] = ustvari("Roman", 50);
    osebe[41] = ustvari("Ema", 50);
    osebe[42] = ustvari("Luka", 61);
    osebe[43] = ustvari("Ladislava", 3);
    osebe[44] = ustvari("Matic", 4);
    osebe[45] = ustvari("Branimir", 52);
    osebe[46] = ustvari("Erika", 12);
    osebe[47] = ustvari("Pia", 26);
    osebe[48] = ustvari("Tom", 69);
    osebe[49] = ustvari("Tomislav", 73);
    osebe[50] = ustvari("Radomir", 88);
    osebe[51] = ustvari("Regina", 34);
    osebe[52] = ustvari("Ivana", 22);
    osebe[53] = ustvari("Rozalija", 64);
    osebe[54] = ustvari("Vanesa", 89);
    osebe[55] = ustvari("Safet", 37);
    osebe[56] = ustvari("Iris", 23);
    osebe[57] = ustvari("Marjan", 60);
    osebe[58] = ustvari("Tristan", 22);
    osebe[59] = ustvari("Regina", 75);
    osebe[60] = ustvari("Erika", 63);
    osebe[61] = ustvari("Amar", 41);
    osebe[62] = ustvari("Sergeja", 50);
    osebe[63] = ustvari("Dominika", 27);
    osebe[64] = ustvari("Eva", 64);
    osebe[65] = ustvari("Miroslav", 9);
    osebe[66] = ustvari("Ignac", 42);
    osebe[67] = ustvari("Antun", 28);
    osebe[68] = ustvari("Amra", 31);
    osebe[69] = ustvari("Anel", 3);
    osebe[70] = ustvari("Marjanca", 82);
    osebe[71] = ustvari("Nihad", 84);
    osebe[72] = ustvari("Haris", 95);
    osebe[73] = ustvari("Tristan", 33);
    osebe[74] = ustvari("Nihad", 79);
    osebe[75] = ustvari("Ahmet", 5);
    osebe[76] = ustvari("Andrejka", 85);
    osebe[77] = ustvari("Jonas", 32);
    osebe[78] = ustvari("Mirjam", 64);
    osebe[79] = ustvari("Tea", 69);
    osebe[80] = ustvari("Nejc", 69);
    osebe[81] = ustvari("Miroslav", 44);
    osebe[82] = ustvari("Minka", 18);
    osebe[83] = ustvari("Vito", 5);
    osebe[84] = ustvari("Daliborka", 74);
    osebe[85] = ustvari("Lovro", 99);
    osebe[86] = ustvari("Alfonz", 82);
    osebe[87] = ustvari("Grega", 8);
    osebe[88] = ustvari("Patricija", 21);
    osebe[89] = ustvari("Alfonz", 20);
    osebe[90] = ustvari("Edi", 33);
    osebe[91] = ustvari("Tijan", 23);
    osebe[92] = ustvari("Nejc", 32);
    osebe[93] = ustvari("Sergeja", 74);
    osebe[94] = ustvari("Radovan", 35);
    osebe[95] = ustvari("Karl", 42);
    osebe[96] = ustvari("Dragomir", 85);
    osebe[97] = ustvari("Ladislava", 46);
    osebe[98] = ustvari("Anes", 36);
    osebe[99] = ustvari("Amra", 52);
    osebe[100] = ustvari("Anel", 35);
    osebe[101] = ustvari("Ajda", 67);
    osebe[102] = ustvari("Ema", 66);
    osebe[103] = ustvari("Medina", 77);
    osebe[104] = ustvari("Slavko", 45);
    osebe[105] = ustvari("Aneja", 35);
    osebe[106] = ustvari("Daliborka", 3);
    osebe[107] = ustvari("Tomo", 89);
    osebe[108] = ustvari("Ali", 35);
    osebe[109] = ustvari("Radoslav", 38);
    osebe[110] = ustvari("Karl", 98);
    osebe[111] = ustvari("Amar", 76);
    osebe[112] = ustvari("Melani", 7);
    osebe[113] = ustvari("Barica", 21);
    osebe[114] = ustvari("Hinko", 15);
    osebe[115] = ustvari("Marinka", 15);
    osebe[116] = ustvari("Alexander", 85);
    osebe[117] = ustvari("Verona", 86);
    osebe[118] = ustvari("Matija", 83);
    osebe[119] = ustvari("Iztok", 60);
    osebe[120] = ustvari("Ivanka", 89);
    osebe[121] = ustvari("Luka", 77);
    osebe[122] = ustvari("Viktorija", 58);
    osebe[123] = ustvari("Hasan", 50);
    osebe[124] = ustvari("Nejc", 62);
    osebe[125] = ustvari("Jonas", 4);
    osebe[126] = ustvari("Roman", 44);
    osebe[127] = ustvari("Iztok", 68);
    osebe[128] = ustvari("Simona", 20);
    osebe[129] = ustvari("Mojca", 35);
    osebe[130] = ustvari("Deni", 70);
    osebe[131] = ustvari("Miha", 80);
    osebe[132] = ustvari("Dunja", 21);
    osebe[133] = ustvari("Dragan", 43);
    osebe[134] = ustvari("Aldo", 42);
    osebe[135] = ustvari("Dragotin", 76);
    osebe[136] = ustvari("Petra", 47);
    osebe[137] = ustvari("Tristan", 65);
    osebe[138] = ustvari("Suad", 32);
    osebe[139] = ustvari("Iris", 55);
    osebe[140] = ustvari("Marjanca", 76);
    osebe[141] = ustvari("Nadja", 2);
    osebe[142] = ustvari("Viktorija", 80);
    osebe[143] = ustvari("Regina", 11);
    osebe[144] = ustvari("Darja", 20);
    osebe[145] = ustvari("Tiana", 77);
    osebe[146] = ustvari("Angelca", 98);
    osebe[147] = ustvari("Bogomira", 49);
    osebe[148] = ustvari("Judita", 51);
    osebe[149] = ustvari("Erik", 76);
    osebe[150] = ustvari("Margareta", 21);
    osebe[151] = ustvari("Zora", 9);
    osebe[152] = ustvari("Matic", 55);
    osebe[153] = ustvari("Tanja", 60);
    osebe[154] = ustvari("Andrejka", 9);
    osebe[155] = ustvari("Marjan", 49);
    osebe[156] = ustvari("Selma", 18);
    osebe[157] = ustvari("Nina", 30);
    osebe[158] = ustvari("Selma", 38);
    osebe[159] = ustvari("Eva", 36);
    osebe[160] = ustvari("Laura", 20);
    osebe[161] = ustvari("Sanela", 5);
    osebe[162] = ustvari("Zoja", 13);
    osebe[163] = ustvari("Anes", 2);
    osebe[164] = ustvari("Viktorija", 66);
    osebe[165] = ustvari("Rok", 79);
    osebe[166] = ustvari("Rozalija", 81);
    osebe[167] = ustvari("Dragan", 42);
    osebe[168] = ustvari("Erika", 64);
    osebe[169] = ustvari("Zoja", 28);
    osebe[170] = ustvari("Julij", 14);
    osebe[171] = ustvari("Ksenja", 63);
    osebe[172] = ustvari("Nadja", 21);
    osebe[173] = ustvari("Elizabeta", 51);
    osebe[174] = ustvari("Lovro", 24);
    osebe[175] = ustvari("Jerca", 34);
    osebe[176] = ustvari("Aneja", 66);
    osebe[177] = ustvari("Matias", 91);
    osebe[178] = ustvari("Julij", 24);
    osebe[179] = ustvari("Roman", 21);
    osebe[180] = ustvari("Drago", 11);
    osebe[181] = ustvari("Tomi", 24);
    osebe[182] = ustvari("Rozalija", 80);
    osebe[183] = ustvari("Hedvika", 16);
    osebe[184] = ustvari("Adrian", 5);
    osebe[185] = ustvari("Aldo", 95);
    osebe[186] = ustvari("Adian", 10);
    osebe[187] = ustvari("Dario", 23);
    osebe[188] = ustvari("Radoslav", 64);
    osebe[189] = ustvari("Borut", 74);
    osebe[190] = ustvari("Andreja", 32);
    osebe[191] = ustvari("Drago", 17);
    osebe[192] = ustvari("Denis", 60);
    osebe[193] = ustvari("Judita", 45);
    osebe[194] = ustvari("Adrian", 20);
    osebe[195] = ustvari("Iztok", 80);
    osebe[196] = ustvari("Valerija", 22);
    osebe[197] = ustvari("Florijan", 93);
    osebe[198] = ustvari("Barica", 78);
    osebe[199] = ustvari("Ignac", 56);
    osebe[200] = ustvari("Sergeja", 70);
    osebe[201] = ustvari("Matias", 32);
    osebe[202] = ustvari("Viktorija", 2);
    osebe[203] = ustvari("Tomi", 51);
    osebe[204] = ustvari("Smiljan", 90);
    osebe[205] = ustvari("Timi", 23);
    osebe[206] = ustvari("Adrian", 76);
    osebe[207] = ustvari("Roman", 93);
    osebe[208] = ustvari("Selma", 20);
    osebe[209] = ustvari("Elizabeta", 64);
    osebe[210] = ustvari("Hasan", 45);
    osebe[211] = ustvari("Sven", 98);
    osebe[212] = ustvari("Kai", 61);
    osebe[213] = ustvari("Patrik", 9);
    osebe[214] = ustvari("Nives", 50);
    osebe[215] = ustvari("Dragomir", 99);
    osebe[216] = ustvari("Nejc", 63);
    osebe[217] = ustvari("Vanessa", 27);
    osebe[218] = ustvari("Dominika", 15);
    osebe[219] = ustvari("Zoja", 7);
    osebe[220] = ustvari("Boris", 37);
    osebe[221] = ustvari("Majda", 53);
    osebe[222] = ustvari("Miodrag", 86);
    osebe[223] = ustvari("Tea", 51);
    osebe[224] = ustvari("Boris", 88);
    osebe[225] = ustvari("Adam", 49);
    osebe[226] = ustvari("Roman", 69);
    osebe[227] = ustvari("Tom", 95);
    osebe[228] = ustvari("Zorka", 59);
    osebe[229] = ustvari("Anes", 22);
    osebe[230] = ustvari("Ladislava", 55);
    osebe[231] = ustvari("Julija", 75);
    osebe[232] = ustvari("Grega", 44);
    osebe[233] = ustvari("Ksenja", 19);
    osebe[234] = ustvari("Laura", 68);
    osebe[235] = ustvari("Erika", 99);
    osebe[236] = ustvari("Erik", 64);
    osebe[237] = ustvari("Deni", 47);
    osebe[238] = ustvari("Manuela", 77);
    osebe[239] = ustvari("Radoslav", 34);
    osebe[240] = ustvari("Miro", 3);
    osebe[241] = ustvari("Urh", 64);
    osebe[242] = ustvari("Ladislava", 97);
    osebe[243] = ustvari("Stanka", 41);
    osebe[244] = ustvari("Anes", 8);
    osebe[245] = ustvari("Zmaga", 67);
    osebe[246] = ustvari("Nace", 46);
    osebe[247] = ustvari("Daliborka", 20);
    osebe[248] = ustvari("Tina", 53);
    osebe[249] = ustvari("Zinka", 86);
    osebe[250] = ustvari("Lili", 52);
    osebe[251] = ustvari("Ali", 26);
    osebe[252] = ustvari("Nadja", 99);
    osebe[253] = ustvari("Danica", 95);
    osebe[254] = ustvari("Tea", 58);
    osebe[255] = ustvari("Timi", 49);
    osebe[256] = ustvari("Nace", 45);
    osebe[257] = ustvari("Klavdija", 18);
    osebe[258] = ustvari("Julij", 59);
    osebe[259] = ustvari("Denis", 51);
    osebe[260] = ustvari("Tea", 39);
    osebe[261] = ustvari("Dragomir", 48);
    osebe[262] = ustvari("Lovro", 65);
    osebe[263] = ustvari("Hinko", 66);
    osebe[264] = ustvari("Boris", 57);
    osebe[265] = ustvari("Sven", 9);
    osebe[266] = ustvari("Denis", 24);
    osebe[267] = ustvari("Ema", 79);
    osebe[268] = ustvari("Dunja", 29);
    osebe[269] = ustvari("Zoja", 80);
    osebe[270] = ustvari("Suad", 19);
    osebe[271] = ustvari("Patricija", 30);
    osebe[272] = ustvari("Timi", 44);
    osebe[273] = ustvari("Dragomir", 74);
    osebe[274] = ustvari("Ladislav", 64);
    osebe[275] = ustvari("Adam", 86);
    osebe[276] = ustvari("Amra", 6);
    osebe[277] = ustvari("Nace", 45);
    osebe[278] = ustvari("Branimir", 16);
    osebe[279] = ustvari("Andrejka", 60);
    osebe[280] = ustvari("Matias", 4);
    osebe[281] = ustvari("Branimir", 34);
    osebe[282] = ustvari("Edi", 45);
    osebe[283] = ustvari("Marijan", 97);
    osebe[284] = ustvari("Samira", 9);
    osebe[285] = ustvari("Melani", 49);
    osebe[286] = ustvari("Antun", 88);
    osebe[287] = ustvari("Zlatko", 69);
    osebe[288] = ustvari("Tinkara", 88);
    osebe[289] = ustvari("Rudolf", 49);
    osebe[290] = ustvari("Verona", 9);
    osebe[291] = ustvari("Lovro", 51);
    osebe[292] = ustvari("Lili", 53);
    osebe[293] = ustvari("Samira", 10);
    osebe[294] = ustvari("Matias", 12);
    osebe[295] = ustvari("Kai", 18);
    osebe[296] = ustvari("Jerica", 48);
    osebe[297] = ustvari("Tea", 56);
    osebe[298] = ustvari("Roman", 33);
    osebe[299] = ustvari("France", 66);
    osebe[300] = ustvari("Maj", 4);
    osebe[301] = ustvari("Ignac", 71);
    osebe[302] = ustvari("Natalija", 61);
    osebe[303] = ustvari("Vanessa", 83);
    osebe[304] = ustvari("Marinka", 40);
    osebe[305] = ustvari("Urban", 78);
    osebe[306] = ustvari("Mehmed", 75);
    osebe[307] = ustvari("Andrejka", 34);
    osebe[308] = ustvari("Kai", 61);
    osebe[309] = ustvari("Nihad", 66);
    osebe[310] = ustvari("Elena", 34);
    osebe[311] = ustvari("Marinka", 72);
    osebe[312] = ustvari("Janez", 35);
    osebe[313] = ustvari("Zoja", 16);
    osebe[314] = ustvari("Hinko", 95);
    osebe[315] = ustvari("Maj", 83);
    osebe[316] = ustvari("Darja", 46);
    osebe[317] = ustvari("Angelca", 47);
    osebe[318] = ustvari("Matija", 80);
    osebe[319] = ustvari("Miroslav", 33);
    osebe[320] = ustvari("Rozalija", 98);
    osebe[321] = ustvari("Florijan", 81);
    osebe[322] = ustvari("Ksenja", 78);
    osebe[323] = ustvari("Natalija", 14);
    osebe[324] = ustvari("Slavko", 79);
    osebe[325] = ustvari("Klavdija", 65);
    osebe[326] = ustvari("Safet", 68);
    osebe[327] = ustvari("Brina", 20);
    osebe[328] = ustvari("Medina", 90);
    osebe[329] = ustvari("Marijan", 88);
    osebe[330] = ustvari("Marinka", 49);
    osebe[331] = ustvari("Medina", 92);
    osebe[332] = ustvari("Aneja", 26);
    osebe[333] = ustvari("Iztok", 28);
    osebe[334] = ustvari("Zdenko", 57);
    osebe[335] = ustvari("Karla", 15);
    osebe[336] = ustvari("Pia", 35);
    osebe[337] = ustvari("Bernarda", 84);
    osebe[338] = ustvari("Samira", 68);
    osebe[339] = ustvari("Nada", 24);
    osebe[340] = ustvari("Dragan", 58);
    osebe[341] = ustvari("Bogomira", 97);
    osebe[342] = ustvari("Miodrag", 16);
    osebe[343] = ustvari("Denis", 26);
    osebe[344] = ustvari("Nedeljko", 76);
    osebe[345] = ustvari("Enja", 27);
    osebe[346] = ustvari("Ignac", 21);
    osebe[347] = ustvari("Tomislav", 1);
    osebe[348] = ustvari("Franjo", 24);
    osebe[349] = ustvari("Janez", 73);
    osebe[350] = ustvari("Vid", 81);
    osebe[351] = ustvari("Vanesa", 55);
    osebe[352] = ustvari("France", 16);
    osebe[353] = ustvari("Jonas", 77);
    osebe[354] = ustvari("Adam", 24);
    osebe[355] = ustvari("Veronika", 51);
    osebe[356] = ustvari("Mehmed", 10);
    osebe[357] = ustvari("Rebeka", 80);
    osebe[358] = ustvari("Haris", 21);
    osebe[359] = ustvari("Lili", 30);
    osebe[360] = ustvari("Urh", 82);
    osebe[361] = ustvari("Daliborka", 4);
    osebe[362] = ustvari("Rok", 9);
    osebe[363] = ustvari("Radoslav", 18);
    osebe[364] = ustvari("Margareta", 42);
    osebe[365] = ustvari("Eva", 92);
    osebe[366] = ustvari("Petra", 54);
    osebe[367] = ustvari("Klavdija", 35);
    osebe[368] = ustvari("Luka", 29);
    osebe[369] = ustvari("Edi", 22);
    osebe[370] = ustvari("Ivona", 62);
    osebe[371] = ustvari("Drago", 49);
    osebe[372] = ustvari("Dario", 10);
    osebe[373] = ustvari("Patricija", 38);
    osebe[374] = ustvari("Tinkara", 86);
    osebe[375] = ustvari("Edi", 38);
    osebe[376] = ustvari("Miha", 4);
    osebe[377] = ustvari("Andrejka", 62);
    osebe[378] = ustvari("Veronika", 37);
    osebe[379] = ustvari("Dario", 88);
    osebe[380] = ustvari("Iris", 11);
    osebe[381] = ustvari("Stanka", 33);
    osebe[382] = ustvari("Darja", 86);
    osebe[383] = ustvari("Tom", 85);
    osebe[384] = ustvari("Vanessa", 61);

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
