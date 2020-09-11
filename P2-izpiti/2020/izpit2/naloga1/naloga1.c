#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void odstraniDuplikate(FILE* vhod, FILE* izhod) {
	char c;
	char previous = '\0';
	while ((c = fgetc(vhod)) != EOF) {
		if (!isalpha(c) || c != previous) {
			previous = c;
			fputc(c, izhod);
		}
	}
}



int main() {

	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	odstraniDuplikate(fp, fw);

	return 0;
}

