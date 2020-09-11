#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n, a, b;
int count;

bool proveri(int* arej) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arej[i] == arej[j]) {
				return false;
			}
			if (arej[j] >= n || arej[j] < 0) {
				return false;
			}
		}
	}
	return true;
}

int* napravi(int* arej, int ubaci, int fali) {
	int* vrni = malloc(n * sizeof(arej));

	for (int i = 0; i < n; i++) {
		vrni[i] = arej[i];
	}

	vrni[fali] = ubaci;
	return vrni;
}

void printArej(int* arej) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arej[i]);
	}
	printf("\n");
}


void rekurzija(int* arej, int broj, int k) {

	if (k > n) {
		if (proveri(arej)) {
			// printArej(arej);
			count++;
		}
		return;
	}

	int* arej2 = napravi(arej, broj, k);

	rekurzija(arej2, broj + a, k + 1);
	rekurzija(arej2, broj + b, k + 1);
	rekurzija(arej2, broj - a, k + 1);
	rekurzija(arej2, broj - b, k + 1);
	free(arej2);
}


int main() {

	scanf("%d%d%d", &n, &a, &b);
	int* plz = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		plz[i] = 0;
	}

	rekurzija(plz, 0, 0);

	printf("%d\n", count / 16);
	free(plz);
	return 0;
}
