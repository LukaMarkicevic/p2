#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	char** dat = malloc(1000 * sizeof(char*));

	char vhod[20];
	char izhod[20];
	char c;

	scanf("%s\n", vhod);
	scanf("%s\n", izhod);
	scanf("%c", &c);

	FILE* fp = fopen(vhod, "r");
	FILE* fw = fopen(izhod, "w");


	int i = 0;
	int indeks = 0;
	while (!feof(fp)) {
		dat[i] = malloc(1000 * sizeof(char));
		fgets(dat[i], 1000, fp);

		for (int j = 0; j < strlen(dat[i]); j++) {
			// printf("%c",dat[i][j] );
			if (dat[i][j] == c) {
				indeks = i;
				
				break;
			}
		}
		i++;
	}

	fputs(dat[indeks], fw);

	free(dat);
	fclose(fp);
	fclose(fw);


	return 0;
}