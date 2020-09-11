#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int v;
int n;
int* cene;

int max = -1;

int nadjiProstor(int* arej) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] != -1) {
			sum += arej[i];
		}
	}
	return sum;
}

int nadjiCenu(int* arej) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] != -1) {
			sum += cene[i];
		}
	}
	return sum;
}

bool proveri(int* arej) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] != -1) {
			if (arej[i] % 2 != 0) {
				count++;
			}
		}
		if (count > 1) {
			return false;
		}
	}

	return true;
}

int* namesti(int* arej) {
	int* temp = malloc(sizeof(int));

	for (int i = 0; i < n; i++) {
		temp[i] = arej[i];
	}

	return temp;
}

void printArej(int* arej) {
	for (int i = 0; i < n; i++) {
		if (arej[i] != -1) {
			printf("%d ", arej[i]);
		}

	}
	printf("\n");

}


void rekurzija(int* arej, int indeks, int prostor) {

	if (indeks == n) {
		if (nadjiCenu(arej) > max && prostor <= v && proveri(arej)) {
			max = nadjiCenu(arej);
		}
		return;
	}

	int* temp = namesti(arej);
	rekurzija(temp, indeks + 1, nadjiProstor(temp));
	temp[indeks] = -1;
	rekurzija(temp, indeks + 1, nadjiProstor(temp));

}

int main() {

	scanf("%d %d", &v, &n);


	int* prostornina = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &prostornina[i]);
	}
	cene = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &cene[i]);
	}

	rekurzija(prostornina, 0, 0);

	printf("%d\n", max);

	return 0;
}
