
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
    int n = 430;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Blanka", 61);
    osebe[1] = ustvari("Jelka", 49);
    osebe[2] = ustvari("Elma", 85);
    osebe[3] = ustvari("Olga", 79);
    osebe[4] = ustvari("Pika", 59);
    osebe[5] = ustvari("Asim", 26);
    osebe[6] = ustvari("Taja", 92);
    osebe[7] = ustvari("Ali", 3);
    osebe[8] = ustvari("Nada", 70);
    osebe[9] = ustvari("Kenan", 49);
    osebe[10] = ustvari("Renata", 15);
    osebe[11] = ustvari("Biljana", 34);
    osebe[12] = ustvari("Irena", 33);
    osebe[13] = ustvari("Dimitrij", 4);
    osebe[14] = ustvari("Valerija", 34);
    osebe[15] = ustvari("Viktor", 65);
    osebe[16] = ustvari("Nika", 46);
    osebe[17] = ustvari("Mato", 4);
    osebe[18] = ustvari("Marica", 27);
    osebe[19] = ustvari("Nai", 47);
    osebe[20] = ustvari("Adian", 41);
    osebe[21] = ustvari("Marjan", 40);
    osebe[22] = ustvari("Gaj", 94);
    osebe[23] = ustvari("Friderika", 57);
    osebe[24] = ustvari("Vojka", 68);
    osebe[25] = ustvari("Sandi", 27);
    osebe[26] = ustvari("Dragoljub", 93);
    osebe[27] = ustvari("Amra", 54);
    osebe[28] = ustvari("Amar", 99);
    osebe[29] = ustvari("Tijan", 79);
    osebe[30] = ustvari("Enej", 75);
    osebe[31] = ustvari("Haris", 35);
    osebe[32] = ustvari("Aleksandra", 11);
    osebe[33] = ustvari("Vladislav", 3);
    osebe[34] = ustvari("Katarina", 2);
    osebe[35] = ustvari("Tanaja", 69);
    osebe[36] = ustvari("Emil", 95);
    osebe[37] = ustvari("Kristijan", 99);
    osebe[38] = ustvari("Dalibor", 47);
    osebe[39] = ustvari("Ksenija", 82);
    osebe[40] = ustvari("Milica", 69);
    osebe[41] = ustvari("Milena", 2);
    osebe[42] = ustvari("Lili", 87);
    osebe[43] = ustvari("Anastasia", 9);
    osebe[44] = ustvari("Mirsad", 35);
    osebe[45] = ustvari("Tian", 21);
    osebe[46] = ustvari("Manja", 65);
    osebe[47] = ustvari("Metka", 42);
    osebe[48] = ustvari("Nej", 11);
    osebe[49] = ustvari("Bojan", 14);
    osebe[50] = ustvari("Ivo", 1);
    osebe[51] = ustvari("Jovo", 60);
    osebe[52] = ustvari("Amalija", 66);
    osebe[53] = ustvari("Adisa", 37);
    osebe[54] = ustvari("Rade", 66);
    osebe[55] = ustvari("Maksimiljan", 78);
    osebe[56] = ustvari("Zvonka", 61);
    osebe[57] = ustvari("Brigita", 82);
    osebe[58] = ustvari("Lena", 48);
    osebe[59] = ustvari("Tilen", 93);
    osebe[60] = ustvari("Nedeljko", 33);
    osebe[61] = ustvari("Tomislav", 1);
    osebe[62] = ustvari("Savo", 44);
    osebe[63] = ustvari("Anastasija", 35);
    osebe[64] = ustvari("Mia", 44);
    osebe[65] = ustvari("Luka", 67);
    osebe[66] = ustvari("Kazimir", 75);
    osebe[67] = ustvari("Rebeka", 52);
    osebe[68] = ustvari("Senija", 53);
    osebe[69] = ustvari("Adolf", 7);
    osebe[70] = ustvari("Vera", 26);
    osebe[71] = ustvari("Vanda", 66);
    osebe[72] = ustvari("Biserka", 28);
    osebe[73] = ustvari("Nevenka", 94);
    osebe[74] = ustvari("Eva", 20);
    osebe[75] = ustvari("Doroteja", 34);
    osebe[76] = ustvari("Patrik", 71);
    osebe[77] = ustvari("Fadil", 90);
    osebe[78] = ustvari("Radomir", 60);
    osebe[79] = ustvari("Barica", 27);
    osebe[80] = ustvari("Marijana", 67);
    osebe[81] = ustvari("Gregor", 42);
    osebe[82] = ustvari("Herta", 43);
    osebe[83] = ustvari("Liam", 32);
    osebe[84] = ustvari("Lian", 18);
    osebe[85] = ustvari("Izet", 12);
    osebe[86] = ustvari("Anica", 52);
    osebe[87] = ustvari("Amna", 92);
    osebe[88] = ustvari("Valentin", 83);
    osebe[89] = ustvari("Ana", 56);
    osebe[90] = ustvari("Brin", 51);
    osebe[91] = ustvari("Jasminka", 57);
    osebe[92] = ustvari("Milan", 53);
    osebe[93] = ustvari("Mija", 35);
    osebe[94] = ustvari("Lucas", 67);
    osebe[95] = ustvari("Ludvik", 18);
    osebe[96] = ustvari("Vanesa", 80);
    osebe[97] = ustvari("Polona", 13);
    osebe[98] = ustvari("Josip", 28);
    osebe[99] = ustvari("Anabela", 36);
    osebe[100] = ustvari("Daliborka", 61);
    osebe[101] = ustvari("Alexander", 17);
    osebe[102] = ustvari("Vlado", 61);
    osebe[103] = ustvari("Nikolina", 33);
    osebe[104] = ustvari("Gabrijela", 58);
    osebe[105] = ustvari("Milka", 17);
    osebe[106] = ustvari("Alan", 24);
    osebe[107] = ustvari("Aria", 42);
    osebe[108] = ustvari("Zvezdana", 55);
    osebe[109] = ustvari("Aja", 84);
    osebe[110] = ustvari("Evan", 40);
    osebe[111] = ustvari("Helena", 40);
    osebe[112] = ustvari("Jelica", 53);
    osebe[113] = ustvari("Elvir", 91);
    osebe[114] = ustvari("Erika", 14);
    osebe[115] = ustvari("Julian", 98);
    osebe[116] = ustvari("Inaja", 13);
    osebe[117] = ustvari("Aleksej", 18);
    osebe[118] = ustvari("Sandra", 65);
    osebe[119] = ustvari("Adriana", 29);
    osebe[120] = ustvari("Tinkara", 59);
    osebe[121] = ustvari("Ahmet", 6);
    osebe[122] = ustvari("Rajko", 74);
    osebe[123] = ustvari("Asja", 13);
    osebe[124] = ustvari("Tadeja", 31);
    osebe[125] = ustvari("Ingrid", 94);
    osebe[126] = ustvari("Nejc", 40);
    osebe[127] = ustvari("Teja", 63);
    osebe[128] = ustvari("Gorazd", 7);
    osebe[129] = ustvari("Antun", 81);
    osebe[130] = ustvari("Almir", 89);
    osebe[131] = ustvari("Jadranka", 57);
    osebe[132] = ustvari("Bogomira", 45);
    osebe[133] = ustvari("Radivoj", 13);
    osebe[134] = ustvari("Tiara", 39);
    osebe[135] = ustvari("Vojko", 61);
    osebe[136] = ustvari("Albina", 28);
    osebe[137] = ustvari("Petra", 39);
    osebe[138] = ustvari("Toni", 43);
    osebe[139] = ustvari("Julijana", 57);
    osebe[140] = ustvari("Stojan", 22);
    osebe[141] = ustvari("Jurij", 48);
    osebe[142] = ustvari("Anaja", 47);
    osebe[143] = ustvari("Boris", 54);
    osebe[144] = ustvari("Marsel", 20);
    osebe[145] = ustvari("Loti", 90);
    osebe[146] = ustvari("Neva", 52);
    osebe[147] = ustvari("Dragotin", 19);
    osebe[148] = ustvari("Marina", 18);
    osebe[149] = ustvari("Zara", 13);
    osebe[150] = ustvari("Darko", 8);
    osebe[151] = ustvari("Irma", 14);
    osebe[152] = ustvari("Dan", 82);
    osebe[153] = ustvari("Enes", 90);
    osebe[154] = ustvari("Tarik", 84);
    osebe[155] = ustvari("Pija", 71);
    osebe[156] = ustvari("Miha", 6);
    osebe[157] = ustvari("Ljubomir", 95);
    osebe[158] = ustvari("Ljuba", 8);
    osebe[159] = ustvari("Filip", 94);
    osebe[160] = ustvari("Sara", 51);
    osebe[161] = ustvari("Apolonija", 82);
    osebe[162] = ustvari("Mirjam", 5);
    osebe[163] = ustvari("Matija", 26);
    osebe[164] = ustvari("Natalija", 94);
    osebe[165] = ustvari("Branko", 31);
    osebe[166] = ustvari("Bruno", 92);
    osebe[167] = ustvari("Mina", 95);
    osebe[168] = ustvari("Eli", 72);
    osebe[169] = ustvari("Samuel", 3);
    osebe[170] = ustvari("Alenka", 10);
    osebe[171] = ustvari("Aleksandar", 74);
    osebe[172] = ustvari("Otmar", 28);
    osebe[173] = ustvari("Albin", 95);
    osebe[174] = ustvari("Maksim", 80);
    osebe[175] = ustvari("Vladimira", 46);
    osebe[176] = ustvari("Ines", 94);
    osebe[177] = ustvari("Avgust", 63);
    osebe[178] = ustvari("Slavica", 1);
    osebe[179] = ustvari("Emir", 57);
    osebe[180] = ustvari("Edina", 6);
    osebe[181] = ustvari("Jela", 40);
    osebe[182] = ustvari("Senada", 60);
    osebe[183] = ustvari("Marino", 33);
    osebe[184] = ustvari("Urban", 6);
    osebe[185] = ustvari("Aleksander", 37);
    osebe[186] = ustvari("Vekoslav", 93);
    osebe[187] = ustvari("Alen", 97);
    osebe[188] = ustvari("Patrick", 81);
    osebe[189] = ustvari("Milivoj", 98);
    osebe[190] = ustvari("Lilijana", 47);
    osebe[191] = ustvari("Ronja", 48);
    osebe[192] = ustvari("Matilda", 55);
    osebe[193] = ustvari("Dragomir", 16);
    osebe[194] = ustvari("Jozefa", 4);
    osebe[195] = ustvari("Samo", 35);
    osebe[196] = ustvari("Tit", 36);
    osebe[197] = ustvari("Bernard", 8);
    osebe[198] = ustvari("Veronika", 84);
    osebe[199] = ustvari("Larisa", 14);
    osebe[200] = ustvari("Leon", 34);
    osebe[201] = ustvari("Danijel", 65);
    osebe[202] = ustvari("Jadran", 58);
    osebe[203] = ustvari("Regina", 92);
    osebe[204] = ustvari("Nikola", 22);
    osebe[205] = ustvari("Alojz", 50);
    osebe[206] = ustvari("Aida", 75);
    osebe[207] = ustvari("Silvija", 97);
    osebe[208] = ustvari("Glorija", 2);
    osebe[209] = ustvari("Simon", 59);
    osebe[210] = ustvari("Metod", 67);
    osebe[211] = ustvari("Janko", 38);
    osebe[212] = ustvari("Mile", 97);
    osebe[213] = ustvari("Miroslav", 64);
    osebe[214] = ustvari("Janja", 14);
    osebe[215] = ustvari("Davor", 27);
    osebe[216] = ustvari("Hedvika", 99);
    osebe[217] = ustvari("Dajana", 41);
    osebe[218] = ustvari("Nana", 49);
    osebe[219] = ustvari("Isabella", 7);
    osebe[220] = ustvari("Maja", 7);
    osebe[221] = ustvari("Vanessa", 56);
    osebe[222] = ustvari("Adnan", 61);
    osebe[223] = ustvari("Tadej", 40);
    osebe[224] = ustvari("Daniela", 11);
    osebe[225] = ustvari("Pia", 30);
    osebe[226] = ustvari("Ema", 65);
    osebe[227] = ustvari("Lorena", 90);
    osebe[228] = ustvari("Mirzet", 89);
    osebe[229] = ustvari("Elvira", 39);
    osebe[230] = ustvari("David", 33);
    osebe[231] = ustvari("Miroslava", 83);
    osebe[232] = ustvari("Amir", 67);
    osebe[233] = ustvari("Lovrenc", 78);
    osebe[234] = ustvari("Margareta", 57);
    osebe[235] = ustvari("Edi", 42);
    osebe[236] = ustvari("Dolores", 56);
    osebe[237] = ustvari("Petja", 33);
    osebe[238] = ustvari("Alojzija", 62);
    osebe[239] = ustvari("Amadeja", 26);
    osebe[240] = ustvari("Vincenc", 58);
    osebe[241] = ustvari("Alfonz", 62);
    osebe[242] = ustvari("Gabriela", 75);
    osebe[243] = ustvari("Vlasta", 67);
    osebe[244] = ustvari("Marko", 90);
    osebe[245] = ustvari("Jerneja", 35);
    osebe[246] = ustvari("Val", 80);
    osebe[247] = ustvari("Taj", 74);
    osebe[248] = ustvari("Nikolaj", 33);
    osebe[249] = ustvari("Nihad", 44);
    osebe[250] = ustvari("Katja", 66);
    osebe[251] = ustvari("Vladimir", 63);
    osebe[252] = ustvari("Azra", 16);
    osebe[253] = ustvari("Adam", 89);
    osebe[254] = ustvari("Marinka", 85);
    osebe[255] = ustvari("Marjana", 59);
    osebe[256] = ustvari("Anna", 71);
    osebe[257] = ustvari("Fatima", 34);
    osebe[258] = ustvari("Noemi", 74);
    osebe[259] = ustvari("Vida", 52);
    osebe[260] = ustvari("Lukas", 44);
    osebe[261] = ustvari("Ljubo", 85);
    osebe[262] = ustvari("Jakob", 88);
    osebe[263] = ustvari("Zmagoslav", 68);
    osebe[264] = ustvari("Verica", 97);
    osebe[265] = ustvari("Iza", 6);
    osebe[266] = ustvari("Aldin", 52);
    osebe[267] = ustvari("Franko", 35);
    osebe[268] = ustvari("Arian", 91);
    osebe[269] = ustvari("Ella", 10);
    osebe[270] = ustvari("Boro", 24);
    osebe[271] = ustvari("Damjan", 57);
    osebe[272] = ustvari("Zofija", 13);
    osebe[273] = ustvari("Oliver", 14);
    osebe[274] = ustvari("Gloria", 71);
    osebe[275] = ustvari("Adela", 19);
    osebe[276] = ustvari("Gordana", 39);
    osebe[277] = ustvari("Karla", 90);
    osebe[278] = ustvari("Mateo", 76);
    osebe[279] = ustvari("Luna", 37);
    osebe[280] = ustvari("Jani", 69);
    osebe[281] = ustvari("Tija", 68);
    osebe[282] = ustvari("Mateja", 58);
    osebe[283] = ustvari("Amel", 54);
    osebe[284] = ustvari("Cecilija", 58);
    osebe[285] = ustvari("Rene", 83);
    osebe[286] = ustvari("Fran", 1);
    osebe[287] = ustvari("Pavlina", 73);
    osebe[288] = ustvari("Silva", 27);
    osebe[289] = ustvari("Jana", 15);
    osebe[290] = ustvari("Vilko", 1);
    osebe[291] = ustvari("Anela", 86);
    osebe[292] = ustvari("Manca", 35);
    osebe[293] = ustvari("Agata", 71);
    osebe[294] = ustvari("Silvo", 56);
    osebe[295] = ustvari("Stane", 95);
    osebe[296] = ustvari("Ervin", 46);
    osebe[297] = ustvari("Isabela", 61);
    osebe[298] = ustvari("Feliks", 49);
    osebe[299] = ustvari("Mirnes", 36);
    osebe[300] = ustvari("Ada", 21);
    osebe[301] = ustvari("Zoran", 94);
    osebe[302] = ustvari("Mirsada", 16);
    osebe[303] = ustvari("Anja", 54);
    osebe[304] = ustvari("Manuela", 88);
    osebe[305] = ustvari("Samanta", 12);
    osebe[306] = ustvari("Tijana", 59);
    osebe[307] = ustvari("Deni", 47);
    osebe[308] = ustvari("Elvisa", 71);
    osebe[309] = ustvari("Monika", 52);
    osebe[310] = ustvari("Neda", 42);
    osebe[311] = ustvari("Tine", 66);
    osebe[312] = ustvari("Damjana", 14);
    osebe[313] = ustvari("Mladen", 58);
    osebe[314] = ustvari("Klavdija", 56);
    osebe[315] = ustvari("Alma", 44);
    osebe[316] = ustvari("Ramiz", 89);
    osebe[317] = ustvari("Zmaga", 13);
    osebe[318] = ustvari("Gabriel", 21);
    osebe[319] = ustvari("Edvard", 11);
    osebe[320] = ustvari("Damijana", 9);
    osebe[321] = ustvari("Husein", 33);
    osebe[322] = ustvari("Evelina", 64);
    osebe[323] = ustvari("Davud", 75);
    osebe[324] = ustvari("Almira", 21);
    osebe[325] = ustvari("Milanka", 31);
    osebe[326] = ustvari("Valentina", 48);
    osebe[327] = ustvari("Cvetka", 85);
    osebe[328] = ustvari("Melanie", 68);
    osebe[329] = ustvari("Rasim", 41);
    osebe[330] = ustvari("Pero", 96);
    osebe[331] = ustvari("Justina", 64);
    osebe[332] = ustvari("Maksimilijan", 63);
    osebe[333] = ustvari("Erin", 76);
    osebe[334] = ustvari("Zvonimir", 47);
    osebe[335] = ustvari("Borislav", 80);
    osebe[336] = ustvari("Zora", 41);
    osebe[337] = ustvari("Nino", 40);
    osebe[338] = ustvari("Petar", 39);
    osebe[339] = ustvari("Milojka", 55);
    osebe[340] = ustvari("Elina", 17);
    osebe[341] = ustvari("Melisa", 50);
    osebe[342] = ustvari("Florijan", 26);
    osebe[343] = ustvari("Klemen", 60);
    osebe[344] = ustvari("Hanna", 22);
    osebe[345] = ustvari("Damir", 39);
    osebe[346] = ustvari("Emina", 39);
    osebe[347] = ustvari("Voranc", 70);
    osebe[348] = ustvari("Emanuel", 89);
    osebe[349] = ustvari("Erna", 73);
    osebe[350] = ustvari("Maj", 1);
    osebe[351] = ustvari("Vinko", 44);
    osebe[352] = ustvari("Davorin", 8);
    osebe[353] = ustvari("Dora", 15);
    osebe[354] = ustvari("Tina", 8);
    osebe[355] = ustvari("Daris", 70);
    osebe[356] = ustvari("Eman", 85);
    osebe[357] = ustvari("Ajna", 94);
    osebe[358] = ustvari("Lucija", 60);
    osebe[359] = ustvari("Dunja", 30);
    osebe[360] = ustvari("Ina", 43);
    osebe[361] = ustvari("Kiara", 92);
    osebe[362] = ustvari("Lan", 12);
    osebe[363] = ustvari("Lavra", 94);
    osebe[364] = ustvari("Suad", 69);
    osebe[365] = ustvari("Bogomil", 56);
    osebe[366] = ustvari("Jovana", 94);
    osebe[367] = ustvari("Mirza", 34);
    osebe[368] = ustvari("Hasan", 27);
    osebe[369] = ustvari("Nace", 73);
    osebe[370] = ustvari("Zlatka", 4);
    osebe[371] = ustvari("Valter", 40);
    osebe[372] = ustvari("Neli", 84);
    osebe[373] = ustvari("Jona", 26);
    osebe[374] = ustvari("Marijan", 96);
    osebe[375] = ustvari("Laura", 31);
    osebe[376] = ustvari("Svit", 67);
    osebe[377] = ustvari("Mario", 96);
    osebe[378] = ustvari("Mark", 50);
    osebe[379] = ustvari("Zinka", 39);
    osebe[380] = ustvari("Emilija", 46);
    osebe[381] = ustvari("Zlatko", 1);
    osebe[382] = ustvari("Egon", 64);
    osebe[383] = ustvari("Inja", 41);
    osebe[384] = ustvari("Angelca", 33);
    osebe[385] = ustvari("Karel", 84);
    osebe[386] = ustvari("Medina", 76);
    osebe[387] = ustvari("Emma", 82);
    osebe[388] = ustvari("Gizela", 32);
    osebe[389] = ustvari("Zala", 38);
    osebe[390] = ustvari("Nenad", 54);
    osebe[391] = ustvari("Fanika", 69);
    osebe[392] = ustvari("Teodor", 21);
    osebe[393] = ustvari("Terezija", 5);
    osebe[394] = ustvari("Tibor", 28);
    osebe[395] = ustvari("Anka", 50);
    osebe[396] = ustvari("Angela", 26);
    osebe[397] = ustvari("Erik", 14);
    osebe[398] = ustvari("Milenka", 40);
    osebe[399] = ustvari("Vito", 47);
    osebe[400] = ustvari("Esad", 61);
    osebe[401] = ustvari("Amela", 98);
    osebe[402] = ustvari("Olivia", 72);
    osebe[403] = ustvari("Robi", 80);
    osebe[404] = ustvari("Erazem", 46);
    osebe[405] = ustvari("Semir", 63);
    osebe[406] = ustvari("Alina", 42);
    osebe[407] = ustvari("Sulejman", 4);
    osebe[408] = ustvari("Izabela", 58);
    osebe[409] = ustvari("Indira", 67);
    osebe[410] = ustvari("Sanel", 29);
    osebe[411] = ustvari("Oskar", 86);
    osebe[412] = ustvari("Tomi", 72);
    osebe[413] = ustvari("Stela", 48);
    osebe[414] = ustvari("Sead", 8);
    osebe[415] = ustvari("Hana", 52);
    osebe[416] = ustvari("Bogomir", 30);
    osebe[417] = ustvari("Ela", 39);
    osebe[418] = ustvari("Zorica", 32);
    osebe[419] = ustvari("Nikita", 23);
    osebe[420] = ustvari("Nadica", 96);
    osebe[421] = ustvari("Radmila", 41);
    osebe[422] = ustvari("Ida", 17);
    osebe[423] = ustvari("Hinko", 19);
    osebe[424] = ustvari("Leila", 84);
    osebe[425] = ustvari("Tim", 32);
    osebe[426] = ustvari("Mara", 36);
    osebe[427] = ustvari("Jaka", 36);
    osebe[428] = ustvari("Muhamed", 89);
    osebe[429] = ustvari("Leonida", 95);

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
