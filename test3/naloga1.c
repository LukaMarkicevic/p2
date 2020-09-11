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

int main() {
	FILE* fp = fopen("vrba.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");

	int n = 3;
	int k = 3;
	char linija[1000];
	n--;
	while (n >= 0) {
		fgets(linija, 1000, fp);
		n--;
	}
	char* token = strtok(linija, " ");
	int rec = 0;
	while (token != NULL) {
		rec++;
		if (rec == k) {
			printf("%s\n", token);
			break;
		}
		token = strtok(NULL, " ");
	}



	fclose(fp);
	fclose(fw);

	return 0;
}
