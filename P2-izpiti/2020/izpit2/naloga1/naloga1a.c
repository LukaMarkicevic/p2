#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void odstraniDuplikate(FILE* vhod, FILE* izhod) {
	char* duzina = malloc(1000 * sizeof(char));
	while (!feof(vhod)) {
		fgets(duzina, 1000, vhod);
		for (int i = 0; i < strlen(duzina); i++) {
			if (duzina[i] >= 'a' && duzina[i] <= 'z' || duzina[i] >= 'A' && duzina[i] <= 'Z') {
				if (duzina[i] == duzina[i + 1]) {
					continue;
				}
			}
			fputc(duzina[i], izhod);

		}

	}

	free(duzina);
}


int main() {
	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	odstraniDuplikate(fp, fw);
	return 0;
}
