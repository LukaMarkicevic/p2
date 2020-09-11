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
	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");

	
	fclose(fp);
	fclose(fw);

	return 0;
}
