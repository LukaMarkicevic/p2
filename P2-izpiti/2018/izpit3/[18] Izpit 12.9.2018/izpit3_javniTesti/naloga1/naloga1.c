#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int duzina(FILE* fp) {
    int count = 0;
    char linija[1000];
    while (fgets(linija, 1000, fp) != NULL) {
        count++;
    }
    rewind(fp);
    return count;
}



int main() {

    int n;
    scanf("%d ", &n);
    char arej[n];
    for (int i = 0; i < n; i++) {
        scanf("%c", &arej[i]);
    }

    bool prvi = true;
    for (int i = 0; i < n; i++) {
        if (prvi || arej[i - 1] == '_') {
            prvi = false;
            if (arej[i] >= 'a' && arej[i] <= 'z') {
                arej[i] = toupper(arej[i]);
            }
        }
        printf("%c", arej[i]);
    }
    printf("\n");



    return 0;
}