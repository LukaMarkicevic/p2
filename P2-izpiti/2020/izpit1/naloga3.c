#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;
int* arej;

void printArray(int* arej) {
	bool moraovako = false;
	printf("{");
	if (arej[0] != -999) {
		moraovako = true;
		printf("%d", arej[0]);
	}
	for (int i = 1; i < n; i++) {
		if (arej[i] != -999) {
			if (moraovako) {
				printf(", ");
			}
			moraovako = true;
			printf("%d", arej[i]);
		}
	}
	printf("}");
	printf("\n");

}

void rekurzija(int* arej, int indeks) {
	if (indeks == n) {
		printArray(arej);
		return;
	}
	rekurzija(arej, indeks + 1);
	int* arej2 = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arej2[i] = arej[i];
	}
	arej2[indeks] = -999;
	rekurzija(arej2, indeks + 1);

	free(arej2);
}




int main() {

	scanf("%d", &n);
	arej = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arej[i]);
	}

	rekurzija(arej, 0);

	free(arej);
	return 0;
}