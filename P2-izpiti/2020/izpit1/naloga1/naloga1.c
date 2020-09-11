#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void obrni(FILE* vhod, FILE* izhod) {

	char** sveVrstice = malloc(1001 * sizeof(char*));

	char* vrstica = malloc(1001 * sizeof(char));

	int i = 0;
	while (!feof(vhod)) {
		fgets(vrstica, 1001, vhod);
		int duzina = strlen(vrstica);
		sveVrstice[i] = malloc(duzina * sizeof(char));
		sprintf(sveVrstice[i], "%s", vrstica);
		i++;
	}
	fprintf(izhod, "%s\n", sveVrstice[i - 1]);

	for (int j = i - 2; j >= 0; j--) {
		fprintf(izhod, "%s", sveVrstice[j]);
	}

	free(sveVrstice);
	free(vrstica);

}

int main() {

	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");

	obrni(fp, fw);

	return 0;
}

