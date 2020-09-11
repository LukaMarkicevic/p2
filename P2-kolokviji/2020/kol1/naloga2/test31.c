
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
    int t1[] = {964, -624, 441, -172, -929, -616, -549, -496, 256, 464, 62, 510, 343, 407, 466, -460, -800, -188, -130, 504, 517, 121, -921, 691, 842, -872, -677, -556, -101, 890, 325, -530, -630, 513, -889, -421, -503, 284, -522, -748, -513, -952, 151, -831, 753, 30, -681, 917, 560, -412, -991, -271, 139, 884, -628, -651, 865, 49, 415, 904, -580, 400, -310, -244, -512, -417, 95, 599, 137, 949, 264, -165, 645, -296, 175, -618, -779, 943, 426, 410, -864, 575, -574, 297, 474, 562, 533, 503, 674, -207, 516, 488, -168, -669, 467, -46, 258, -866, 732, -783, -248, 567, 846, -364, 936, 479, 0};
    int* t2 = t1;
    int* t3 = t1;
    int* t4 = t1;
    int* t5 = t4;
    int* t6 = t1;
    int t7[] = {-670, 43, -844, 899, -921, 351, 450, -82, 438, -861, -224, -211, -126, 5, 481, -220, 255, 683, -128, 932, -939, -973, 118, -946, 854, -726, 528, -261, -207, 670, -767, -819, -21, 455, 538, -269, -443, -421, -99, 621, -290, -697, 413, 37, 12, 605, 381, -105, 100, -693, 639, -180, 716, -84, 356, 476, -818, 0};
    int* t8 = t6;
    int* t9 = t7;

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}