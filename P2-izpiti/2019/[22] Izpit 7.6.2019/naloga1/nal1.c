#include <stdlib.h>
#include <stdio.h>
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

	FILE* vhod = fopen("vhod.txt", "r");
	FILE* izhod = fopen("izhod.txt", "w");



	fclose(vhod);
	fclose(izhod);

	return 0;
}