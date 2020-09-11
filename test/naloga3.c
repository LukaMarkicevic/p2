#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	char** sveLinije = malloc(100 * sizeof(char*));
	int count = 0;

	while (!feof(fp)) {
		sveLinije[count] = malloc(100 * sizeof(char));
		fgets(sveLinije[count], 100, fp);
		count++;
	}

	for (int i = 0; i < count; i++) {

		for (int j = 0; j < strlen(sveLinije[i]); j++) {
			if (sveLinije[i][j] >= 'a' && sveLinije[i][j] <= 'z') {
				sveLinije[i][j] -= 32;
				continue;
			}
			if (sveLinije[i][j] >= 'A' && sveLinije[i][j] <= 'Z') {
				sveLinije[i][j] += 32;
				continue;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		fputs(sveLinije[i], fw);
	}

	free(sveLinije);
	fclose(fp);
	fclose(fw);

	return 0;
}
