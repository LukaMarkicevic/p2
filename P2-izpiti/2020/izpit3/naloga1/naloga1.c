#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int duzina(FILE* fp) {
	int count = 0;
	char linija[1001];
	while (fgets(linija, 1001, fp) != NULL) {
		count++;
	}
	rewind(fp);
	return count;
}

void razlike(FILE* prva, FILE* druga, FILE* izhod) {

	int duz = duzina(prva);

	char linija1[1001];
	char linija2[1001];
	int broj = 1;
	while (duz > 0) {

		fgets(linija1, 1001, prva);
		fgets(linija2, 1001, druga);

		if (strcmp(linija1, linija2) != 0) {
			fprintf(izhod, "%d\n", broj );
		}
		broj++;
		duz--;
	}

}

int main() {

	FILE* vhod1 = fopen("vhod1.txt", "r");
	FILE* vhod2 = fopen("vhod2.txt", "r");
	FILE* izhod = fopen("izhod.txt", "w");

	razlike(vhod1, vhod2, izhod);

	fclose(vhod1);
	fclose(vhod2);
	fclose(izhod);

	return 0;
}