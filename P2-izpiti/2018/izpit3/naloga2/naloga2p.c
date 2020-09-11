#include <stdio.h>
#include "naloga2.h"



Vozlisce* odstrani(Vozlisce* osnova, Vozlisce* indeksi) {

	int count = 0;
	Vozlisce* temp = indeksi;

	while (temp != NULL) {
		count++;
		temp = temp->naslednje;
	}

	int* indeks = malloc(count * sizeof(int));

	for (int i = 0; i < count; i++) {
		indeks[i] = indeksi->podatek;

		indeksi = indeksi->naslednje;
	}
	Vozlisce* temp2 = osnova;
	int counter = 0;
	int z = 0;
	bool moze;
	Vozlisce** vrati = malloc(100 * sizeof(Vozlisce*));
	while (temp2 != NULL) {
		moze = true;
		for (int i = 0; i < count; i++) {
			if (indeks[i] == counter) {
				moze = false;
				break;
			}
		}
		if (moze) {
			vrati[z] = temp2;
			z++;
		}

		counter++;
		temp2 = temp2->naslednje;
	}
	vrati[z] = NULL;
	// printf("%d\n", vrati[0]->podatek);
	for (int i = 0; i < z; i++) {
		vrati[i]->naslednje = vrati[i + 1];
	}

	// free(osnova);
	free(temp2);
	free(indeksi);
	free(temp);
	free(indeks);
	

	return vrati[0];
}

int main() {
	
	return 0;
}