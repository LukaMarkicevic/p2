#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

Vozlisce* zdesetkaj(Vozlisce* zacetek, int k) {
	int count = 0;
	Vozlisce** sacuvana = malloc(1001 * sizeof(Vozlisce));
	Vozlisce* voz = zacetek;
	int i = 0;
	while (voz != NULL) {
		count++;
		if (count % k == 0) {
			sacuvana[i] = voz;
			i++;
		}
		voz = voz->naslednje;

	}
	for (int i = 0; i < 1001; i++) {
		if (sacuvana[i] != NULL) {
			sacuvana[i]->naslednje = sacuvana[i + 1];
		}
	}
	zacetek = sacuvana[0];
	return zacetek;
}


int main() {
	return 0;
}
