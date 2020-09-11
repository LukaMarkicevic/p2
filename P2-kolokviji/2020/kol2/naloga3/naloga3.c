
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int n;
int koren;
int* tab;
int z;
int indeks;
int* vrni;
int j;


void rekurzija(int element, int drvo, int indeks) {

	if (indeks == z) {
		return;
	}
	if (element == n) {
		vrni[j] = element;
		return;
	}
	indeks++;
	vrni[j]=element;
	
	rekurzija(tab[indeks], tab[indeks + 1], indeks);

}

int main() {
	n = scanf("%d", &n);
	tab = malloc(100 * sizeof(int));
	vrni = malloc(100 * sizeof(int));

	while (scanf("%d", &tab[z]) != EOF) {
		z++;
	}

	for (int i = 0; i < 100; i++) {
		vrni[i] = -99;
	}

	rekurzija(tab[0], tab[1], indeks);

	for (int i = 0; i < 100; i++) {
		if (vrni[i] != -99) {
			printf("%d\n", vrni[i]);
		} else {
			break;
		}
	}

	free(tab);
	free(vrni);


	return 0;
}
