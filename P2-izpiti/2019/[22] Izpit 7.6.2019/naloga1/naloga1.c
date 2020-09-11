#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

	char* imeVhoda = malloc(25 * sizeof(char));
	char* imeRezultata = malloc(25 * sizeof(char));
	char imeASCII;

	scanf("%s", imeVhoda);
	scanf("%s", imeRezultata);
	scanf(" %c", &imeASCII);

	FILE* fp = fopen(imeVhoda, "r");
	FILE* fw = fopen(imeRezultata, "w");

	char* linijaZaVracanje = malloc(1001 * sizeof(char));
	while (!feof(fp)) {
		char* linija = malloc(1001 * sizeof(char));
		fgets(linija, 1001, fp);
		for (int i = 0; i < 1001; i++) {
			if (linija[i] == imeASCII) {
				linijaZaVracanje = linija;
			}
		}
	}
	fprintf(fw, "%s", linijaZaVracanje);

	fclose(fp);
	fclose(fw);


	return 0;
}


