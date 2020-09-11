#include <stdio.h>
#include <stdlib.h>
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

void odstraniDuplikate(FILE* vhod, FILE* izhod) {
	char c;
	char previous = '\n';
	while ((c = fgetc(vhod)) != EOF) {
		if (!isalpha(c) || previous != c) {
			previous = c;
			fputc(c,izhod);
		}
	}

}

int main() {
	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	odstraniDuplikate(fp, fw);
	fclose(fp);
	fclose(fw);

	return 0;
}
