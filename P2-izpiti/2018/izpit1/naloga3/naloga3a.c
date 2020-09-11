#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

int n;
int* arej;
int max = INT_MAX;
int sum;

int razlika(int* arej) {
	int tsum = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] == -1) {
			continue;
		}
		tsum += arej[i];
	}
	return (sum - tsum - tsum) < 0 ? -(sum - tsum - tsum) : (sum - tsum - tsum);
}

void rekurzija(int* arej, int indeks) {

	if (indeks == n) {
		if (razlika(arej) < max) {
			max = razlika(arej);
		}
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
		sum += arej[i];
	}

	rekurzija(arej, 0);

	printf("%d\n", max);

	free(arej);

	return 0;
}
