
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
    int n = 112;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Tin", 79);
    osebe[1] = ustvari("Nermin", 77);
    osebe[2] = ustvari("Ilija", 58);
    osebe[3] = ustvari("Nikolaj", 45);
    osebe[4] = ustvari("Zofija", 14);
    osebe[5] = ustvari("Leja", 61);
    osebe[6] = ustvari("Jan", 79);
    osebe[7] = ustvari("Marcel", 41);
    osebe[8] = ustvari("Amela", 56);
    osebe[9] = ustvari("Marjetka", 20);
    osebe[10] = ustvari("Daris", 39);
    osebe[11] = ustvari("Julijan", 76);
    osebe[12] = ustvari("Mirza", 52);
    osebe[13] = ustvari("Dolores", 12);
    osebe[14] = ustvari("Gal", 94);
    osebe[15] = ustvari("Helena", 31);
    osebe[16] = ustvari("Nemanja", 49);
    osebe[17] = ustvari("Sofija", 49);
    osebe[18] = ustvari("Gloria", 74);
    osebe[19] = ustvari("Miro", 93);
    osebe[20] = ustvari("Damir", 91);
    osebe[21] = ustvari("Mladen", 82);
    osebe[22] = ustvari("Rozina", 69);
    osebe[23] = ustvari("Mirela", 14);
    osebe[24] = ustvari("Neo", 79);
    osebe[25] = ustvari("Mile", 21);
    osebe[26] = ustvari("Julija", 21);
    osebe[27] = ustvari("Senada", 98);
    osebe[28] = ustvari("Elin", 28);
    osebe[29] = ustvari("Ramiz", 29);
    osebe[30] = ustvari("Samuel", 10);
    osebe[31] = ustvari("Ivica", 69);
    osebe[32] = ustvari("Kristian", 68);
    osebe[33] = ustvari("Tija", 60);
    osebe[34] = ustvari("Tara", 13);
    osebe[35] = ustvari("Jozefa", 35);
    osebe[36] = ustvari("Ignacij", 93);
    osebe[37] = ustvari("Oto", 40);
    osebe[38] = ustvari("Branimir", 35);
    osebe[39] = ustvari("Gregor", 31);
    osebe[40] = ustvari("Marjeta", 72);
    osebe[41] = ustvari("Dunja", 95);
    osebe[42] = ustvari("Nadja", 6);
    osebe[43] = ustvari("Nikola", 76);
    osebe[44] = ustvari("Tai", 35);
    osebe[45] = ustvari("Jona", 22);
    osebe[46] = ustvari("Marjana", 1);
    osebe[47] = ustvari("Gaber", 48);
    osebe[48] = ustvari("Matejka", 26);
    osebe[49] = ustvari("Anastasia", 87);
    osebe[50] = ustvari("Tjan", 49);
    osebe[51] = ustvari("Elma", 97);
    osebe[52] = ustvari("Dora", 24);
    osebe[53] = ustvari("Ismet", 11);
    osebe[54] = ustvari("Stanislava", 17);
    osebe[55] = ustvari("Romana", 10);
    osebe[56] = ustvari("Karol", 95);
    osebe[57] = ustvari("Albina", 65);
    osebe[58] = ustvari("Kenan", 6);
    osebe[59] = ustvari("Indira", 46);
    osebe[60] = ustvari("Alan", 21);
    osebe[61] = ustvari("Jurij", 28);
    osebe[62] = ustvari("Danijel", 31);
    osebe[63] = ustvari("Max", 4);
    osebe[64] = ustvari("Miroslav", 15);
    osebe[65] = ustvari("Sebastjan", 89);
    osebe[66] = ustvari("Adrian", 89);
    osebe[67] = ustvari("Draga", 36);
    osebe[68] = ustvari("Enja", 30);
    osebe[69] = ustvari("Iva", 30);
    osebe[70] = ustvari("Stanislav", 64);
    osebe[71] = ustvari("Aleksandra", 38);
    osebe[72] = ustvari("Davor", 90);
    osebe[73] = ustvari("Tomislav", 77);
    osebe[74] = ustvari("Edita", 80);
    osebe[75] = ustvari("Sulejman", 84);
    osebe[76] = ustvari("Elvedin", 28);
    osebe[77] = ustvari("Elina", 67);
    osebe[78] = ustvari("Edvin", 86);
    osebe[79] = ustvari("Dragutin", 44);
    osebe[80] = ustvari("Minea", 78);
    osebe[81] = ustvari("Trina", 89);
    osebe[82] = ustvari("Bogomir", 10);
    osebe[83] = ustvari("Tibor", 75);
    osebe[84] = ustvari("Predrag", 22);
    osebe[85] = ustvari("Klementina", 26);
    osebe[86] = ustvari("Lia", 2);
    osebe[87] = ustvari("Barbara", 70);
    osebe[88] = ustvari("Sonja", 10);
    osebe[89] = ustvari("Slobodan", 51);
    osebe[90] = ustvari("Melisa", 94);
    osebe[91] = ustvari("Isabela", 97);
    osebe[92] = ustvari("Arian", 99);
    osebe[93] = ustvari("Zarja", 36);
    osebe[94] = ustvari("Vekoslav", 18);
    osebe[95] = ustvari("Majda", 59);
    osebe[96] = ustvari("Ian", 15);
    osebe[97] = ustvari("Greta", 90);
    osebe[98] = ustvari("Miodrag", 6);
    osebe[99] = ustvari("Ksenija", 27);
    osebe[100] = ustvari("Lukas", 72);
    osebe[101] = ustvari("Azra", 83);
    osebe[102] = ustvari("Biljana", 63);
    osebe[103] = ustvari("Mehmed", 87);
    osebe[104] = ustvari("Kaja", 60);
    osebe[105] = ustvari("Ljubica", 49);
    osebe[106] = ustvari("Jasminka", 70);
    osebe[107] = ustvari("Vinko", 54);
    osebe[108] = ustvari("Ahmet", 82);
    osebe[109] = ustvari("Damijana", 50);
    osebe[110] = ustvari("Milenko", 47);
    osebe[111] = ustvari("Martina", 22);

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
