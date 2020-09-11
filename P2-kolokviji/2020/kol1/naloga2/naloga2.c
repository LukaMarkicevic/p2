
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void pretvori(int** t) {
	int i = 0;
	while (t[i] != NULL) {
		int broj = -1;
		int* j = malloc(1001 * sizeof(int));
		int z = 0;
		while (broj != 0) {
			j[z] = t[i][z];
			broj = j[z];
			z++;
		}
		t[i] = j;
		i++;
	}
}

int main() {
	// koda za ro"cno testiranje (po "zelji)
	return 0;
}
