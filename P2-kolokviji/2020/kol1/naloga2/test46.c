
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

void izpisi(int** t, int n) {
    for (int i = 0;  i < n;  i++) {
        int* p = t[i];
        while (*p != 0) {
            printf("%d ", *p);
            p++;
        }
        printf("0\n");
    }
    for (int i = 0;  i < n;  i++) {
        for (int j = 0;  j < n;  j++) {
            printf("%d", t[i] == t[j]);
        }
        printf("\n");
    }
}

int __main__() {
    int t1[] = {-235, -661, 836, 552, 320, 55, 0};
    int t2[] = {-397, -516, 120, 186, -106, 180, 841, 564, 537, 91, 734, 203, 885, 506, -37, -705, -922, -432, -711, -218, 65, 62, 269, 770, 0};
    int t3[] = {304, -666, -48, 211, -848, 354, 806, -816, 556, 782, 856, -800, 887, 504, -260, 997, 554, 143, -473, 541, 284, 315, 947, -580, 0};
    int* t4 = t3;
    int t5[] = {-211, -490, 482, 242, 237, 493, -173, -293, 911, 41, -79, -496, 373, 806, 359, 52, -651, -911, 894, -223, 761, 0};
    int t6[] = {-281, 118, 467, -698, 773, 694, 402, 823, 0};
    int* t7 = t6;
    int t8[] = {-219, 0};
    int t9[] = {-766, 720, -569, 312, 788, 899, 136, 892, 419, -990, 0};
    int* t10 = t3;
    int* t11 = t3;
    int t12[] = {-574, -419, -378, 426, -643, -221, 204, 551, 661, -882, 597, -368, 836, 268, 717, 73, -168, -732, -133, -640, 630, 887, -792, -712, -341, 0};
    int t13[] = {924, -271, 651, -193, -562, -705, -570, -253, -146, 961, 225, 158, 0};
    int t14[] = {0};
    int* t15 = t2;
    int t16[] = {-411, -635, -514, 265, 83, -140, 985, 945, -684, 36, 474, -191, 718, -849, 51, 895, -668, -243, -852, 0};
    int t17[] = {953, 154, -53, 0};
    int* t18 = t14;
    int t19[] = {-791, 743, 225, 991, 421, -623, 101, 301, 489, -115, -798, 695, -142, -98, 849, 436, 616, 767, -890, -681, -652, 0};
    int t20[] = {-390, 712, 29, 0};
    int* t21 = t19;
    int t22[] = {-311, 144, -312, 666, -995, -848, 989, 188, -528, 0};
    int t23[] = {254, 787, 819, -390, 356, -69, 0};
    int t24[] = {-944, 809, 926, 844, -962, 971, 201, 655, 366, 909, 443, -431, -64, 574, -427, 65, 321, 0};
    int t25[] = {307, 985, -70, -525, -664, -834, 363, 608, 187, -583, -191, 544, -96, -283, 431, 756, -654, -129, -79, 343, 274, 0};
    int t26[] = {773, 203, -268, 987, 0};
    int t27[] = {781, -680, 876, 195, -700, 448, -325, -271, -423, 297, 5, 668, -939, -713, -767, 141, 7, 161, -495, 422, -337, -781, -954, 0};
    int* t28 = t25;
    int t29[] = {812, 0};
    int t30[] = {905, -869, 349, 83, -363, 802, -996, -862, -882, 915, 0};
    int t31[] = {-869, 49, 550, -151, 671, 477, 16, -162, -133, 839, -319, 0};
    int* t32 = t2;
    int* t33 = t13;
    int* t34 = t11;
    int* t35 = t2;
    int* t36 = t2;
    int* t37 = t30;
    int t38[] = {-589, -989, 78, 364, 438, 517, 954, -55, 570, -397, 948, -612, 244, 493, 90, -884, 745, 754, 527, 650, 0};
    int* t39 = t29;

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
