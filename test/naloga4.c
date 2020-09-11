#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	FILE* fp1 = fopen("vhod1.txt", "r");
	FILE* fp2 = fopen("vhod2.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	char** sveLinije1 = malloc(100 * sizeof(char*));
	char** sveLinije2 = malloc(100 * sizeof(char*));
	int count1 = 0;
	int count2 = 0;

	while (!feof(fp1)) {
		sveLinije1[count1] = malloc(100 * sizeof(char));
		fgets(sveLinije1[count1], 100, fp1);
		count1++;
	}
	while (!feof(fp2)) {
		sveLinije2[count2] = malloc(100 * sizeof(char));
		fgets(sveLinije2[count2], 100, fp2);
		count2++;
	}

	for (int i = 0; i < count1 + count2; i++) {

		if (sveLinije1[i] != NULL) {
			fputs(sveLinije1[i], fw);
		}
		if (sveLinije2[i] != NULL) {
			fputs(sveLinije2[i], fw);
		}

	}


	free(sveLinije1);
	free(sveLinije2);
	fclose(fp1);
	fclose(fp2);
	fclose(fw);
	return 0;
}
