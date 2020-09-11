
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
    int n = 136;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Greta", 43);
    osebe[1] = ustvari("Roman", 67);
    osebe[2] = ustvari("Erika", 82);
    osebe[3] = ustvari("Smiljan", 16);
    osebe[4] = ustvari("Edin", 89);
    osebe[5] = ustvari("Julijan", 69);
    osebe[6] = ustvari("Silvo", 83);
    osebe[7] = ustvari("Adam", 27);
    osebe[8] = ustvari("Oskar", 27);
    osebe[9] = ustvari("Gabrijel", 21);
    osebe[10] = ustvari("Feliks", 87);
    osebe[11] = ustvari("Nina", 95);
    osebe[12] = ustvari("Mitja", 62);
    osebe[13] = ustvari("Silvester", 68);
    osebe[14] = ustvari("Katarina", 9);
    osebe[15] = ustvari("Tinkara", 44);
    osebe[16] = ustvari("Ota", 7);
    osebe[17] = ustvari("Timon", 28);
    osebe[18] = ustvari("Adrijana", 80);
    osebe[19] = ustvari("Zara", 41);
    osebe[20] = ustvari("Nika", 95);
    osebe[21] = ustvari("Friderik", 89);
    osebe[22] = ustvari("Eli", 80);
    osebe[23] = ustvari("Anita", 79);
    osebe[24] = ustvari("Maksimiljan", 3);
    osebe[25] = ustvari("Lukas", 7);
    osebe[26] = ustvari("Matejka", 78);
    osebe[27] = ustvari("Lian", 36);
    osebe[28] = ustvari("Apolonija", 69);
    osebe[29] = ustvari("Barbka", 66);
    osebe[30] = ustvari("Neli", 66);
    osebe[31] = ustvari("Nana", 3);
    osebe[32] = ustvari("Melanie", 91);
    osebe[33] = ustvari("Lovrenc", 95);
    osebe[34] = ustvari("Marica", 90);
    osebe[35] = ustvari("Miroslava", 11);
    osebe[36] = ustvari("Regina", 1);
    osebe[37] = ustvari("Andrejka", 54);
    osebe[38] = ustvari("Barbara", 44);
    osebe[39] = ustvari("Ervin", 63);
    osebe[40] = ustvari("Amalija", 70);
    osebe[41] = ustvari("Bogomir", 87);
    osebe[42] = ustvari("Ivanka", 92);
    osebe[43] = ustvari("Danaja", 34);
    osebe[44] = ustvari("Ali", 16);
    osebe[45] = ustvari("Sonja", 25);
    osebe[46] = ustvari("Zarja", 53);
    osebe[47] = ustvari("Minka", 15);
    osebe[48] = ustvari("Tina", 55);
    osebe[49] = ustvari("Tai", 69);
    osebe[50] = ustvari("Samanta", 87);
    osebe[51] = ustvari("Zdravka", 91);
    osebe[52] = ustvari("Jerca", 51);
    osebe[53] = ustvari("Manca", 78);
    osebe[54] = ustvari("Nena", 9);
    osebe[55] = ustvari("Alojzij", 15);
    osebe[56] = ustvari("Almir", 67);
    osebe[57] = ustvari("Samuel", 83);
    osebe[58] = ustvari("Viktorija", 27);
    osebe[59] = ustvari("Franci", 15);
    osebe[60] = ustvari("Tajda", 59);
    osebe[61] = ustvari("Renato", 2);
    osebe[62] = ustvari("Lilijana", 72);
    osebe[63] = ustvari("Jasminka", 8);
    osebe[64] = ustvari("Suzana", 92);
    osebe[65] = ustvari("Nikolina", 21);
    osebe[66] = ustvari("Renata", 9);
    osebe[67] = ustvari("Mirsad", 72);
    osebe[68] = ustvari("Dragotin", 56);
    osebe[69] = ustvari("Osman", 27);
    osebe[70] = ustvari("Matija", 88);
    osebe[71] = ustvari("Geza", 11);
    osebe[72] = ustvari("Ajna", 70);
    osebe[73] = ustvari("Dejan", 16);
    osebe[74] = ustvari("Adin", 19);
    osebe[75] = ustvari("Dan", 18);
    osebe[76] = ustvari("Tom", 24);
    osebe[77] = ustvari("Darinka", 39);
    osebe[78] = ustvari("Stane", 72);
    osebe[79] = ustvari("Hilda", 1);
    osebe[80] = ustvari("Elvir", 7);
    osebe[81] = ustvari("Jurij", 74);
    osebe[82] = ustvari("Klementina", 3);
    osebe[83] = ustvari("Slavka", 40);
    osebe[84] = ustvari("Dominik", 32);
    osebe[85] = ustvari("Irena", 57);
    osebe[86] = ustvari("Melisa", 9);
    osebe[87] = ustvari("Maj", 43);
    osebe[88] = ustvari("Tadej", 72);
    osebe[89] = ustvari("Otilija", 89);
    osebe[90] = ustvari("Janez", 29);
    osebe[91] = ustvari("Husein", 40);
    osebe[92] = ustvari("Agata", 6);
    osebe[93] = ustvari("Mehmed", 58);
    osebe[94] = ustvari("Marcel", 45);
    osebe[95] = ustvari("Jakob", 1);
    osebe[96] = ustvari("Adis", 92);
    osebe[97] = ustvari("Vid", 20);
    osebe[98] = ustvari("Teodor", 21);
    osebe[99] = ustvari("Pavel", 82);
    osebe[100] = ustvari("Sarah", 44);
    osebe[101] = ustvari("Valentin", 56);
    osebe[102] = ustvari("Anej", 18);
    osebe[103] = ustvari("Stojan", 95);
    osebe[104] = ustvari("Jani", 99);
    osebe[105] = ustvari("Fran", 87);
    osebe[106] = ustvari("Val", 39);
    osebe[107] = ustvari("Voranc", 35);
    osebe[108] = ustvari("Milenko", 78);
    osebe[109] = ustvari("Denis", 48);
    osebe[110] = ustvari("Klara", 93);
    osebe[111] = ustvari("Luna", 72);
    osebe[112] = ustvari("Bojana", 57);
    osebe[113] = ustvari("Ignac", 42);
    osebe[114] = ustvari("Julij", 65);
    osebe[115] = ustvari("Alojz", 52);
    osebe[116] = ustvari("Nenad", 46);
    osebe[117] = ustvari("Leonida", 40);
    osebe[118] = ustvari("Lamija", 86);
    osebe[119] = ustvari("Mateja", 31);
    osebe[120] = ustvari("Marjan", 72);
    osebe[121] = ustvari("Mai", 79);
    osebe[122] = ustvari("Genovefa", 16);
    osebe[123] = ustvari("Albert", 49);
    osebe[124] = ustvari("Lidija", 66);
    osebe[125] = ustvari("Davud", 20);
    osebe[126] = ustvari("Eva", 83);
    osebe[127] = ustvari("Stanka", 10);
    osebe[128] = ustvari("Mirela", 66);
    osebe[129] = ustvari("Vito", 6);
    osebe[130] = ustvari("Almira", 70);
    osebe[131] = ustvari("Cecilija", 95);
    osebe[132] = ustvari("Melita", 5);
    osebe[133] = ustvari("Ian", 28);
    osebe[134] = ustvari("Mara", 4);
    osebe[135] = ustvari("Elma", 33);

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
