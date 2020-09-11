
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	char vhod[21];
	char izhod[21];
	int n;

	scanf("%s\n", vhod);
	scanf("%d\n", &n);
	scanf("%s", izhod);

	FILE* fp = fopen(vhod, "rb");
	FILE* fw = fopen(izhod, "w");

	char brojevi;

	for (int i = 0; i < n; i++) {
		brojevi = fgetc(fp);
		fprintf(fw, "%X\n", brojevi);
	}


	fclose(fp);
	fclose(fw);


	return 0;
}
