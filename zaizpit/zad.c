#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// int n;
// char** sve;

// void printArej(char* arej) {
// 	int i = 0;
// 	while (arej[i] != '-') {
// 		printf("%c", arej[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// char* namesti(char* arej) {
// 	char* arej2 = malloc(42 * sizeof(char));
// 	int i = 0;
// 	int cifra = 0;
// 	while (arej[i] != '\0') {
// 		arej2[i] = arej[i];
// 		i++;
// 	}
// 	return arej2;
// }

// int nadjiInd(char* arej) {
// 	int cifra = 0;
// 	while (arej[cifra] != '-') {
// 		cifra++;
// 	}
// 	return cifra;
// }

// void rekurzija(int nivo, int index, char* arej) {





// 	if (nivo == n) {
// 		printArej(arej);
// 		return;
// 	}
// 	if (sve[nivo][index] == '\0') {
// 		return;
// 	}

// 	char* arej2 = namesti(arej);
// 	int cifra = nadjiInd(arej2);
// 	arej2[cifra] = sve[nivo][index];
// 	rekurzija(nivo + 1, index, arej2);

// 	arej2[cifra] = sve[nivo][index + 1];
// 	rekurzija(nivo + 1, index + 1, arej2);


// 	rekurzija(nivo, index + 1, arej2);

// }


int main() {

	scanf("%d", &n);
	sve = malloc(n * sizeof(char*));

	for (int i = 0; i < n; i++) {
		sve[i] = malloc(sizeof(char));
		scanf("%s", sve[i]);
	}
	int brojMogucih = 1;
	for (int i = 1; i < n; i++) {
		brojMogucih *= strlen(sve[i]);
	}

	for (int i = 0; i < brojMogucih * (n - 1); i++) {
		for (int z = 0; z < n; i++) {
			printf("%c", sve[z][j]);

		}
		printf("\n");
	}
}






// char* linija = malloc(42 * sizeof(char));
// for (int i = 0; i < 42; i++) {
// 	linija[i] = '-';
// }

// rekurzija(0, 0, linija);

return 0;
}
