#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;

//

int duzina(Vozlisce* zacetek) {
	int count = 0;
	while (zacetek != NULL) {
		count++;
		zacetek = zacetek->naslednje;
	}
	return count;
}

//

Vozlisce* obrni(Vozlisce* zacetek) {

	int duzinas = duzina(zacetek);
	Vozlisce** vrni = malloc(duzinas * sizeof(Vozlisce*));
	Vozlisce** vrni2 = malloc(duzinas * sizeof(Vozlisce*));
	for (int i = 0; i < duzinas; i++) {
		vrni[i] = zacetek;
		zacetek = zacetek->naslednje;
	}


	for (int i = 0; i < duzinas; i++) {
		vrni2[i] = vrni[duzinas - i-1];
	}

	vrni2[duzinas] = NULL;
	for (int i = 0; i < duzinas; i++) {
		vrni2[i]->naslednje = vrni2[i+1];
	}
	
	

	return vrni2[0];
}

int main() {
	
	return 0;
}
