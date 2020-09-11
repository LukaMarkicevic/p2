
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
    int n = 353;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Haris", 54);
    osebe[1] = ustvari("Pavla", 99);
    osebe[2] = ustvari("Asja", 44);
    osebe[3] = ustvari("Alexander", 30);
    osebe[4] = ustvari("Cvetka", 82);
    osebe[5] = ustvari("Vesna", 79);
    osebe[6] = ustvari("Elma", 5);
    osebe[7] = ustvari("Samira", 49);
    osebe[8] = ustvari("Karin", 82);
    osebe[9] = ustvari("Anastazija", 50);
    osebe[10] = ustvari("Mitja", 70);
    osebe[11] = ustvari("Melisa", 55);
    osebe[12] = ustvari("Mira", 97);
    osebe[13] = ustvari("Ljiljana", 32);
    osebe[14] = ustvari("Asim", 20);
    osebe[15] = ustvari("Kevin", 62);
    osebe[16] = ustvari("Senija", 71);
    osebe[17] = ustvari("Vito", 90);
    osebe[18] = ustvari("Izidor", 7);
    osebe[19] = ustvari("Dragomir", 32);
    osebe[20] = ustvari("Nevenka", 40);
    osebe[21] = ustvari("Benjamin", 33);
    osebe[22] = ustvari("Jasminka", 17);
    osebe[23] = ustvari("Svetlana", 24);
    osebe[24] = ustvari("Sebastijan", 80);
    osebe[25] = ustvari("Sanela", 43);
    osebe[26] = ustvari("Tobija", 17);
    osebe[27] = ustvari("Nace", 26);
    osebe[28] = ustvari("Ajla", 58);
    osebe[29] = ustvari("Simona", 10);
    osebe[30] = ustvari("Olivia", 31);
    osebe[31] = ustvari("Amadej", 62);
    osebe[32] = ustvari("Anja", 71);
    osebe[33] = ustvari("Dragotin", 90);
    osebe[34] = ustvari("Sead", 95);
    osebe[35] = ustvari("Lamija", 63);
    osebe[36] = ustvari("Rebeka", 74);
    osebe[37] = ustvari("Ella", 93);
    osebe[38] = ustvari("Sonja", 26);
    osebe[39] = ustvari("Kristjan", 17);
    osebe[40] = ustvari("Marsel", 42);
    osebe[41] = ustvari("Branka", 19);
    osebe[42] = ustvari("Viljem", 18);
    osebe[43] = ustvari("Senad", 27);
    osebe[44] = ustvari("Cecilija", 48);
    osebe[45] = ustvari("Daniel", 80);
    osebe[46] = ustvari("Indira", 34);
    osebe[47] = ustvari("Rasim", 78);
    osebe[48] = ustvari("Manca", 87);
    osebe[49] = ustvari("Patrick", 37);
    osebe[50] = ustvari("Amar", 18);
    osebe[51] = ustvari("Tjan", 83);
    osebe[52] = ustvari("Erik", 6);
    osebe[53] = ustvari("Adam", 61);
    osebe[54] = ustvari("Konrad", 3);
    osebe[55] = ustvari("Teodora", 55);
    osebe[56] = ustvari("Jelica", 60);
    osebe[57] = ustvari("Adrian", 50);
    osebe[58] = ustvari("Stojan", 26);
    osebe[59] = ustvari("Suad", 29);
    osebe[60] = ustvari("Deni", 26);
    osebe[61] = ustvari("Martina", 18);
    osebe[62] = ustvari("Jasmina", 17);
    osebe[63] = ustvari("Karla", 41);
    osebe[64] = ustvari("Irina", 75);
    osebe[65] = ustvari("Marijan", 65);
    osebe[66] = ustvari("Bernarda", 37);
    osebe[67] = ustvari("Edvin", 63);
    osebe[68] = ustvari("Anej", 70);
    osebe[69] = ustvari("Erna", 45);
    osebe[70] = ustvari("Mirza", 40);
    osebe[71] = ustvari("Evan", 87);
    osebe[72] = ustvari("Silvana", 58);
    osebe[73] = ustvari("Bogomil", 6);
    osebe[74] = ustvari("Tian", 49);
    osebe[75] = ustvari("Jan", 60);
    osebe[76] = ustvari("Hanna", 36);
    osebe[77] = ustvari("Terezija", 60);
    osebe[78] = ustvari("Stanko", 79);
    osebe[79] = ustvari("Nejc", 96);
    osebe[80] = ustvari("Vojka", 33);
    osebe[81] = ustvari("Teodor", 72);
    osebe[82] = ustvari("Elina", 16);
    osebe[83] = ustvari("Tisa", 46);
    osebe[84] = ustvari("Milovan", 1);
    osebe[85] = ustvari("Melanie", 92);
    osebe[86] = ustvari("Zvonko", 94);
    osebe[87] = ustvari("Zvonimir", 57);
    osebe[88] = ustvari("Damjana", 69);
    osebe[89] = ustvari("Dino", 31);
    osebe[90] = ustvari("Stjepan", 36);
    osebe[91] = ustvari("Boro", 78);
    osebe[92] = ustvari("Jonas", 26);
    osebe[93] = ustvari("Neli", 15);
    osebe[94] = ustvari("Alojzija", 52);
    osebe[95] = ustvari("Ada", 3);
    osebe[96] = ustvari("Kim", 71);
    osebe[97] = ustvari("Sofija", 41);
    osebe[98] = ustvari("Edvard", 26);
    osebe[99] = ustvari("Milenka", 8);
    osebe[100] = ustvari("Mirsada", 17);
    osebe[101] = ustvari("Laura", 82);
    osebe[102] = ustvari("Jon", 45);
    osebe[103] = ustvari("Ava", 5);
    osebe[104] = ustvari("Tom", 42);
    osebe[105] = ustvari("Isabela", 79);
    osebe[106] = ustvari("Boris", 79);
    osebe[107] = ustvari("Ruben", 67);
    osebe[108] = ustvari("Danijela", 44);
    osebe[109] = ustvari("Klemen", 14);
    osebe[110] = ustvari("Ilija", 42);
    osebe[111] = ustvari("Gaia", 15);
    osebe[112] = ustvari("Osman", 10);
    osebe[113] = ustvari("Cvetko", 66);
    osebe[114] = ustvari("Bernardka", 78);
    osebe[115] = ustvari("Smiljan", 63);
    osebe[116] = ustvari("Tanaja", 43);
    osebe[117] = ustvari("Rudolf", 26);
    osebe[118] = ustvari("Jovana", 78);
    osebe[119] = ustvari("Peter", 11);
    osebe[120] = ustvari("Nastja", 99);
    osebe[121] = ustvari("Tit", 44);
    osebe[122] = ustvari("Maks", 3);
    osebe[123] = ustvari("Mirzet", 35);
    osebe[124] = ustvari("Iza", 91);
    osebe[125] = ustvari("Mihaela", 63);
    osebe[126] = ustvari("Dragan", 56);
    osebe[127] = ustvari("Aldin", 77);
    osebe[128] = ustvari("Anita", 30);
    osebe[129] = ustvari("Danilo", 69);
    osebe[130] = ustvari("Iva", 58);
    osebe[131] = ustvari("Oto", 21);
    osebe[132] = ustvari("Milica", 67);
    osebe[133] = ustvari("Ljubomir", 90);
    osebe[134] = ustvari("Marica", 51);
    osebe[135] = ustvari("Verona", 96);
    osebe[136] = ustvari("Taj", 84);
    osebe[137] = ustvari("Asmir", 9);
    osebe[138] = ustvari("Brigita", 41);
    osebe[139] = ustvari("Amir", 58);
    osebe[140] = ustvari("Mirsad", 55);
    osebe[141] = ustvari("Adna", 69);
    osebe[142] = ustvari("Zlata", 95);
    osebe[143] = ustvari("Bruno", 51);
    osebe[144] = ustvari("Janja", 17);
    osebe[145] = ustvari("Timotej", 48);
    osebe[146] = ustvari("Dalibor", 66);
    osebe[147] = ustvari("Veronika", 28);
    osebe[148] = ustvari("Eldin", 98);
    osebe[149] = ustvari("Anna", 26);
    osebe[150] = ustvari("Nino", 35);
    osebe[151] = ustvari("Renato", 16);
    osebe[152] = ustvari("Jakob", 30);
    osebe[153] = ustvari("Pavel", 85);
    osebe[154] = ustvari("Maja", 43);
    osebe[155] = ustvari("Sanja", 80);
    osebe[156] = ustvari("Tine", 29);
    osebe[157] = ustvari("Sergeja", 66);
    osebe[158] = ustvari("Rozina", 10);
    osebe[159] = ustvari("Mina", 23);
    osebe[160] = ustvari("Jasna", 54);
    osebe[161] = ustvari("Sebastjan", 95);
    osebe[162] = ustvari("Tarik", 99);
    osebe[163] = ustvari("Aneja", 45);
    osebe[164] = ustvari("Pika", 57);
    osebe[165] = ustvari("Vilibald", 67);
    osebe[166] = ustvari("Monika", 17);
    osebe[167] = ustvari("Zoja", 55);
    osebe[168] = ustvari("Zara", 46);
    osebe[169] = ustvari("Neja", 18);
    osebe[170] = ustvari("Aida", 32);
    osebe[171] = ustvari("Tajda", 37);
    osebe[172] = ustvari("Katja", 24);
    osebe[173] = ustvari("Radomir", 51);
    osebe[174] = ustvari("Aleksander", 72);
    osebe[175] = ustvari("Borislav", 34);
    osebe[176] = ustvari("Miroslava", 6);
    osebe[177] = ustvari("Julija", 31);
    osebe[178] = ustvari("Iztok", 42);
    osebe[179] = ustvari("Marina", 54);
    osebe[180] = ustvari("Doris", 30);
    osebe[181] = ustvari("Marjeta", 80);
    osebe[182] = ustvari("Tiana", 6);
    osebe[183] = ustvari("Marino", 43);
    osebe[184] = ustvari("Edina", 74);
    osebe[185] = ustvari("Herta", 96);
    osebe[186] = ustvari("Maj", 82);
    osebe[187] = ustvari("Aurora", 30);
    osebe[188] = ustvari("Adian", 42);
    osebe[189] = ustvari("Drago", 96);
    osebe[190] = ustvari("Gordana", 44);
    osebe[191] = ustvari("Renata", 72);
    osebe[192] = ustvari("Jovanka", 14);
    osebe[193] = ustvari("Albert", 58);
    osebe[194] = ustvari("Janko", 11);
    osebe[195] = ustvari("Timi", 4);
    osebe[196] = ustvari("Kai", 92);
    osebe[197] = ustvari("Nena", 81);
    osebe[198] = ustvari("Henrik", 35);
    osebe[199] = ustvari("Tone", 58);
    osebe[200] = ustvari("Nal", 25);
    osebe[201] = ustvari("Amela", 30);
    osebe[202] = ustvari("Angelca", 38);
    osebe[203] = ustvari("Klara", 96);
    osebe[204] = ustvari("Jerneja", 52);
    osebe[205] = ustvari("Anes", 42);
    osebe[206] = ustvari("Mai", 71);
    osebe[207] = ustvari("Tiara", 68);
    osebe[208] = ustvari("Voranc", 56);
    osebe[209] = ustvari("Sanel", 25);
    osebe[210] = ustvari("Rajmund", 51);
    osebe[211] = ustvari("Nai", 13);
    osebe[212] = ustvari("Alma", 31);
    osebe[213] = ustvari("Jozefa", 90);
    osebe[214] = ustvari("Zvonka", 3);
    osebe[215] = ustvari("Vilko", 94);
    osebe[216] = ustvari("Nana", 97);
    osebe[217] = ustvari("Lin", 88);
    osebe[218] = ustvari("Evelin", 39);
    osebe[219] = ustvari("Sabina", 74);
    osebe[220] = ustvari("Cirila", 7);
    osebe[221] = ustvari("Savo", 71);
    osebe[222] = ustvari("Milan", 22);
    osebe[223] = ustvari("Bor", 64);
    osebe[224] = ustvari("Erika", 60);
    osebe[225] = ustvari("Margareta", 49);
    osebe[226] = ustvari("Darja", 63);
    osebe[227] = ustvari("Klavdija", 76);
    osebe[228] = ustvari("Ratko", 31);
    osebe[229] = ustvari("Ajda", 29);
    osebe[230] = ustvari("Elizabeta", 66);
    osebe[231] = ustvari("Gabrijel", 57);
    osebe[232] = ustvari("Izet", 15);
    osebe[233] = ustvari("Nina", 2);
    osebe[234] = ustvari("Leni", 25);
    osebe[235] = ustvari("Tristan", 82);
    osebe[236] = ustvari("Ana", 37);
    osebe[237] = ustvari("Daniela", 30);
    osebe[238] = ustvari("Eman", 69);
    osebe[239] = ustvari("Fikret", 30);
    osebe[240] = ustvari("Adrijana", 56);
    osebe[241] = ustvari("Mehmed", 50);
    osebe[242] = ustvari("Dominika", 72);
    osebe[243] = ustvari("Alan", 70);
    osebe[244] = ustvari("David", 96);
    osebe[245] = ustvari("Mark", 86);
    osebe[246] = ustvari("Karel", 30);
    osebe[247] = ustvari("Sergej", 59);
    osebe[248] = ustvari("Mateo", 6);
    osebe[249] = ustvari("Rozalija", 79);
    osebe[250] = ustvari("Vitomir", 70);
    osebe[251] = ustvari("Nermin", 15);
    osebe[252] = ustvari("Marjetica", 48);
    osebe[253] = ustvari("Ula", 90);
    osebe[254] = ustvari("Dario", 96);
    osebe[255] = ustvari("Lucija", 2);
    osebe[256] = ustvari("Vlado", 61);
    osebe[257] = ustvari("Marjetka", 30);
    osebe[258] = ustvari("Jani", 98);
    osebe[259] = ustvari("Nada", 95);
    osebe[260] = ustvari("Adnan", 53);
    osebe[261] = ustvari("Samo", 93);
    osebe[262] = ustvari("Bogomir", 30);
    osebe[263] = ustvari("Urban", 54);
    osebe[264] = ustvari("Marija", 94);
    osebe[265] = ustvari("Jana", 86);
    osebe[266] = ustvari("Rafael", 64);
    osebe[267] = ustvari("Domen", 14);
    osebe[268] = ustvari("Milena", 8);
    osebe[269] = ustvari("Alojzij", 87);
    osebe[270] = ustvari("Zdenko", 73);
    osebe[271] = ustvari("Tina", 52);
    osebe[272] = ustvari("Elvir", 35);
    osebe[273] = ustvari("Julijan", 11);
    osebe[274] = ustvari("Inaja", 60);
    osebe[275] = ustvari("Branimir", 25);
    osebe[276] = ustvari("Simon", 24);
    osebe[277] = ustvari("Ismet", 24);
    osebe[278] = ustvari("Jerica", 81);
    osebe[279] = ustvari("Maksimilijan", 73);
    osebe[280] = ustvari("Eli", 22);
    osebe[281] = ustvari("Dean", 97);
    osebe[282] = ustvari("Luna", 98);
    osebe[283] = ustvari("Leonardo", 23);
    osebe[284] = ustvari("Anel", 96);
    osebe[285] = ustvari("Predrag", 82);
    osebe[286] = ustvari("Patrik", 43);
    osebe[287] = ustvari("Matias", 10);
    osebe[288] = ustvari("Leonida", 68);
    osebe[289] = ustvari("Igor", 17);
    osebe[290] = ustvari("Selma", 87);
    osebe[291] = ustvari("Lukas", 29);
    osebe[292] = ustvari("Vinko", 24);
    osebe[293] = ustvari("Bine", 52);
    osebe[294] = ustvari("Vlasta", 68);
    osebe[295] = ustvari("Egon", 6);
    osebe[296] = ustvari("Maksimiljan", 92);
    osebe[297] = ustvari("Nihad", 96);
    osebe[298] = ustvari("Almir", 55);
    osebe[299] = ustvari("Damir", 27);
    osebe[300] = ustvari("Hana", 27);
    osebe[301] = ustvari("Dragutin", 73);
    osebe[302] = ustvari("Petja", 43);
    osebe[303] = ustvari("Mija", 95);
    osebe[304] = ustvari("Stanislava", 73);
    osebe[305] = ustvari("Lidija", 9);
    osebe[306] = ustvari("Majda", 54);
    osebe[307] = ustvari("Gabrijela", 37);
    osebe[308] = ustvari("Kristijan", 12);
    osebe[309] = ustvari("Lora", 43);
    osebe[310] = ustvari("Radojka", 9);
    osebe[311] = ustvari("Emanuel", 86);
    osebe[312] = ustvari("Apolonija", 21);
    osebe[313] = ustvari("Amel", 12);
    osebe[314] = ustvari("Stane", 50);
    osebe[315] = ustvari("Tim", 34);
    osebe[316] = ustvari("Gregor", 73);
    osebe[317] = ustvari("Nadica", 26);
    osebe[318] = ustvari("Ariana", 80);
    osebe[319] = ustvari("Slobodanka", 50);
    osebe[320] = ustvari("Aleksej", 99);
    osebe[321] = ustvari("Sandi", 13);
    osebe[322] = ustvari("Ljudmila", 54);
    osebe[323] = ustvari("Muhamed", 16);
    osebe[324] = ustvari("Borut", 68);
    osebe[325] = ustvari("Mato", 22);
    osebe[326] = ustvari("Vanda", 94);
    osebe[327] = ustvari("Franjo", 14);
    osebe[328] = ustvari("Robi", 40);
    osebe[329] = ustvari("Fatima", 70);
    osebe[330] = ustvari("Anton", 42);
    osebe[331] = ustvari("Zorica", 98);
    osebe[332] = ustvari("Milivoj", 89);
    osebe[333] = ustvari("Elvisa", 4);
    osebe[334] = ustvari("Vanessa", 85);
    osebe[335] = ustvari("Adolf", 3);
    osebe[336] = ustvari("Karmen", 82);
    osebe[337] = ustvari("Alja", 90);
    osebe[338] = ustvari("Jasmin", 46);
    osebe[339] = ustvari("Jure", 64);
    osebe[340] = ustvari("Kenan", 92);
    osebe[341] = ustvari("Radmila", 41);
    osebe[342] = ustvari("Vitan", 5);
    osebe[343] = ustvari("Tadej", 85);
    osebe[344] = ustvari("Tija", 39);
    osebe[345] = ustvari("Vilma", 13);
    osebe[346] = ustvari("Anaja", 81);
    osebe[347] = ustvari("Radivoj", 91);
    osebe[348] = ustvari("Agata", 90);
    osebe[349] = ustvari("Barica", 27);
    osebe[350] = ustvari("Trina", 21);
    osebe[351] = ustvari("Arne", 84);
    osebe[352] = ustvari("Mia", 80);

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
