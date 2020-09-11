#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n;
int* arej;


void rekruzija(int indeks, int nivo) {
	if (nivo > n) {
		return;
	}
	printf("%d", arej[indeks]);
	rekruzija(2 * indeks + 1, nivo + 1);
	rekruzija(2 * indeks + 2, nivo + 1);
}


int main() {
	scanf("%d", &n);
	int brojEle = 1;
	int temp = n;
	while (temp != 0) {
		brojEle *= 2;
		temp--;
	}
	brojEle--;
	arej = malloc(brojEle * sizeof(int));
	for (int i = 0; i < brojEle; i++) {
		scanf("%d", &arej[i]);
	}
	rekruzija(0, 1);
	printf("\n");
	free(arej);
	return 0;
}
