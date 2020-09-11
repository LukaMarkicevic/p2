#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main()
{

	char* niz = malloc(10000001 * sizeof(int));
	int* brojevi = malloc(10000001 * sizeof(int));
	fgets(niz, 10000001, stdin);

	char* newString;
	newString = strtok(niz, " ");
	int i = 0;
	while (newString != NULL)
	{
		brojevi[i] = atoi(newString);
		newString = strtok(NULL, " ");
		i++;
	}
	int veci;
	int manji;
	bool veciB, manjiB;
	for (int j = 0; j < i; j++) {
		veciB = false;
		manjiB = false;
		while (brojevi[j] > 0) {
			veci = brojevi[j];
			veciB = true;
			if (brojevi[j + 1] < 0) {break;}
			j++;
		}
		if (veciB) {
			printf("%d\n", veci);
			continue;
		}
		while (brojevi[j] < 0) {
			manji = brojevi[j];
			manjiB = true;
			if (brojevi[j + 1] > 0) {break;}
			j++;
		}
		if (manjiB) {
			printf("%d\n", manji);
			continue;
		}
	}

	return 0;
}