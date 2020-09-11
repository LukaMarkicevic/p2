#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX 21

int main() {
    
    char* vhod = (char *) malloc(MAX * sizeof(char));
    char* izhod = (char *) malloc(MAX * sizeof(char));
    char znak;

    scanf("%s", vhod);
    scanf("%s", izhod);
    getchar();
    scanf("%c", &znak);

    FILE *fvhod = fopen(vhod, "r");
    FILE *fizhod = fopen(izhod, "w");

    char spomin[1001];
    char* vrstica = (char *) malloc (1001 * sizeof(char));
    char* zadnjaVrstica = (char *) malloc (1001 * sizeof(char));

    while (fgets(vrstica, 1001, fvhod) != NULL)
        if (strchr(vrstica, znak) != NULL)
            strcpy(zadnjaVrstica, vrstica);

    fprintf(fizhod, "%s", zadnjaVrstica);
    fclose(fvhod);
    fclose(fizhod);

    return 0;
}