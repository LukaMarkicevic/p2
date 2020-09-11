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

	char prva[20];
	char druga[20];
	char car;

	scanf("%s\n", prva);
	scanf("%s\n", druga);
	scanf("%c", &car);

	FILE* fp = fopen(prva, "r");
	FILE* fw = fopen(druga, "w");
	printf("%d\n", duzina(fp));
	char linija[1000];
	char sacuvaj[1000];

	while (fgets(linija, 1000, fp) != NULL) {
		for (int i = 0; i < strlen(linija); i++) {
			if (linija[i] == car) {
				strcpy(sacuvaj, linija);
			}
		}
	}

	fputs(sacuvaj, fw);

	fclose(fp);
	fclose(fw);

	return 0;
}
