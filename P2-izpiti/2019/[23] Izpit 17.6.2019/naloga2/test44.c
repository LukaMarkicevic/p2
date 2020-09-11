
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
    int n = 152;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Rubi", 65);
    osebe[1] = ustvari("Vili", 12);
    osebe[2] = ustvari("Din", 78);
    osebe[3] = ustvari("Ibrahim", 58);
    osebe[4] = ustvari("Jerica", 57);
    osebe[5] = ustvari("Karol", 76);
    osebe[6] = ustvari("Darja", 13);
    osebe[7] = ustvari("Asmir", 95);
    osebe[8] = ustvari("Nejc", 18);
    osebe[9] = ustvari("Sergeja", 35);
    osebe[10] = ustvari("Milanka", 4);
    osebe[11] = ustvari("Tia", 9);
    osebe[12] = ustvari("Ian", 62);
    osebe[13] = ustvari("Esad", 27);
    osebe[14] = ustvari("Elina", 97);
    osebe[15] = ustvari("Vili", 19);
    osebe[16] = ustvari("Alina", 60);
    osebe[17] = ustvari("Elina", 95);
    osebe[18] = ustvari("Dalibor", 94);
    osebe[19] = ustvari("Metod", 94);
    osebe[20] = ustvari("Nai", 48);
    osebe[21] = ustvari("Janko", 47);
    osebe[22] = ustvari("Rado", 81);
    osebe[23] = ustvari("Maksimiljan", 27);
    osebe[24] = ustvari("Rubi", 76);
    osebe[25] = ustvari("Rado", 93);
    osebe[26] = ustvari("Polonca", 93);
    osebe[27] = ustvari("Dalibor", 32);
    osebe[28] = ustvari("Ervin", 42);
    osebe[29] = ustvari("Nermina", 34);
    osebe[30] = ustvari("Leonida", 98);
    osebe[31] = ustvari("Darja", 92);
    osebe[32] = ustvari("Maksimiljan", 98);
    osebe[33] = ustvari("Nai", 79);
    osebe[34] = ustvari("Klaudija", 90);
    osebe[35] = ustvari("Gaj", 61);
    osebe[36] = ustvari("Nikita", 63);
    osebe[37] = ustvari("Milovan", 13);
    osebe[38] = ustvari("Ramiz", 74);
    osebe[39] = ustvari("Ajna", 42);
    osebe[40] = ustvari("Din", 51);
    osebe[41] = ustvari("Medina", 58);
    osebe[42] = ustvari("Fanika", 5);
    osebe[43] = ustvari("Robi", 38);
    osebe[44] = ustvari("Dalibor", 65);
    osebe[45] = ustvari("Dalibor", 91);
    osebe[46] = ustvari("Polonca", 93);
    osebe[47] = ustvari("Robi", 89);
    osebe[48] = ustvari("Zvonko", 84);
    osebe[49] = ustvari("Asmir", 87);
    osebe[50] = ustvari("Elina", 50);
    osebe[51] = ustvari("Milanka", 38);
    osebe[52] = ustvari("Elin", 54);
    osebe[53] = ustvari("Simona", 1);
    osebe[54] = ustvari("Adam", 41);
    osebe[55] = ustvari("Leonida", 30);
    osebe[56] = ustvari("Erazem", 65);
    osebe[57] = ustvari("Helena", 22);
    osebe[58] = ustvari("Alenka", 47);
    osebe[59] = ustvari("Adrian", 35);
    osebe[60] = ustvari("Zvonko", 12);
    osebe[61] = ustvari("Leon", 74);
    osebe[62] = ustvari("Mirzet", 41);
    osebe[63] = ustvari("Ajna", 38);
    osebe[64] = ustvari("Magda", 14);
    osebe[65] = ustvari("Magda", 98);
    osebe[66] = ustvari("Karol", 83);
    osebe[67] = ustvari("Metod", 84);
    osebe[68] = ustvari("Jerica", 43);
    osebe[69] = ustvari("Maja", 85);
    osebe[70] = ustvari("Nikita", 99);
    osebe[71] = ustvari("Milenko", 3);
    osebe[72] = ustvari("Jerica", 80);
    osebe[73] = ustvari("Anela", 87);
    osebe[74] = ustvari("Rubi", 72);
    osebe[75] = ustvari("Asmir", 51);
    osebe[76] = ustvari("Milena", 56);
    osebe[77] = ustvari("Karol", 87);
    osebe[78] = ustvari("Franko", 73);
    osebe[79] = ustvari("Janko", 13);
    osebe[80] = ustvari("Nai", 49);
    osebe[81] = ustvari("Zvonko", 22);
    osebe[82] = ustvari("Nermina", 22);
    osebe[83] = ustvari("Milenko", 7);
    osebe[84] = ustvari("Elin", 33);
    osebe[85] = ustvari("Alina", 2);
    osebe[86] = ustvari("Simona", 38);
    osebe[87] = ustvari("Esad", 15);
    osebe[88] = ustvari("Slava", 24);
    osebe[89] = ustvari("Sergeja", 39);
    osebe[90] = ustvari("Ada", 88);
    osebe[91] = ustvari("Dalibor", 98);
    osebe[92] = ustvari("Dominika", 98);
    osebe[93] = ustvari("Mirzet", 99);
    osebe[94] = ustvari("Ian", 48);
    osebe[95] = ustvari("Ibrahim", 24);
    osebe[96] = ustvari("Milenko", 90);
    osebe[97] = ustvari("Robi", 37);
    osebe[98] = ustvari("Milenko", 89);
    osebe[99] = ustvari("Din", 54);
    osebe[100] = ustvari("Lidija", 22);
    osebe[101] = ustvari("Milovan", 4);
    osebe[102] = ustvari("Ladislava", 92);
    osebe[103] = ustvari("Adrian", 77);
    osebe[104] = ustvari("Amela", 47);
    osebe[105] = ustvari("Leonida", 64);
    osebe[106] = ustvari("Julij", 64);
    osebe[107] = ustvari("Rubi", 46);
    osebe[108] = ustvari("Gaj", 9);
    osebe[109] = ustvari("Verica", 66);
    osebe[110] = ustvari("Tatjana", 87);
    osebe[111] = ustvari("Leonida", 18);
    osebe[112] = ustvari("Franko", 37);
    osebe[113] = ustvari("Nai", 42);
    osebe[114] = ustvari("Nermina", 57);
    osebe[115] = ustvari("Lidija", 50);
    osebe[116] = ustvari("Florijan", 9);
    osebe[117] = ustvari("Milanka", 36);
    osebe[118] = ustvari("Tia", 58);
    osebe[119] = ustvari("Natalija", 49);
    osebe[120] = ustvari("Medina", 91);
    osebe[121] = ustvari("Julij", 4);
    osebe[122] = ustvari("Magda", 13);
    osebe[123] = ustvari("Florijan", 54);
    osebe[124] = ustvari("Erazem", 20);
    osebe[125] = ustvari("Milovan", 39);
    osebe[126] = ustvari("Lia", 72);
    osebe[127] = ustvari("Ajna", 91);
    osebe[128] = ustvari("Florijan", 76);
    osebe[129] = ustvari("Alina", 41);
    osebe[130] = ustvari("Jerica", 61);
    osebe[131] = ustvari("Mile", 8);
    osebe[132] = ustvari("Mirko", 12);
    osebe[133] = ustvari("Ervin", 33);
    osebe[134] = ustvari("Karol", 64);
    osebe[135] = ustvari("Gaj", 76);
    osebe[136] = ustvari("Alenka", 68);
    osebe[137] = ustvari("Leon", 78);
    osebe[138] = ustvari("Enja", 43);
    osebe[139] = ustvari("Bogomil", 87);
    osebe[140] = ustvari("Mirko", 1);
    osebe[141] = ustvari("Elin", 37);
    osebe[142] = ustvari("Julij", 49);
    osebe[143] = ustvari("Elina", 8);
    osebe[144] = ustvari("Pavlina", 83);
    osebe[145] = ustvari("Ramiz", 80);
    osebe[146] = ustvari("Erazem", 40);
    osebe[147] = ustvari("Sergeja", 26);
    osebe[148] = ustvari("Asmir", 27);
    osebe[149] = ustvari("Alina", 68);
    osebe[150] = ustvari("Mirko", 87);
    osebe[151] = ustvari("Pavlina", 64);

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
