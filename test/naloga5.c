#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER 100

void odstraniDuplikate(FILE* vhod, FILE* izhod) {
	char** sveLinije1 = malloc(BUFFER * sizeof(char*));
	int count1 = 0;

	while (!feof(vhod)) {
		sveLinije1[count1] = malloc(BUFFER * sizeof(char));
		fgets(sveLinije1[count1], BUFFER, vhod);
		count1++;
	}

	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < strlen(sveLinije1[i]); j++) {
			if (sveLinije1[i][j] >= 'a' && sveLinije1[i][j] <= 'z') {
				if (sveLinije1[i][j] == sveLinije1[i][j + 1]) {
					continue;
				}
			}
			if (sveLinije1[i][j] >= 'A' && sveLinije1[i][j] <= 'Z') {
				if (sveLinije1[i][j] == sveLinije1[i][j + 1]) {
					continue;
				}
			}
			fputc(sveLinije1[i][j], izhod);
		}

	}
	free(sveLinije1);
}


int main() {
	FILE* fp1 = fopen("vhod1.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	odstraniDuplikate(fp1, fw);
	fclose(fp1);
	fclose(fw);
	return 0;
}
