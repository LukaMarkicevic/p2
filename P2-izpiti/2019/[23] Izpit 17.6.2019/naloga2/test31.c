
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
    int n = 497;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Arian", 48);
    osebe[1] = ustvari("Lidija", 48);
    osebe[2] = ustvari("Otmar", 69);
    osebe[3] = ustvari("Lia", 55);
    osebe[4] = ustvari("Minka", 38);
    osebe[5] = ustvari("Ota", 84);
    osebe[6] = ustvari("Nea", 92);
    osebe[7] = ustvari("Melita", 14);
    osebe[8] = ustvari("Ljubomir", 62);
    osebe[9] = ustvari("Suzana", 22);
    osebe[10] = ustvari("Radovan", 10);
    osebe[11] = ustvari("Izak", 74);
    osebe[12] = ustvari("Amra", 67);
    osebe[13] = ustvari("Irma", 43);
    osebe[14] = ustvari("Tom", 86);
    osebe[15] = ustvari("Edvard", 93);
    osebe[16] = ustvari("Stanko", 19);
    osebe[17] = ustvari("Hasan", 92);
    osebe[18] = ustvari("Nermin", 21);
    osebe[19] = ustvari("Zorica", 93);
    osebe[20] = ustvari("Marica", 80);
    osebe[21] = ustvari("Kiara", 40);
    osebe[22] = ustvari("Selma", 13);
    osebe[23] = ustvari("Isabela", 82);
    osebe[24] = ustvari("Tatjana", 19);
    osebe[25] = ustvari("Valerija", 43);
    osebe[26] = ustvari("Vojka", 19);
    osebe[27] = ustvari("Miroslav", 27);
    osebe[28] = ustvari("Dragica", 20);
    osebe[29] = ustvari("Zinka", 72);
    osebe[30] = ustvari("Miha", 20);
    osebe[31] = ustvari("Mladen", 28);
    osebe[32] = ustvari("Slobodan", 66);
    osebe[33] = ustvari("Nihad", 43);
    osebe[34] = ustvari("Zvonimir", 98);
    osebe[35] = ustvari("Brina", 24);
    osebe[36] = ustvari("Adela", 93);
    osebe[37] = ustvari("Svit", 40);
    osebe[38] = ustvari("Bojana", 47);
    osebe[39] = ustvari("Tinkara", 97);
    osebe[40] = ustvari("Iza", 61);
    osebe[41] = ustvari("Anastasija", 32);
    osebe[42] = ustvari("Klavdij", 88);
    osebe[43] = ustvari("Liza", 9);
    osebe[44] = ustvari("Nai", 3);
    osebe[45] = ustvari("Ferdinand", 70);
    osebe[46] = ustvari("Timi", 53);
    osebe[47] = ustvari("Mirko", 29);
    osebe[48] = ustvari("Francka", 47);
    osebe[49] = ustvari("Maid", 11);
    osebe[50] = ustvari("Tine", 92);
    osebe[51] = ustvari("Branko", 19);
    osebe[52] = ustvari("Rajmund", 10);
    osebe[53] = ustvari("Daniel", 76);
    osebe[54] = ustvari("Amar", 80);
    osebe[55] = ustvari("Nal", 82);
    osebe[56] = ustvari("Bojan", 72);
    osebe[57] = ustvari("Ljiljana", 73);
    osebe[58] = ustvari("Dragana", 24);
    osebe[59] = ustvari("Damjan", 56);
    osebe[60] = ustvari("Slavko", 33);
    osebe[61] = ustvari("Radmila", 12);
    osebe[62] = ustvari("Miodrag", 61);
    osebe[63] = ustvari("Evan", 6);
    osebe[64] = ustvari("Albin", 52);
    osebe[65] = ustvari("Nikolaj", 27);
    osebe[66] = ustvari("Jovanka", 35);
    osebe[67] = ustvari("Zarja", 31);
    osebe[68] = ustvari("Adriana", 64);
    osebe[69] = ustvari("Daris", 93);
    osebe[70] = ustvari("Alojzija", 55);
    osebe[71] = ustvari("Apolonija", 30);
    osebe[72] = ustvari("Dragoljub", 67);
    osebe[73] = ustvari("Ignac", 3);
    osebe[74] = ustvari("Marjan", 32);
    osebe[75] = ustvari("Tia", 7);
    osebe[76] = ustvari("Ivo", 27);
    osebe[77] = ustvari("Daniela", 75);
    osebe[78] = ustvari("Nikita", 62);
    osebe[79] = ustvari("Dolores", 79);
    osebe[80] = ustvari("Samuel", 96);
    osebe[81] = ustvari("Antun", 33);
    osebe[82] = ustvari("Metod", 47);
    osebe[83] = ustvari("Vito", 36);
    osebe[84] = ustvari("Vladislav", 20);
    osebe[85] = ustvari("Aurora", 70);
    osebe[86] = ustvari("Dario", 6);
    osebe[87] = ustvari("Tijana", 7);
    osebe[88] = ustvari("Ajla", 31);
    osebe[89] = ustvari("Vid", 66);
    osebe[90] = ustvari("Amir", 33);
    osebe[91] = ustvari("Dunja", 7);
    osebe[92] = ustvari("Semir", 22);
    osebe[93] = ustvari("Angelca", 45);
    osebe[94] = ustvari("Ida", 97);
    osebe[95] = ustvari("Anton", 54);
    osebe[96] = ustvari("Robert", 48);
    osebe[97] = ustvari("Ahmet", 25);
    osebe[98] = ustvari("Svetlana", 27);
    osebe[99] = ustvari("Anastazija", 27);
    osebe[100] = ustvari("Klemen", 50);
    osebe[101] = ustvari("Elin", 32);
    osebe[102] = ustvari("Terezija", 8);
    osebe[103] = ustvari("Friderika", 73);
    osebe[104] = ustvari("Samo", 73);
    osebe[105] = ustvari("Valter", 83);
    osebe[106] = ustvari("Milenko", 9);
    osebe[107] = ustvari("Edi", 70);
    osebe[108] = ustvari("Polonca", 96);
    osebe[109] = ustvari("Tomi", 72);
    osebe[110] = ustvari("Erazem", 65);
    osebe[111] = ustvari("Amalija", 75);
    osebe[112] = ustvari("Niko", 81);
    osebe[113] = ustvari("Stefan", 47);
    osebe[114] = ustvari("Leopoldina", 62);
    osebe[115] = ustvari("Jolanda", 51);
    osebe[116] = ustvari("Asim", 99);
    osebe[117] = ustvari("Anabela", 62);
    osebe[118] = ustvari("Aldin", 17);
    osebe[119] = ustvari("Drago", 67);
    osebe[120] = ustvari("Biserka", 77);
    osebe[121] = ustvari("Zoja", 83);
    osebe[122] = ustvari("Sulejman", 44);
    osebe[123] = ustvari("Slava", 31);
    osebe[124] = ustvari("Frida", 14);
    osebe[125] = ustvari("Cecilija", 18);
    osebe[126] = ustvari("Darjan", 81);
    osebe[127] = ustvari("Albert", 54);
    osebe[128] = ustvari("Egon", 43);
    osebe[129] = ustvari("Dejan", 79);
    osebe[130] = ustvari("Eli", 28);
    osebe[131] = ustvari("Karmen", 92);
    osebe[132] = ustvari("Mina", 81);
    osebe[133] = ustvari("Tomislav", 82);
    osebe[134] = ustvari("Helena", 58);
    osebe[135] = ustvari("Nino", 68);
    osebe[136] = ustvari("Viljem", 59);
    osebe[137] = ustvari("Laura", 40);
    osebe[138] = ustvari("Josipa", 79);
    osebe[139] = ustvari("Leon", 91);
    osebe[140] = ustvari("Nana", 63);
    osebe[141] = ustvari("Tarik", 46);
    osebe[142] = ustvari("Lora", 40);
    osebe[143] = ustvari("Hilda", 64);
    osebe[144] = ustvari("Ciril", 19);
    osebe[145] = ustvari("Jadranka", 48);
    osebe[146] = ustvari("Senada", 71);
    osebe[147] = ustvari("Sara", 67);
    osebe[148] = ustvari("Maj", 89);
    osebe[149] = ustvari("Danica", 10);
    osebe[150] = ustvari("Sven", 78);
    osebe[151] = ustvari("Rafael", 46);
    osebe[152] = ustvari("Agata", 96);
    osebe[153] = ustvari("Lian", 28);
    osebe[154] = ustvari("Slavka", 5);
    osebe[155] = ustvari("Manca", 45);
    osebe[156] = ustvari("Marina", 48);
    osebe[157] = ustvari("Tiara", 11);
    osebe[158] = ustvari("Sabina", 59);
    osebe[159] = ustvari("Vitomir", 13);
    osebe[160] = ustvari("Nej", 10);
    osebe[161] = ustvari("Senad", 60);
    osebe[162] = ustvari("Ljudmila", 25);
    osebe[163] = ustvari("Rajko", 12);
    osebe[164] = ustvari("Alojz", 93);
    osebe[165] = ustvari("Antonija", 13);
    osebe[166] = ustvari("Indira", 60);
    osebe[167] = ustvari("Taj", 62);
    osebe[168] = ustvari("Muhamed", 81);
    osebe[169] = ustvari("Tisa", 44);
    osebe[170] = ustvari("Ajna", 12);
    osebe[171] = ustvari("Bogdan", 25);
    osebe[172] = ustvari("Larisa", 58);
    osebe[173] = ustvari("Franci", 38);
    osebe[174] = ustvari("Ina", 89);
    osebe[175] = ustvari("Tristan", 77);
    osebe[176] = ustvari("Jasmin", 90);
    osebe[177] = ustvari("Stella", 53);
    osebe[178] = ustvari("Ela", 2);
    osebe[179] = ustvari("Kristian", 86);
    osebe[180] = ustvari("Erik", 20);
    osebe[181] = ustvari("Berta", 47);
    osebe[182] = ustvari("Silva", 19);
    osebe[183] = ustvari("Mirela", 71);
    osebe[184] = ustvari("Rene", 47);
    osebe[185] = ustvari("Ignacij", 66);
    osebe[186] = ustvari("Jonas", 93);
    osebe[187] = ustvari("Radivoj", 37);
    osebe[188] = ustvari("Lovrenc", 30);
    osebe[189] = ustvari("Mirjam", 30);
    osebe[190] = ustvari("Stojan", 22);
    osebe[191] = ustvari("Aneja", 19);
    osebe[192] = ustvari("Drejc", 9);
    osebe[193] = ustvari("Predrag", 99);
    osebe[194] = ustvari("Iris", 40);
    osebe[195] = ustvari("Bernardka", 27);
    osebe[196] = ustvari("Zmaga", 25);
    osebe[197] = ustvari("Marija", 50);
    osebe[198] = ustvari("Julijana", 60);
    osebe[199] = ustvari("Gabrijela", 39);
    osebe[200] = ustvari("Vanesa", 2);
    osebe[201] = ustvari("Nadica", 62);
    osebe[202] = ustvari("Bruno", 62);
    osebe[203] = ustvari("Jaka", 39);
    osebe[204] = ustvari("Hedvika", 17);
    osebe[205] = ustvari("Toni", 42);
    osebe[206] = ustvari("Vesna", 73);
    osebe[207] = ustvari("Alja", 44);
    osebe[208] = ustvari("Silvestra", 50);
    osebe[209] = ustvari("Tadeja", 44);
    osebe[210] = ustvari("Konrad", 7);
    osebe[211] = ustvari("Barbara", 68);
    osebe[212] = ustvari("Adis", 97);
    osebe[213] = ustvari("Tanja", 56);
    osebe[214] = ustvari("Bine", 68);
    osebe[215] = ustvari("Ismet", 74);
    osebe[216] = ustvari("Lucija", 37);
    osebe[217] = ustvari("Elvir", 76);
    osebe[218] = ustvari("Mario", 17);
    osebe[219] = ustvari("Josip", 53);
    osebe[220] = ustvari("Ariana", 93);
    osebe[221] = ustvari("Dalibor", 19);
    osebe[222] = ustvari("Zara", 10);
    osebe[223] = ustvari("Oto", 90);
    osebe[224] = ustvari("Neva", 2);
    osebe[225] = ustvari("Lena", 43);
    osebe[226] = ustvari("Olga", 31);
    osebe[227] = ustvari("Ana", 52);
    osebe[228] = ustvari("Judita", 97);
    osebe[229] = ustvari("Breda", 80);
    osebe[230] = ustvari("Doroteja", 75);
    osebe[231] = ustvari("Veronika", 13);
    osebe[232] = ustvari("Mustafa", 80);
    osebe[233] = ustvari("Magdalena", 77);
    osebe[234] = ustvari("Jovo", 62);
    osebe[235] = ustvari("Anela", 94);
    osebe[236] = ustvari("Elvira", 16);
    osebe[237] = ustvari("Zofija", 47);
    osebe[238] = ustvari("Ludvik", 74);
    osebe[239] = ustvari("Inja", 52);
    osebe[240] = ustvari("Zlatica", 91);
    osebe[241] = ustvari("Florijan", 43);
    osebe[242] = ustvari("Mirjana", 79);
    osebe[243] = ustvari("Tibor", 10);
    osebe[244] = ustvari("Olivia", 99);
    osebe[245] = ustvari("Edin", 73);
    osebe[246] = ustvari("Anaja", 88);
    osebe[247] = ustvari("Tijan", 37);
    osebe[248] = ustvari("Aleksandra", 99);
    osebe[249] = ustvari("Tara", 4);
    osebe[250] = ustvari("Karl", 37);
    osebe[251] = ustvari("Zdenka", 97);
    osebe[252] = ustvari("Blanka", 43);
    osebe[253] = ustvari("Vlasta", 27);
    osebe[254] = ustvari("Sebastijan", 22);
    osebe[255] = ustvari("Maja", 70);
    osebe[256] = ustvari("Matejka", 69);
    osebe[257] = ustvari("Marijan", 89);
    osebe[258] = ustvari("Zdravko", 26);
    osebe[259] = ustvari("Darija", 75);
    osebe[260] = ustvari("Dragotin", 30);
    osebe[261] = ustvari("Gizela", 69);
    osebe[262] = ustvari("Din", 35);
    osebe[263] = ustvari("Silvo", 63);
    osebe[264] = ustvari("Janez", 56);
    osebe[265] = ustvari("Alisa", 8);
    osebe[266] = ustvari("Danilo", 70);
    osebe[267] = ustvari("Anes", 57);
    osebe[268] = ustvari("Ajda", 1);
    osebe[269] = ustvari("Emilija", 59);
    osebe[270] = ustvari("Sanel", 53);
    osebe[271] = ustvari("Enej", 18);
    osebe[272] = ustvari("Petar", 84);
    osebe[273] = ustvari("Nik", 83);
    osebe[274] = ustvari("Osman", 25);
    osebe[275] = ustvari("Florjan", 19);
    osebe[276] = ustvari("Adrian", 15);
    osebe[277] = ustvari("Jan", 50);
    osebe[278] = ustvari("Gaj", 89);
    osebe[279] = ustvari("Minea", 38);
    osebe[280] = ustvari("Loti", 19);
    osebe[281] = ustvari("Asja", 15);
    osebe[282] = ustvari("Silvana", 47);
    osebe[283] = ustvari("Ivanka", 48);
    osebe[284] = ustvari("Neja", 79);
    osebe[285] = ustvari("Ramiz", 7);
    osebe[286] = ustvari("Almira", 74);
    osebe[287] = ustvari("Izabela", 84);
    osebe[288] = ustvari("Vilibald", 47);
    osebe[289] = ustvari("Jadran", 99);
    osebe[290] = ustvari("Zmagoslav", 72);
    osebe[291] = ustvari("Sanja", 65);
    osebe[292] = ustvari("Amanda", 10);
    osebe[293] = ustvari("Rudi", 68);
    osebe[294] = ustvari("Ibrahim", 68);
    osebe[295] = ustvari("Mia", 30);
    osebe[296] = ustvari("Voranc", 77);
    osebe[297] = ustvari("Romana", 87);
    osebe[298] = ustvari("Pero", 28);
    osebe[299] = ustvari("Husein", 90);
    osebe[300] = ustvari("Lija", 73);
    osebe[301] = ustvari("Jakob", 25);
    osebe[302] = ustvari("Barbka", 65);
    osebe[303] = ustvari("Jela", 38);
    osebe[304] = ustvari("Jasmina", 39);
    osebe[305] = ustvari("Adrijana", 95);
    osebe[306] = ustvari("Anna", 64);
    osebe[307] = ustvari("Ljuba", 49);
    osebe[308] = ustvari("Vladimira", 8);
    osebe[309] = ustvari("Teodora", 22);
    osebe[310] = ustvari("Nina", 10);
    osebe[311] = ustvari("Zdravka", 18);
    osebe[312] = ustvari("Adian", 94);
    osebe[313] = ustvari("Miroslava", 15);
    osebe[314] = ustvari("Maksimilijan", 61);
    osebe[315] = ustvari("Samanta", 6);
    osebe[316] = ustvari("Mirsada", 26);
    osebe[317] = ustvari("Matej", 93);
    osebe[318] = ustvari("Gaia", 18);
    osebe[319] = ustvari("Teo", 20);
    osebe[320] = ustvari("Ian", 87);
    osebe[321] = ustvari("Kim", 52);
    osebe[322] = ustvari("Sandi", 75);
    osebe[323] = ustvari("Roza", 61);
    osebe[324] = ustvari("Deni", 15);
    osebe[325] = ustvari("Klara", 3);
    osebe[326] = ustvari("Milenka", 13);
    osebe[327] = ustvari("Dominik", 81);
    osebe[328] = ustvari("Hana", 83);
    osebe[329] = ustvari("Lana", 81);
    osebe[330] = ustvari("Vanda", 66);
    osebe[331] = ustvari("Franc", 85);
    osebe[332] = ustvari("Dora", 83);
    osebe[333] = ustvari("Ljubica", 38);
    osebe[334] = ustvari("Anel", 30);
    osebe[335] = ustvari("Dominika", 84);
    osebe[336] = ustvari("Aida", 14);
    osebe[337] = ustvari("Matic", 83);
    osebe[338] = ustvari("Gabriel", 83);
    osebe[339] = ustvari("Borislav", 80);
    osebe[340] = ustvari("Amna", 16);
    osebe[341] = ustvari("Emir", 44);
    osebe[342] = ustvari("Luka", 56);
    osebe[343] = ustvari("Stjepan", 57);
    osebe[344] = ustvari("Danijel", 96);
    osebe[345] = ustvari("Davud", 7);
    osebe[346] = ustvari("Neli", 38);
    osebe[347] = ustvari("Evelin", 10);
    osebe[348] = ustvari("Majda", 94);
    osebe[349] = ustvari("Vida", 4);
    osebe[350] = ustvari("Aleks", 30);
    osebe[351] = ustvari("Simon", 24);
    osebe[352] = ustvari("Mirzet", 26);
    osebe[353] = ustvari("Edita", 56);
    osebe[354] = ustvari("Tomo", 87);
    osebe[355] = ustvari("Anja", 46);
    osebe[356] = ustvari("Anastasia", 26);
    osebe[357] = ustvari("Alexander", 52);
    osebe[358] = ustvari("Vladimir", 40);
    osebe[359] = ustvari("Mirsad", 30);
    osebe[360] = ustvari("Melani", 96);
    osebe[361] = ustvari("Otilija", 52);
    osebe[362] = ustvari("Damjana", 77);
    osebe[363] = ustvari("Franko", 3);
    osebe[364] = ustvari("Nermina", 60);
    osebe[365] = ustvari("Danijela", 10);
    osebe[366] = ustvari("Nikola", 15);
    osebe[367] = ustvari("Emil", 71);
    osebe[368] = ustvari("Irena", 86);
    osebe[369] = ustvari("Bogomil", 51);
    osebe[370] = ustvari("Mihaela", 26);
    osebe[371] = ustvari("Ivan", 75);
    osebe[372] = ustvari("Fanika", 25);
    osebe[373] = ustvari("Radomir", 5);
    osebe[374] = ustvari("Lina", 58);
    osebe[375] = ustvari("Alfonz", 12);
    osebe[376] = ustvari("Manuela", 45);
    osebe[377] = ustvari("Jelica", 69);
    osebe[378] = ustvari("Darja", 30);
    osebe[379] = ustvari("Izet", 11);
    osebe[380] = ustvari("Alina", 48);
    osebe[381] = ustvari("Sergej", 44);
    osebe[382] = ustvari("Hermina", 49);
    osebe[383] = ustvari("Karol", 48);
    osebe[384] = ustvari("Fikret", 97);
    osebe[385] = ustvari("Mateo", 36);
    osebe[386] = ustvari("Ladislav", 90);
    osebe[387] = ustvari("Andrej", 49);
    osebe[388] = ustvari("Asmir", 2);
    osebe[389] = ustvari("Emina", 15);
    osebe[390] = ustvari("Boris", 7);
    osebe[391] = ustvari("Zoran", 94);
    osebe[392] = ustvari("Leila", 83);
    osebe[393] = ustvari("Milka", 83);
    osebe[394] = ustvari("Anita", 91);
    osebe[395] = ustvari("Edis", 99);
    osebe[396] = ustvari("Marjetka", 52);
    osebe[397] = ustvari("Marko", 4);
    osebe[398] = ustvari("Milena", 79);
    osebe[399] = ustvari("Gordana", 59);
    osebe[400] = ustvari("Maksimiljan", 23);
    osebe[401] = ustvari("Adin", 61);
    osebe[402] = ustvari("Tjan", 2);
    osebe[403] = ustvari("Katica", 55);
    osebe[404] = ustvari("Alan", 32);
    osebe[405] = ustvari("Renato", 65);
    osebe[406] = ustvari("Ronja", 74);
    osebe[407] = ustvari("Damijana", 20);
    osebe[408] = ustvari("Janko", 96);
    osebe[409] = ustvari("Kevin", 33);
    osebe[410] = ustvari("Davor", 47);
    osebe[411] = ustvari("Albina", 99);
    osebe[412] = ustvari("Nejc", 28);
    osebe[413] = ustvari("Dajana", 96);
    osebe[414] = ustvari("Brin", 76);
    osebe[415] = ustvari("Sonja", 3);
    osebe[416] = ustvari("Mirza", 7);
    osebe[417] = ustvari("Ava", 12);
    osebe[418] = ustvari("Manuel", 52);
    osebe[419] = ustvari("Meta", 60);
    osebe[420] = ustvari("Matija", 91);
    osebe[421] = ustvari("Samir", 18);
    osebe[422] = ustvari("Katja", 67);
    osebe[423] = ustvari("Rok", 62);
    osebe[424] = ustvari("Vincencij", 64);
    osebe[425] = ustvari("Karolina", 44);
    osebe[426] = ustvari("Elvedin", 49);
    osebe[427] = ustvari("Vekoslav", 29);
    osebe[428] = ustvari("Kristina", 76);
    osebe[429] = ustvari("Mato", 26);
    osebe[430] = ustvari("Beno", 47);
    osebe[431] = ustvari("Timotej", 64);
    osebe[432] = ustvari("Genovefa", 41);
    osebe[433] = ustvari("Damir", 41);
    osebe[434] = ustvari("Marjana", 41);
    osebe[435] = ustvari("Almir", 69);
    osebe[436] = ustvari("Benjamin", 47);
    osebe[437] = ustvari("Rozalija", 62);
    osebe[438] = ustvari("Oskar", 85);
    osebe[439] = ustvari("Radojka", 61);
    osebe[440] = ustvari("Suad", 17);
    osebe[441] = ustvari("Radoslav", 47);
    osebe[442] = ustvari("Armin", 68);
    osebe[443] = ustvari("Martin", 32);
    osebe[444] = ustvari("Sabrina", 55);
    osebe[445] = ustvari("Erna", 83);
    osebe[446] = ustvari("Feliks", 87);
    osebe[447] = ustvari("Renata", 14);
    osebe[448] = ustvari("Gloria", 15);
    osebe[449] = ustvari("Peter", 54);
    osebe[450] = ustvari("Nada", 38);
    osebe[451] = ustvari("Daliborka", 22);
    osebe[452] = ustvari("Ksenja", 29);
    osebe[453] = ustvari("Slobodanka", 84);
    osebe[454] = ustvari("Miran", 77);
    osebe[455] = ustvari("Rebeka", 91);
    osebe[456] = ustvari("Tai", 20);
    osebe[457] = ustvari("Janja", 62);
    osebe[458] = ustvari("Marjetica", 78);
    osebe[459] = ustvari("Rubi", 2);
    osebe[460] = ustvari("Bernarda", 18);
    osebe[461] = ustvari("Domen", 39);
    osebe[462] = ustvari("Polona", 38);
    osebe[463] = ustvari("Pavla", 19);
    osebe[464] = ustvari("Ada", 88);
    osebe[465] = ustvari("Zlata", 90);
    osebe[466] = ustvari("Haris", 68);
    osebe[467] = ustvari("Ernest", 46);
    osebe[468] = ustvari("Teja", 92);
    osebe[469] = ustvari("Pia", 5);
    osebe[470] = ustvari("Adisa", 71);
    osebe[471] = ustvari("Darko", 6);
    osebe[472] = ustvari("Goran", 32);
    osebe[473] = ustvari("Vincenc", 29);
    osebe[474] = ustvari("Viktorija", 31);
    osebe[475] = ustvari("Andreja", 30);
    osebe[476] = ustvari("Amina", 38);
    osebe[477] = ustvari("Anica", 11);
    osebe[478] = ustvari("Rasim", 48);
    osebe[479] = ustvari("Dragomir", 3);
    osebe[480] = ustvari("Tin", 99);
    osebe[481] = ustvari("Gorazd", 54);
    osebe[482] = ustvari("Dimitrij", 27);
    osebe[483] = ustvari("Jerca", 70);
    osebe[484] = ustvari("Henrik", 43);
    osebe[485] = ustvari("Sebastian", 5);
    osebe[486] = ustvari("Anika", 17);
    osebe[487] = ustvari("Herman", 43);
    osebe[488] = ustvari("Diana", 28);
    osebe[489] = ustvari("Lin", 96);
    osebe[490] = ustvari("Klaudija", 80);
    osebe[491] = ustvari("Leja", 56);
    osebe[492] = ustvari("Vasja", 11);
    osebe[493] = ustvari("Kris", 24);
    osebe[494] = ustvari("Stana", 41);
    osebe[495] = ustvari("Nedeljko", 84);
    osebe[496] = ustvari("Jasminka", 95);

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
