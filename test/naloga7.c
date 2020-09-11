#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n;
int* arej;

void printArej(int* arej) {
	printf("{");
	for (int i = 0; i < n; i++) {

		if (arej[i] != -1) {
			printf("%d", arej[i]);
			if (i + 1 == n) {
				break;
			}
			if (arej[i + 1] != -1) {
				if (arej[i + 2] != -1) {
					if (i + 1 == n) {
						printf(", ");
						break;
					}
				}
			printf(", ");	
			}



		}

	}
	printf("}");
	printf("\n");
}

int* kopiraj(int* arej) {
	int* kopija = malloc(n * sizeof(arej));

	for (int i = 0; i < n; i++) {
		kopija[i] = arej[i];
	}
	return kopija;
}

void rekurzija(int index, int* arej) {

	if (index == n) {
		printArej(arej);
		return;
	}

	rekurzija(index + 1, arej);
	int* arej2 = kopiraj(arej);
	arej2[index] = -1;
	rekurzija(index + 1, arej2);
	free(arej2);
}


int main() {

	scanf("%d\n", &n);
	arej = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arej[i]);
	}
	rekurzija(0, arej);
	free(arej);
	return 0;
}
