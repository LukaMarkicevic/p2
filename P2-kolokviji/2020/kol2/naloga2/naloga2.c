
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"



int dolzina(Vozlisce* voz) {
	int broj = 0;
	while (voz->naslednje != NULL) {
		voz = voz->naslednje;
		broj++;
	}
	return broj;
}


Vozlisce* prepleti(Vozlisce** seznami, int n) {

	Vozlisce** novi = malloc(1000000 * sizeof(Vozlisce));
	int count=0;
	for (int i = 0; i < 1000000; i++) {
		for (int j = 0; j < n; j++) {
			if (seznami[j] == NULL || seznami[j]->podatek == -1) {
				continue;
			}
			Vozlisce* novo = malloc(sizeof(Vozlisce));
			novo->podatek = seznami[j]->podatek;
			seznami[j] = seznami[j]->naslednje;
			novo->naslednje = NULL;
			novi[count] = novo;
			count++;
		}
	}
	for (int i = 0; i < 1000000; i++) {
		if (novi[i + 1] != NULL) {
			novi[i]->naslednje = novi[i + 1];
		}
	}

	Vozlisce* pointer = novi[0];

	return pointer;
}

int main() {
	return 0;
}
