
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

Vozlisce* izloci(Vozlisce* voz) {
	Vozlisce* temp = voz->naslednje;
	return temp;
}

Vozlisce* zdesetkaj(Vozlisce* zacetek, int k) {
	int stevec = 1;
	Vozlisce* vrni = NULL;
	bool prvoVozliscne = true;

	while (zacetek != NULL) {
		if (stevec == k && prvoVozliscne) {
			vrni = zacetek;
			prvoVozliscne = false;
			vrni->naslednje = zdesetkaj(zacetek->naslednje, k);
		} else {
			zacetek = izloci(zacetek);
		}
		stevec++;
	}

	return vrni;

}

int main() {
	return 0;
}
