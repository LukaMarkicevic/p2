#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	char vhod[20];
	int n;
	char izhod[20];

	scanf("%s", vhod);
	scanf("%d", &n);
	scanf("%s", izhod);

	FILE* fp = fopen(vhod, "rb");
	FILE* fw = fopen(izhod, "w");

	unsigned char* dato = malloc(n * sizeof(char));

	fread(dato, n * sizeof(char), sizeof(char), fp);

	for (int i = 0; i < n; i++) {
		printf("%02X\n", dato[i]);
	}

	free(dato);
	fclose(fp);
	fclose(fw);

	return 0;
}
