
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
int steviloInKta(char* niz, int k, int* indeks) {
	int count = 0;

	for (int i = 0;  i < (sizeof(niz) / sizeof(niz[0])) - 1; i++) {
		if (niz[i] >= 'A' && niz[i] <= 'Z') {
			count++;
			if (count == k) {
				*indeks = i;
			}
		}
	}
	if (count < k) {
		*indeks = -1;
	}
	return count;
}

void indeksi(char* niz, int** t) {
	// int *tabela = malloc(1000 * sizeof(char));
	// int *z = (int *)((&niz + 1) - 1);
	// for (int i = *z; niz[i] != NULL; i--) {
	// 	if (niz[i] >= 'A' && niz[i] <= 'Z') {
	// 		tabela[i] = i;
	// 	}
	// }
	// tabela[*z + 1] = -1;
	// *t = tabela;
}

char** zadnje(char** nizi) {
	// popravite oz. dopolnite / modify and/or add ...
	return NULL;
}

int main() {
	// po "zelji dodajte kodo za ro"cno testiranje ...
	// add manual testing code if desired ...
	return 0;
}
