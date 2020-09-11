#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga2.h"

Vozlisce* obrni(Vozlisce* zacetek) {

	Vozlisce* temp2 = zacetek;
	int count = 0;
	while (temp2 != NULL) {
		count++;
		temp2 = temp2->naslednje;
	}

	Vozlisce** vrni = malloc(count * sizeof(Vozlisce*));

	Vozlisce* temp = zacetek;
	
	
	for (int i = count - 1; i >= 0; i--) {
		vrni[i] = temp;
		temp = temp->naslednje;
	}
	vrni[count]=NULL;
	for (int i = 0; i < count; i++) {
		vrni[i]->naslednje = vrni[i + 1];
	}
	

	free(temp2);
	free(temp);

	return vrni[0];
}

int main() {

	return 0;
}
