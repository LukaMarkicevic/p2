#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char* imeVhoda = malloc(25 * sizeof(char));
    char* imeRezultata = malloc(25 * sizeof(char));
    int n;

    scanf("%s", imeVhoda);
    scanf("%d", &n);
    scanf("%s", imeRezultata);

    FILE* fp = fopen(imeVhoda, "rb+");
    FILE* fw = fopen(imeRezultata, "w");

    int prviBroj = 0;
    int drugiBroj = 0;
    int treciBroj = 0;

    unsigned char* linija = malloc(3 * n * sizeof(char));

    fread(linija, sizeof(unsigned char), 3 * n, fp);

    for (int i = 0; i < 3 * n; i = i + 3) {

        int RRR = linija[i] ;
        int GGG = linija[i + 1] ;
        int BBB = linija[i + 2] ;
        // printf("%d %d %d\n", RRR, GGG, BBB);
        if (RRR > 0 && GGG == 0 && BBB == 0) {
            prviBroj++;
        }
        if (RRR == 0 && GGG > 0 && BBB == 0) {
            drugiBroj++;
        }
        if (RRR == 0 && GGG == 0 && BBB > 0) {
            treciBroj++;
        }
    }

    fprintf(fw, "%d\n", prviBroj);
    fprintf(fw, "%d\n", drugiBroj);
    fprintf(fw, "%d\n", treciBroj);


    fclose(fp);
    fclose(fw);
    free(imeVhoda);
    free(imeRezultata);

    printf("%d\n", prviBroj);
    printf("%d\n", drugiBroj);
    printf("%d\n", treciBroj);

    return 0;
}

