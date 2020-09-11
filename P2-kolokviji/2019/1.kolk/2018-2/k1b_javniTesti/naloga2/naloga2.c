
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga2.h"

/*
 * Testni primeri J1--J2 in S1--S10 testirajo rezultat funkcije.
 * Testni primeri J3--J4 in S11--S20 testirajo vrednost spremenljivke, na
 *     katero ka"ze kazalec <indeks>.
 *
 * Test cases J1--J2 and S1--S10 check the result of the function.
 * Test cases J3--J4 and S11--S20 check the value of the variable pointed to
 *     by <indeks>.
 */

int pojavitve(char* niz, char c, int* indeks) {
	bool prvi = false, pojavio = false;
	int steviloPojavitvi = 0;
	for (int i = 0; niz[i] != NULL; i++) {
		if (niz[i] == c) {
			steviloPojavitvi++;
			if (!prvi) {
				prvi = true;
				*indeks = i;
			}
			pojavio = true;
		}
	}
	if (!pojavio) {
		*indeks = -1;
	}
	return steviloPojavitvi;
}

void naslednjaPojavitev(char* niz, int* indeks) {
	bool pojavio = false;
	char c = niz[*indeks];
	for (int i = *indeks + 1; niz[i] != NULL; i++) {
		if (niz[i] == c && !pojavio) {
			*indeks = i;
			pojavio = true;
		}
	}
	if (!pojavio) {
		*indeks = -1;
	}

}

char* kopijaPodniza(char* niz, char c, int k) {
	// char *tabela;
	char *tabela=(char *)malloc(10*sizeof(char));
	int pojavio = 0, brojac = 0;
	bool ka = false;
	for (int i = 0; niz[i] != NULL; i++) {
		if (niz[i] == c) {
			pojavio++;
		}
		if (pojavio == k) {
			ka = true;
			continue;
		}
		if (pojavio == k + 1) {
			ka = false;
		}
		if (ka) {
			tabela[brojac] = niz[i];
			brojac++;
		}
	}
	return tabela;
}

int main() {
	return 0;
	//git ssh
}
