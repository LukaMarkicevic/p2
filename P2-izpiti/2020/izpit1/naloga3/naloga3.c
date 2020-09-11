#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n;
int* arej;

void stampaj(int* arej) {

	printf("{");

	for (int i = 0; i < n; i++) {
		if (arej[i] != -1) {
			printf("%d, ", arej[i]);
		}
	}


	printf("}\n");

}

void rekurzija(int* arej, int indeks) {

	if (indeks == n) {
		stampaj(arej);
		return;
	}

	int* narej = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		narej[i] = arej[i];
	}
	narej[indeks] = -1;

	rekurzija(arej, indeks + 1);
	rekurzija(narej, indeks + 1);
	free(narej);
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
