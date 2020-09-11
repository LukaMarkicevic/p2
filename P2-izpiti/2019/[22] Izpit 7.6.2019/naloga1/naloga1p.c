#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	char imeVho[21];
	char imeIzh[21];
	char n;

	scanf("%s\n", imeVho);
	scanf("%s\n", imeIzh);
	scanf("%c", &n);

	FILE* fp = fopen(imeVho, "r");
	FILE* fw = fopen(imeIzh, "w");

	char* vrstica = malloc(1001 * sizeof(char));
	char* poslednja = malloc(1001 * sizeof(char));
	while (!feof(fp)) {
		fgets(vrstica, 1001, fp);
		for (int i = 0; i < strlen(vrstica); i++) {
			if (vrstica[i] == n) {
				strcpy(poslednja, vrstica);
				break;
			}
		}
	}

	fputs(poslednja, fw);

	free(vrstica);
	free(poslednja);
	fclose(fp);
	fclose(fw);

	return 0;
}
