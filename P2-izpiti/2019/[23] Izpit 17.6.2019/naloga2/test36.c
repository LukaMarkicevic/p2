
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
    int n = 668;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Vinko", 64);
    osebe[1] = ustvari("Darjo", 6);
    osebe[2] = ustvari("Metod", 46);
    osebe[3] = ustvari("Elena", 57);
    osebe[4] = ustvari("Janja", 67);
    osebe[5] = ustvari("Aria", 5);
    osebe[6] = ustvari("Senad", 37);
    osebe[7] = ustvari("Deni", 22);
    osebe[8] = ustvari("Manuel", 72);
    osebe[9] = ustvari("Robert", 61);
    osebe[10] = ustvari("Karla", 86);
    osebe[11] = ustvari("Tit", 71);
    osebe[12] = ustvari("Mehmed", 76);
    osebe[13] = ustvari("Kenan", 8);
    osebe[14] = ustvari("Barica", 6);
    osebe[15] = ustvari("Elvira", 60);
    osebe[16] = ustvari("Milanka", 28);
    osebe[17] = ustvari("Draga", 43);
    osebe[18] = ustvari("Svit", 55);
    osebe[19] = ustvari("Patrick", 86);
    osebe[20] = ustvari("Jernej", 90);
    osebe[21] = ustvari("Anel", 25);
    osebe[22] = ustvari("Matic", 84);
    osebe[23] = ustvari("Vili", 77);
    osebe[24] = ustvari("Ksenija", 14);
    osebe[25] = ustvari("Anabela", 99);
    osebe[26] = ustvari("Anela", 29);
    osebe[27] = ustvari("Ajdin", 86);
    osebe[28] = ustvari("Brin", 55);
    osebe[29] = ustvari("Inaja", 51);
    osebe[30] = ustvari("Pavel", 25);
    osebe[31] = ustvari("Dora", 52);
    osebe[32] = ustvari("Geza", 55);
    osebe[33] = ustvari("Franc", 75);
    osebe[34] = ustvari("Marino", 1);
    osebe[35] = ustvari("Mijo", 87);
    osebe[36] = ustvari("Mirjam", 97);
    osebe[37] = ustvari("Darjan", 44);
    osebe[38] = ustvari("Sebastjan", 88);
    osebe[39] = ustvari("Elma", 61);
    osebe[40] = ustvari("Glorija", 72);
    osebe[41] = ustvari("Ela", 46);
    osebe[42] = ustvari("Jana", 81);
    osebe[43] = ustvari("Teodor", 46);
    osebe[44] = ustvari("Eldin", 90);
    osebe[45] = ustvari("Melanie", 3);
    osebe[46] = ustvari("Edin", 23);
    osebe[47] = ustvari("Stana", 96);
    osebe[48] = ustvari("Henrik", 7);
    osebe[49] = ustvari("Ines", 77);
    osebe[50] = ustvari("Rudolf", 33);
    osebe[51] = ustvari("Borislav", 42);
    osebe[52] = ustvari("Otilija", 91);
    osebe[53] = ustvari("Dragica", 65);
    osebe[54] = ustvari("Cvetko", 20);
    osebe[55] = ustvari("Aleksandar", 88);
    osebe[56] = ustvari("Lija", 76);
    osebe[57] = ustvari("Jerneja", 88);
    osebe[58] = ustvari("Mladen", 31);
    osebe[59] = ustvari("Ignacij", 27);
    osebe[60] = ustvari("Taja", 20);
    osebe[61] = ustvari("Enej", 44);
    osebe[62] = ustvari("Izabela", 34);
    osebe[63] = ustvari("Slava", 46);
    osebe[64] = ustvari("Tijan", 16);
    osebe[65] = ustvari("Tiana", 53);
    osebe[66] = ustvari("Lora", 9);
    osebe[67] = ustvari("Zoran", 84);
    osebe[68] = ustvari("Mirsad", 78);
    osebe[69] = ustvari("Ladislava", 18);
    osebe[70] = ustvari("Neli", 85);
    osebe[71] = ustvari("Julijana", 14);
    osebe[72] = ustvari("Teja", 36);
    osebe[73] = ustvari("Anja", 53);
    osebe[74] = ustvari("Tina", 75);
    osebe[75] = ustvari("Antonija", 60);
    osebe[76] = ustvari("Ljuba", 20);
    osebe[77] = ustvari("Marjeta", 60);
    osebe[78] = ustvari("Kai", 4);
    osebe[79] = ustvari("Nenad", 3);
    osebe[80] = ustvari("Radomir", 74);
    osebe[81] = ustvari("Alina", 43);
    osebe[82] = ustvari("Suad", 38);
    osebe[83] = ustvari("Ilija", 65);
    osebe[84] = ustvari("Edvin", 96);
    osebe[85] = ustvari("Fadil", 44);
    osebe[86] = ustvari("Azra", 19);
    osebe[87] = ustvari("Neda", 77);
    osebe[88] = ustvari("Anaja", 62);
    osebe[89] = ustvari("Gaia", 22);
    osebe[90] = ustvari("Mojca", 96);
    osebe[91] = ustvari("Matejka", 91);
    osebe[92] = ustvari("Hanna", 98);
    osebe[93] = ustvari("Barbara", 31);
    osebe[94] = ustvari("Nejc", 30);
    osebe[95] = ustvari("Oliver", 76);
    osebe[96] = ustvari("Ajda", 45);
    osebe[97] = ustvari("Pavla", 26);
    osebe[98] = ustvari("Pavlina", 51);
    osebe[99] = ustvari("France", 4);
    osebe[100] = ustvari("Aleksandra", 54);
    osebe[101] = ustvari("Vekoslav", 99);
    osebe[102] = ustvari("Medina", 30);
    osebe[103] = ustvari("Sanela", 1);
    osebe[104] = ustvari("Nives", 49);
    osebe[105] = ustvari("Luka", 22);
    osebe[106] = ustvari("Milan", 73);
    osebe[107] = ustvari("Edis", 57);
    osebe[108] = ustvari("Manuela", 1);
    osebe[109] = ustvari("Zara", 39);
    osebe[110] = ustvari("Isabela", 22);
    osebe[111] = ustvari("Tatjana", 83);
    osebe[112] = ustvari("Rozina", 8);
    osebe[113] = ustvari("Nejla", 66);
    osebe[114] = ustvari("Ariana", 16);
    osebe[115] = ustvari("Ankica", 85);
    osebe[116] = ustvari("Filip", 43);
    osebe[117] = ustvari("Greta", 14);
    osebe[118] = ustvari("Davud", 26);
    osebe[119] = ustvari("Suzana", 8);
    osebe[120] = ustvari("Zmaga", 27);
    osebe[121] = ustvari("Adrian", 88);
    osebe[122] = ustvari("Maj", 23);
    osebe[123] = ustvari("Tine", 3);
    osebe[124] = ustvari("Silvana", 93);
    osebe[125] = ustvari("Vlado", 24);
    osebe[126] = ustvari("Stanka", 52);
    osebe[127] = ustvari("Sofia", 68);
    osebe[128] = ustvari("Mia", 1);
    osebe[129] = ustvari("Voranc", 94);
    osebe[130] = ustvari("Aleks", 70);
    osebe[131] = ustvari("Magda", 4);
    osebe[132] = ustvari("Alojzija", 27);
    osebe[133] = ustvari("Klemen", 26);
    osebe[134] = ustvari("Jani", 82);
    osebe[135] = ustvari("Ida", 92);
    osebe[136] = ustvari("Patricia", 72);
    osebe[137] = ustvari("Valerija", 41);
    osebe[138] = ustvari("Nemanja", 80);
    osebe[139] = ustvari("Timi", 37);
    osebe[140] = ustvari("Adela", 97);
    osebe[141] = ustvari("Domen", 36);
    osebe[142] = ustvari("Daliborka", 65);
    osebe[143] = ustvari("Kata", 31);
    osebe[144] = ustvari("Alenka", 84);
    osebe[145] = ustvari("Ladislav", 40);
    osebe[146] = ustvari("Vita", 16);
    osebe[147] = ustvari("Ferdinand", 96);
    osebe[148] = ustvari("Konrad", 62);
    osebe[149] = ustvari("Tanaja", 35);
    osebe[150] = ustvari("Melita", 4);
    osebe[151] = ustvari("Bor", 52);
    osebe[152] = ustvari("Edina", 41);
    osebe[153] = ustvari("Tijana", 90);
    osebe[154] = ustvari("Olivia", 6);
    osebe[155] = ustvari("Samo", 44);
    osebe[156] = ustvari("Liam", 8);
    osebe[157] = ustvari("Sandi", 54);
    osebe[158] = ustvari("Alan", 76);
    osebe[159] = ustvari("Muhamed", 99);
    osebe[160] = ustvari("Magdalena", 38);
    osebe[161] = ustvari("Boro", 24);
    osebe[162] = ustvari("Gorazd", 21);
    osebe[163] = ustvari("Vanesa", 14);
    osebe[164] = ustvari("Eman", 26);
    osebe[165] = ustvari("Arian", 46);
    osebe[166] = ustvari("Martin", 54);
    osebe[167] = ustvari("Anna", 93);
    osebe[168] = ustvari("Simon", 31);
    osebe[169] = ustvari("Alexander", 61);
    osebe[170] = ustvari("Milenka", 10);
    osebe[171] = ustvari("Bernardka", 44);
    osebe[172] = ustvari("Stanko", 38);
    osebe[173] = ustvari("Drago", 58);
    osebe[174] = ustvari("Ivan", 40);
    osebe[175] = ustvari("Stojan", 33);
    osebe[176] = ustvari("Adis", 31);
    osebe[177] = ustvari("Lana", 80);
    osebe[178] = ustvari("Vanda", 98);
    osebe[179] = ustvari("Hana", 48);
    osebe[180] = ustvari("Eva", 67);
    osebe[181] = ustvari("Rade", 84);
    osebe[182] = ustvari("Angelca", 45);
    osebe[183] = ustvari("Sanja", 6);
    osebe[184] = ustvari("Monika", 52);
    osebe[185] = ustvari("Daniel", 63);
    osebe[186] = ustvari("Branimir", 33);
    osebe[187] = ustvari("Naja", 44);
    osebe[188] = ustvari("Sara", 15);
    osebe[189] = ustvari("Iza", 28);
    osebe[190] = ustvari("Dino", 75);
    osebe[191] = ustvari("Jadranka", 74);
    osebe[192] = ustvari("Patrik", 41);
    osebe[193] = ustvari("Zlata", 27);
    osebe[194] = ustvari("Tarik", 35);
    osebe[195] = ustvari("Lian", 27);
    osebe[196] = ustvari("Ludvik", 84);
    osebe[197] = ustvari("Milka", 73);
    osebe[198] = ustvari("Ramiz", 42);
    osebe[199] = ustvari("Amanda", 68);
    osebe[200] = ustvari("Fikret", 24);
    osebe[201] = ustvari("Tinkara", 79);
    osebe[202] = ustvari("Miodrag", 39);
    osebe[203] = ustvari("Laura", 83);
    osebe[204] = ustvari("Ismet", 33);
    osebe[205] = ustvari("Sarah", 71);
    osebe[206] = ustvari("Vladislav", 99);
    osebe[207] = ustvari("Adriana", 35);
    osebe[208] = ustvari("Ahmet", 16);
    osebe[209] = ustvari("Evelina", 66);
    osebe[210] = ustvari("Zoja", 8);
    osebe[211] = ustvari("Aleksander", 61);
    osebe[212] = ustvari("Roza", 96);
    osebe[213] = ustvari("Ingrid", 50);
    osebe[214] = ustvari("Amna", 89);
    osebe[215] = ustvari("Adian", 77);
    osebe[216] = ustvari("Patricija", 9);
    osebe[217] = ustvari("Marko", 92);
    osebe[218] = ustvari("Justina", 42);
    osebe[219] = ustvari("Vilko", 6);
    osebe[220] = ustvari("Goran", 79);
    osebe[221] = ustvari("Samuel", 72);
    osebe[222] = ustvari("Klara", 6);
    osebe[223] = ustvari("Branislav", 77);
    osebe[224] = ustvari("Emina", 93);
    osebe[225] = ustvari("Lamija", 62);
    osebe[226] = ustvari("Mirko", 75);
    osebe[227] = ustvari("Enja", 71);
    osebe[228] = ustvari("Ivica", 60);
    osebe[229] = ustvari("Janko", 69);
    osebe[230] = ustvari("Jovan", 68);
    osebe[231] = ustvari("Rihard", 1);
    osebe[232] = ustvari("Barbka", 27);
    osebe[233] = ustvari("Valentina", 80);
    osebe[234] = ustvari("Vojko", 9);
    osebe[235] = ustvari("Teo", 90);
    osebe[236] = ustvari("Julij", 80);
    osebe[237] = ustvari("Bogomil", 57);
    osebe[238] = ustvari("Ula", 90);
    osebe[239] = ustvari("Slobodanka", 99);
    osebe[240] = ustvari("Damjan", 58);
    osebe[241] = ustvari("Jolanda", 79);
    osebe[242] = ustvari("Leonida", 51);
    osebe[243] = ustvari("Husein", 16);
    osebe[244] = ustvari("Jozefa", 29);
    osebe[245] = ustvari("Trina", 34);
    osebe[246] = ustvari("Sergeja", 99);
    osebe[247] = ustvari("Andrejka", 75);
    osebe[248] = ustvari("Zlatko", 39);
    osebe[249] = ustvari("Slavica", 13);
    osebe[250] = ustvari("Leila", 75);
    osebe[251] = ustvari("Jan", 60);
    osebe[252] = ustvari("Stjepan", 15);
    osebe[253] = ustvari("Nace", 75);
    osebe[254] = ustvari("Larisa", 49);
    osebe[255] = ustvari("Bogdan", 58);
    osebe[256] = ustvari("Verica", 31);
    osebe[257] = ustvari("Pija", 33);
    osebe[258] = ustvari("Alma", 2);
    osebe[259] = ustvari("Marcel", 3);
    osebe[260] = ustvari("Rudi", 52);
    osebe[261] = ustvari("Franjo", 9);
    osebe[262] = ustvari("Julia", 94);
    osebe[263] = ustvari("Anita", 67);
    osebe[264] = ustvari("Lin", 38);
    osebe[265] = ustvari("Tadej", 46);
    osebe[266] = ustvari("Klaudija", 83);
    osebe[267] = ustvari("Silvija", 74);
    osebe[268] = ustvari("Nadica", 14);
    osebe[269] = ustvari("Vitan", 74);
    osebe[270] = ustvari("Melina", 67);
    osebe[271] = ustvari("Jasna", 70);
    osebe[272] = ustvari("Gabrijel", 70);
    osebe[273] = ustvari("Bine", 88);
    osebe[274] = ustvari("Marija", 88);
    osebe[275] = ustvari("Nino", 94);
    osebe[276] = ustvari("Silvester", 13);
    osebe[277] = ustvari("Cirila", 4);
    osebe[278] = ustvari("Taj", 97);
    osebe[279] = ustvari("Ava", 79);
    osebe[280] = ustvari("Mateja", 83);
    osebe[281] = ustvari("Renata", 37);
    osebe[282] = ustvari("Mirnes", 4);
    osebe[283] = ustvari("Aja", 14);
    osebe[284] = ustvari("Julijan", 50);
    osebe[285] = ustvari("Lara", 54);
    osebe[286] = ustvari("Valentin", 22);
    osebe[287] = ustvari("Lukas", 21);
    osebe[288] = ustvari("Anastasija", 39);
    osebe[289] = ustvari("Vilibald", 91);
    osebe[290] = ustvari("Damijan", 5);
    osebe[291] = ustvari("Radojka", 68);
    osebe[292] = ustvari("Dalibor", 58);
    osebe[293] = ustvari("Polonca", 52);
    osebe[294] = ustvari("Cecilija", 23);
    osebe[295] = ustvari("Avgust", 57);
    osebe[296] = ustvari("Timotej", 3);
    osebe[297] = ustvari("Adisa", 38);
    osebe[298] = ustvari("Vitomir", 19);
    osebe[299] = ustvari("Tadeja", 43);
    osebe[300] = ustvari("Danijela", 49);
    osebe[301] = ustvari("Ljubomir", 50);
    osebe[302] = ustvari("Mihaela", 23);
    osebe[303] = ustvari("Ota", 69);
    osebe[304] = ustvari("Ignac", 49);
    osebe[305] = ustvari("Ina", 22);
    osebe[306] = ustvari("Mitja", 31);
    osebe[307] = ustvari("Eli", 5);
    osebe[308] = ustvari("Nena", 66);
    osebe[309] = ustvari("Alfonz", 41);
    osebe[310] = ustvari("Natalija", 49);
    osebe[311] = ustvari("Manca", 33);
    osebe[312] = ustvari("Ciril", 36);
    osebe[313] = ustvari("Evelin", 17);
    osebe[314] = ustvari("Edita", 57);
    osebe[315] = ustvari("Aurora", 67);
    osebe[316] = ustvari("Milorad", 13);
    osebe[317] = ustvari("Gizela", 73);
    osebe[318] = ustvari("Karmen", 45);
    osebe[319] = ustvari("Daniela", 53);
    osebe[320] = ustvari("Mile", 7);
    osebe[321] = ustvari("Erika", 40);
    osebe[322] = ustvari("Dejan", 53);
    osebe[323] = ustvari("Gabriela", 29);
    osebe[324] = ustvari("Lan", 76);
    osebe[325] = ustvari("Ada", 78);
    osebe[326] = ustvari("Aneja", 45);
    osebe[327] = ustvari("Anes", 45);
    osebe[328] = ustvari("Zvezdana", 79);
    osebe[329] = ustvari("Otmar", 4);
    osebe[330] = ustvari("Antun", 57);
    osebe[331] = ustvari("Alojz", 32);
    osebe[332] = ustvari("Drejc", 27);
    osebe[333] = ustvari("Dragoljub", 54);
    osebe[334] = ustvari("Mihael", 38);
    osebe[335] = ustvari("Gordana", 49);
    osebe[336] = ustvari("Lidija", 91);
    osebe[337] = ustvari("Lorena", 60);
    osebe[338] = ustvari("Karl", 56);
    osebe[339] = ustvari("Janez", 22);
    osebe[340] = ustvari("Hedvika", 48);
    osebe[341] = ustvari("Pero", 96);
    osebe[342] = ustvari("Iztok", 88);
    osebe[343] = ustvari("Vanja", 7);
    osebe[344] = ustvari("Adnan", 18);
    osebe[345] = ustvari("Amadeja", 49);
    osebe[346] = ustvari("Ana", 48);
    osebe[347] = ustvari("Danilo", 34);
    osebe[348] = ustvari("Nik", 11);
    osebe[349] = ustvari("Gaja", 26);
    osebe[350] = ustvari("Dean", 58);
    osebe[351] = ustvari("Nea", 50);
    osebe[352] = ustvari("Viktorija", 97);
    osebe[353] = ustvari("Brigita", 54);
    osebe[354] = ustvari("Toni", 58);
    osebe[355] = ustvari("Nikola", 53);
    osebe[356] = ustvari("Biserka", 90);
    osebe[357] = ustvari("Zora", 84);
    osebe[358] = ustvari("Tajda", 17);
    osebe[359] = ustvari("Selma", 58);
    osebe[360] = ustvari("Milena", 97);
    osebe[361] = ustvari("Savo", 23);
    osebe[362] = ustvari("Mirica", 92);
    osebe[363] = ustvari("Jasmina", 85);
    osebe[364] = ustvari("Irena", 6);
    osebe[365] = ustvari("Ivana", 95);
    osebe[366] = ustvari("Hilda", 95);
    osebe[367] = ustvari("Din", 72);
    osebe[368] = ustvari("Kazimir", 19);
    osebe[369] = ustvari("Alex", 48);
    osebe[370] = ustvari("Mira", 63);
    osebe[371] = ustvari("Bernard", 58);
    osebe[372] = ustvari("Tomislav", 74);
    osebe[373] = ustvari("Marsel", 46);
    osebe[374] = ustvari("Anastazija", 27);
    osebe[375] = ustvari("Almir", 72);
    osebe[376] = ustvari("Irma", 82);
    osebe[377] = ustvari("Leonardo", 64);
    osebe[378] = ustvari("Ajla", 46);
    osebe[379] = ustvari("Evita", 38);
    osebe[380] = ustvari("Tom", 94);
    osebe[381] = ustvari("Aida", 53);
    osebe[382] = ustvari("Ian", 11);
    osebe[383] = ustvari("Anica", 47);
    osebe[384] = ustvari("Grega", 47);
    osebe[385] = ustvari("Zarja", 52);
    osebe[386] = ustvari("Lev", 27);
    osebe[387] = ustvari("Sven", 38);
    osebe[388] = ustvari("Branko", 59);
    osebe[389] = ustvari("Nikolaj", 97);
    osebe[390] = ustvari("Radivoj", 65);
    osebe[391] = ustvari("Ajna", 46);
    osebe[392] = ustvari("Matilda", 54);
    osebe[393] = ustvari("Mirzet", 89);
    osebe[394] = ustvari("Lovrenc", 20);
    osebe[395] = ustvari("Dario", 36);
    osebe[396] = ustvari("Safet", 65);
    osebe[397] = ustvari("Ivo", 47);
    osebe[398] = ustvari("Jure", 64);
    osebe[399] = ustvari("Blanka", 13);
    osebe[400] = ustvari("Tim", 95);
    osebe[401] = ustvari("Nastja", 42);
    osebe[402] = ustvari("Feliks", 9);
    osebe[403] = ustvari("Bojana", 14);
    osebe[404] = ustvari("Lili", 66);
    osebe[405] = ustvari("Irina", 49);
    osebe[406] = ustvari("Amir", 98);
    osebe[407] = ustvari("Lucija", 29);
    osebe[408] = ustvari("Tomo", 80);
    osebe[409] = ustvari("Ella", 24);
    osebe[410] = ustvari("Asmir", 35);
    osebe[411] = ustvari("Vida", 3);
    osebe[412] = ustvari("Admir", 64);
    osebe[413] = ustvari("Marjetka", 82);
    osebe[414] = ustvari("Valter", 92);
    osebe[415] = ustvari("Daris", 99);
    osebe[416] = ustvari("Elvisa", 8);
    osebe[417] = ustvari("Lilijana", 51);
    osebe[418] = ustvari("Florjan", 66);
    osebe[419] = ustvari("Edi", 36);
    osebe[420] = ustvari("Tjan", 12);
    osebe[421] = ustvari("Herta", 17);
    osebe[422] = ustvari("David", 86);
    osebe[423] = ustvari("Nada", 99);
    osebe[424] = ustvari("Nadja", 89);
    osebe[425] = ustvari("Tibor", 98);
    osebe[426] = ustvari("Tai", 42);
    osebe[427] = ustvari("Loti", 16);
    osebe[428] = ustvari("Rajmund", 4);
    osebe[429] = ustvari("Erazem", 86);
    osebe[430] = ustvari("Kristina", 50);
    osebe[431] = ustvari("Izet", 93);
    osebe[432] = ustvari("Hermina", 70);
    osebe[433] = ustvari("Marta", 89);
    osebe[434] = ustvari("Mina", 51);
    osebe[435] = ustvari("Vera", 47);
    osebe[436] = ustvari("Lenart", 20);
    osebe[437] = ustvari("Bogomir", 51);
    osebe[438] = ustvari("Katica", 91);
    osebe[439] = ustvari("Leja", 95);
    osebe[440] = ustvari("Meta", 13);
    osebe[441] = ustvari("Darko", 14);
    osebe[442] = ustvari("Ljubo", 47);
    osebe[443] = ustvari("Elvedin", 36);
    osebe[444] = ustvari("Maksimiljan", 40);
    osebe[445] = ustvari("Adin", 73);
    osebe[446] = ustvari("Rebeka", 42);
    osebe[447] = ustvari("Gloria", 56);
    osebe[448] = ustvari("Elina", 75);
    osebe[449] = ustvari("Vito", 25);
    osebe[450] = ustvari("Nick", 97);
    osebe[451] = ustvari("Andrej", 45);
    osebe[452] = ustvari("Slavka", 43);
    osebe[453] = ustvari("Milica", 59);
    osebe[454] = ustvari("Pia", 73);
    osebe[455] = ustvari("Nana", 77);
    osebe[456] = ustvari("Gregor", 53);
    osebe[457] = ustvari("Izak", 13);
    osebe[458] = ustvari("Liza", 46);
    osebe[459] = ustvari("Fanika", 44);
    osebe[460] = ustvari("Dragutin", 42);
    osebe[461] = ustvari("Milivoj", 27);
    osebe[462] = ustvari("Bruno", 76);
    osebe[463] = ustvari("Ernest", 92);
    osebe[464] = ustvari("Oto", 86);
    osebe[465] = ustvari("Noel", 14);
    osebe[466] = ustvari("Damjana", 55);
    osebe[467] = ustvari("Tian", 5);
    osebe[468] = ustvari("Boris", 55);
    osebe[469] = ustvari("Marjana", 1);
    osebe[470] = ustvari("Veronika", 62);
    osebe[471] = ustvari("Lea", 2);
    osebe[472] = ustvari("Emanuel", 31);
    osebe[473] = ustvari("Mila", 70);
    osebe[474] = ustvari("Enes", 17);
    osebe[475] = ustvari("Milenko", 78);
    osebe[476] = ustvari("Friderik", 55);
    osebe[477] = ustvari("Igor", 74);
    osebe[478] = ustvari("Olga", 31);
    osebe[479] = ustvari("Liljana", 8);
    osebe[480] = ustvari("Ervin", 19);
    osebe[481] = ustvari("Kim", 11);
    osebe[482] = ustvari("Egon", 48);
    osebe[483] = ustvari("Nika", 97);
    osebe[484] = ustvari("Milovan", 5);
    osebe[485] = ustvari("Nedeljko", 2);
    osebe[486] = ustvari("Vilma", 34);
    osebe[487] = ustvari("Bojan", 89);
    osebe[488] = ustvari("Neo", 7);
    osebe[489] = ustvari("Silvo", 44);
    osebe[490] = ustvari("Darja", 76);
    osebe[491] = ustvari("Jerica", 51);
    osebe[492] = ustvari("Jon", 83);
    osebe[493] = ustvari("Pika", 8);
    osebe[494] = ustvari("Evan", 60);
    osebe[495] = ustvari("Erin", 90);
    osebe[496] = ustvari("Hinko", 3);
    osebe[497] = ustvari("Mateo", 34);
    osebe[498] = ustvari("Alojzij", 52);
    osebe[499] = ustvari("Marinka", 76);
    osebe[500] = ustvari("Zala", 10);
    osebe[501] = ustvari("Niko", 56);
    osebe[502] = ustvari("Ronja", 53);
    osebe[503] = ustvari("Adna", 94);
    osebe[504] = ustvari("Danica", 74);
    osebe[505] = ustvari("Martina", 58);
    osebe[506] = ustvari("Tomi", 79);
    osebe[507] = ustvari("Nal", 13);
    osebe[508] = ustvari("Vincenc", 13);
    osebe[509] = ustvari("Klementina", 46);
    osebe[510] = ustvari("Stane", 99);
    osebe[511] = ustvari("Stela", 38);
    osebe[512] = ustvari("Mirela", 5);
    osebe[513] = ustvari("Rasim", 75);
    osebe[514] = ustvari("Leon", 4);
    osebe[515] = ustvari("Minea", 33);
    osebe[516] = ustvari("Ema", 5);
    osebe[517] = ustvari("Tobija", 1);
    osebe[518] = ustvari("Timon", 79);
    osebe[519] = ustvari("Branka", 75);
    osebe[520] = ustvari("Leni", 96);
    osebe[521] = ustvari("Herman", 56);
    osebe[522] = ustvari("Simona", 25);
    osebe[523] = ustvari("Sanel", 49);
    osebe[524] = ustvari("Rado", 62);
    osebe[525] = ustvari("Lena", 54);
    osebe[526] = ustvari("Lovro", 20);
    osebe[527] = ustvari("Kristjan", 40);
    osebe[528] = ustvari("Leopoldina", 55);
    osebe[529] = ustvari("Sofija", 51);
    osebe[530] = ustvari("Maks", 26);
    osebe[531] = ustvari("Nina", 83);
    osebe[532] = ustvari("Anamarija", 68);
    osebe[533] = ustvari("Maksim", 20);
    osebe[534] = ustvari("Matej", 65);
    osebe[535] = ustvari("Teodora", 70);
    osebe[536] = ustvari("Elvir", 56);
    osebe[537] = ustvari("Denis", 97);
    osebe[538] = ustvari("Jasminka", 26);
    osebe[539] = ustvari("Mai", 94);
    osebe[540] = ustvari("Jerca", 47);
    osebe[541] = ustvari("Ali", 89);
    osebe[542] = ustvari("Vid", 52);
    osebe[543] = ustvari("Angela", 76);
    osebe[544] = ustvari("Ranko", 41);
    osebe[545] = ustvari("Aldo", 57);
    osebe[546] = ustvari("Biljana", 80);
    osebe[547] = ustvari("Mark", 38);
    osebe[548] = ustvari("Vanessa", 70);
    osebe[549] = ustvari("Damir", 97);
    osebe[550] = ustvari("Luna", 99);
    osebe[551] = ustvari("Dominik", 21);
    osebe[552] = ustvari("Agata", 45);
    osebe[553] = ustvari("Sebastian", 54);
    osebe[554] = ustvari("Jovo", 32);
    osebe[555] = ustvari("Helena", 5);
    osebe[556] = ustvari("Jaka", 73);
    osebe[557] = ustvari("Naj", 79);
    osebe[558] = ustvari("Maksimilijan", 30);
    osebe[559] = ustvari("Marijana", 66);
    osebe[560] = ustvari("Rene", 5);
    osebe[561] = ustvari("Beno", 92);
    osebe[562] = ustvari("Erik", 80);
    osebe[563] = ustvari("Kaja", 85);
    osebe[564] = ustvari("Gal", 6);
    osebe[565] = ustvari("Anastasia", 91);
    osebe[566] = ustvari("Marjan", 95);
    osebe[567] = ustvari("Petja", 59);
    osebe[568] = ustvari("Ivona", 8);
    osebe[569] = ustvari("Leo", 94);
    osebe[570] = ustvari("Marijan", 70);
    osebe[571] = ustvari("Vesna", 13);
    osebe[572] = ustvari("Anton", 77);
    osebe[573] = ustvari("Jonas", 41);
    osebe[574] = ustvari("Doris", 70);
    osebe[575] = ustvari("Fran", 34);
    osebe[576] = ustvari("Sabrina", 15);
    osebe[577] = ustvari("Arne", 14);
    osebe[578] = ustvari("Jelka", 87);
    osebe[579] = ustvari("Maid", 52);
    osebe[580] = ustvari("Kristian", 39);
    osebe[581] = ustvari("Zmagoslav", 54);
    osebe[582] = ustvari("Darinka", 45);
    osebe[583] = ustvari("Verona", 75);
    osebe[584] = ustvari("Zorka", 59);
    osebe[585] = ustvari("Haris", 56);
    osebe[586] = ustvari("Metka", 70);
    osebe[587] = ustvari("Rozalija", 91);
    osebe[588] = ustvari("Danijel", 76);
    osebe[589] = ustvari("Adrijana", 94);
    osebe[590] = ustvari("Elvis", 77);
    osebe[591] = ustvari("Iva", 20);
    osebe[592] = ustvari("Emil", 2);
    osebe[593] = ustvari("Bogomira", 90);
    osebe[594] = ustvari("Lejla", 28);
    osebe[595] = ustvari("Nai", 8);
    osebe[596] = ustvari("Radoslav", 41);
    osebe[597] = ustvari("Marjetica", 40);
    osebe[598] = ustvari("Kevin", 49);
    osebe[599] = ustvari("Ljudmila", 23);
    osebe[600] = ustvari("Dan", 11);
    osebe[601] = ustvari("Petra", 31);
    osebe[602] = ustvari("Adolf", 97);
    osebe[603] = ustvari("Judita", 82);
    osebe[604] = ustvari("Mustafa", 25);
    osebe[605] = ustvari("Miroslava", 2);
    osebe[606] = ustvari("Majda", 99);
    osebe[607] = ustvari("Senada", 71);
    osebe[608] = ustvari("Melisa", 1);
    osebe[609] = ustvari("Dunja", 75);
    osebe[610] = ustvari("Rubi", 74);
    osebe[611] = ustvari("Dragana", 20);
    osebe[612] = ustvari("Franci", 56);
    osebe[613] = ustvari("Almira", 86);
    osebe[614] = ustvari("Genovefa", 19);
    osebe[615] = ustvari("Oskar", 92);
    osebe[616] = ustvari("Zvonimir", 10);
    osebe[617] = ustvari("Emir", 3);
    osebe[618] = ustvari("Predrag", 71);
    osebe[619] = ustvari("Aleksej", 41);
    osebe[620] = ustvari("Osman", 58);
    osebe[621] = ustvari("Viktor", 56);
    osebe[622] = ustvari("Albin", 27);
    osebe[623] = ustvari("Jovanka", 17);
    osebe[624] = ustvari("Jadran", 52);
    osebe[625] = ustvari("Inja", 80);
    osebe[626] = ustvari("Peter", 26);
    osebe[627] = ustvari("Izidor", 69);
    osebe[628] = ustvari("Stefan", 76);
    osebe[629] = ustvari("Romana", 40);
    osebe[630] = ustvari("Dimitrij", 85);
    osebe[631] = ustvari("Viljem", 99);
    osebe[632] = ustvari("Sandra", 35);
    osebe[633] = ustvari("Nevenka", 62);
    osebe[634] = ustvari("Anej", 21);
    osebe[635] = ustvari("Rok", 3);
    osebe[636] = ustvari("Jurij", 38);
    osebe[637] = ustvari("Frida", 12);
    osebe[638] = ustvari("Roman", 49);
    osebe[639] = ustvari("Ruben", 2);
    osebe[640] = ustvari("Berta", 44);
    osebe[641] = ustvari("Ermin", 11);
    osebe[642] = ustvari("Nia", 50);
    osebe[643] = ustvari("Matias", 50);
    osebe[644] = ustvari("Tanja", 66);
    osebe[645] = ustvari("Dragomir", 66);
    osebe[646] = ustvari("Davorin", 96);
    osebe[647] = ustvari("Slavko", 47);
    osebe[648] = ustvari("Amra", 85);
    osebe[649] = ustvari("Noemi", 36);
    osebe[650] = ustvari("Adam", 1);
    osebe[651] = ustvari("Melani", 24);
    osebe[652] = ustvari("Miran", 25);
    osebe[653] = ustvari("Dragotin", 63);
    osebe[654] = ustvari("Vlasta", 72);
    osebe[655] = ustvari("Elizabeta", 35);
    osebe[656] = ustvari("Vojka", 19);
    osebe[657] = ustvari("Kris", 66);
    osebe[658] = ustvari("Ksenja", 95);
    osebe[659] = ustvari("Evgen", 63);
    osebe[660] = ustvari("Minka", 63);
    osebe[661] = ustvari("Zlatka", 78);
    osebe[662] = ustvari("Albert", 15);
    osebe[663] = ustvari("Tisa", 97);
    osebe[664] = ustvari("Zorica", 7);
    osebe[665] = ustvari("Zvonka", 58);
    osebe[666] = ustvari("Amar", 2);
    osebe[667] = ustvari("Mario", 10);

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
