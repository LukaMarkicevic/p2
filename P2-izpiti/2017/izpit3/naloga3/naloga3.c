#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int unique_elements(int* arr, int len) {

	int counted[len], j, n, count, flag;

	counted[0] = arr[0];

	count = 1;/*one element is counted*/

	for (j = 0; j <= len - 1; ++j) {
		flag = 1;;
		/*the counted array will always have 'count' elements*/
		for (n = 0; n < count; ++n) {
			if (arr[j] == counted[n]) {
				flag = 0;
			}
		}
		if (flag == 1) {
			++count;
			counted[count - 1] = arr[j];
		}
	}
	return count;
}


int main() {

	char* imeDatoteke = malloc(21 * sizeof(char));

	scanf("%s", imeDatoteke);

	FILE* fp = fopen(imeDatoteke, "rb");

	//P6
	char* Pnepo = malloc(10 * sizeof(char));
	fgets(Pnepo, 10, fp);

	int sirina, visina;

	fscanf(fp, "%d %d", &sirina, &visina);
	fgets(Pnepo, 10, fp); // AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAa ova glupost
	//255
	fgets(Pnepo, 10, fp);

	unsigned char* niz = malloc(3 * sirina * visina * sizeof(unsigned char));

	fread(niz, sizeof(unsigned char), 3 * sirina * visina, fp);




	// unsigned char* RED = malloc(sirina * visina * sizeof(char));
	// unsigned char* GRE = malloc(sirina * visina * sizeof(char));
	// unsigned char* BLU = malloc(sirina * visina * sizeof(char));

	int* RGB = malloc(sirina * visina * sizeof(char));
	int j = 0;
	for (int i = 0; i < 3 * sirina * visina; i = i + 3) {
		RGB[j] = (niz[i]+niz[i+1]+niz[i+2])*niz[i]-niz[i+1]+(niz[i]+niz[i+2]);
		// printf("%d\n", RGB[j]);
		j++;
	}

	int broj = 0;
	int maksimalni = 0;

	for (int n = 0; n < sirina * visina; n++) {
		broj = 0;
		for (int k = 0; k < sirina * visina; k++) {


			if (RGB[n] == RGB[k]) {
				broj++;
			}


		}

		if (broj > maksimalni) {
			maksimalni = broj;
		}
	}


	printf("%d\n", unique_elements(RGB, sirina * visina));
	printf("%d\n", maksimalni);

	return 0;
}