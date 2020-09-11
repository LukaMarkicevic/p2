#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int duzina(FILE* fp) {
	int count = 0;
	char linija[1000];
	while (fgets(linija, 1000, fp) != NULL) {
		count++;
	}
	rewind(fp);
	return count;
}

void obrni(FILE* vhod, FILE* izhod, int n) {

	int duz = duzina(vhod);
	char** sveLinije = malloc(duz * sizeof(char*));
	int i = 0;
	while (!feof(vhod)) {
		sveLinije[i] = malloc(10 * sizeof(char));
		fgets(sveLinije[i], 10, vhod);
		i++;
	}
	int broj = duz - n;
	for (int j = broj; j < i; j++) {
		fputs(sveLinije[j], izhod);
	}

	free(sveLinije);
}

int main() {
	FILE* vhod = fopen("vhod.txt", "r");
	FILE* izhod = fopen("izhod.txt", "w");
	int n = 3;
	obrni(vhod, izhod, n);

	fclose(vhod);
	fclose(izhod);

	return 0;
}
