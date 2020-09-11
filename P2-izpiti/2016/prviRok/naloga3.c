#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int n;
int *arej;
int min = INT_MIN;
bool prvi = true;

int velicinaAreja(int* arej) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] != -99) {
			count++;
		}
	}
	return count;
}

void printArej(int *arej) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arej[i]);
	}
	printf("\n");
}

bool sviDeljivi(int* arej) {
	int cnt = velicinaAreja(arej);

	if (cnt == 0) {
		return false;
	}
	int* arej2 = malloc(cnt * sizeof(int));
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] != -99) {
			arej2[j] = arej[i];
			j++;
		}
	}


	for (int i = 1; i < cnt; i++) {
		// if (arej2[i] == 0 || arej2[i - 1] == 0) {
		// 	return false;
		// }
		if (arej2[i - 1] % arej2[i] != 0) {
			return false;
		}
	}
	free(arej2);
	return true;
}

//jank
void rekurzija(int *arej, int indeks) {
	if (indeks == n) {
		if (sviDeljivi(arej) && velicinaAreja(arej) > min) {
			min = velicinaAreja(arej);
		}
		return;
	}

	rekurzija(arej, indeks + 1);

	int *arej2 = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		arej2[i] = arej[i];
	}
	arej2[indeks] = -99;
	rekurzija(arej2, indeks + 1);

	free(arej2);
}

int main() {
	scanf("%d", &n);
	arej = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arej[i]);
	}

	//bubble sort
	int temp;
	for (int z = n - 2; z >= 0; z--) {
		for (int j = 0; j <= z; j++) {
			if (arej[j] < arej[j + 1]) {
				temp = arej[j];
				arej[j] = arej[j + 1];
				arej[j + 1] = temp;
			}
		}
	}


	rekurzija(arej, 0);
	free(arej);
	printf("%d\n", min);
}

// bez rekurzije
// int n, temp;
// scanf("%d", &n);
// int a[100];
// for (int i = 0; i < n; i++) {
// 	int z;
// 	scanf("%d", &z);
// 	a[i] = z;
// }
// //bubble sort

// for (int z = n - 2; z >= 0; z--) {
// 	for (int j = 0; j <= z; j++) {
// 		if (a[j] > a[j + 1]) {
// 			temp = a[j];
// 			a[j] = a[j + 1];
// 			a[j + 1] = temp;
// 		}
// 	}
// }
// int count = 0;
// int i;
// for ( i = 0; i < n; i++) {
// 	for (int j = i + 1; j < n; j++) {
// 		if (a[j] % a[i] == 0) {
// 			count++;
// 			i = j - 1;
// 			break;
// 		}

// 	}
// }
// printf("%d\n", count + 1);

// return 0;