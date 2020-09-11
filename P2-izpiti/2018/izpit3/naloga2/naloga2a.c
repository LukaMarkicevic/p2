#include "naloga2.h"

//
Vozlisce* v(int podatek, Vozlisce* naslednje) {
	Vozlisce* vozlisce = malloc(sizeof(Vozlisce));
	vozlisce->podatek = podatek;
	vozlisce->naslednje = naslednje;
	return vozlisce;
}

void izpisi(Vozlisce* zacetek) {
	Vozlisce* p = zacetek;
	printf("[");
	while (p != NULL) {
		if (p != zacetek) {
			printf(", ");
		}
		printf("%d", p->podatek);
		p = p->naslednje;
	}
	printf("]\n");
}

void pocisti(Vozlisce* zacetek) {
	if (zacetek != NULL) {
		pocisti(zacetek->naslednje);
		free(zacetek);
	}
}

Vozlisce* zgradiOsnovo() {
	return v(30, v(40, v(20, v(50, NULL))));
}

Vozlisce* zgradiIndekse() {
	return v(1, NULL);
}
//

Vozlisce* odstrani(Vozlisce* osnova, Vozlisce* indeksi) {

	Vozlisce* temp = indeksi;
	int count = 0;

	while (temp != NULL) {
		count++;
		temp = temp->naslednje;
	}

	int* indeks = malloc(count * sizeof(int));
	Vozlisce* temp2 = indeksi;
	int z = 0;
	while (temp2 != NULL) {
		indeks[z] = temp2->podatek;
		temp2 = temp2->naslednje;
		z++;
	}

	Vozlisce* temp3 = osnova;

	int w = 0;

	int kaunt = 0;

	while (temp3 != NULL) {
		kaunt++;
		temp3 = temp3->naslednje;
	}
	int global = 0;
	Vozlisce* temp4 = osnova;
	printf("%d\n", kaunt - count);
	Vozlisce** vrni = malloc((kaunt - count) * sizeof(Vozlisce));
	while (temp4 != NULL) {
		bool jeste = false;
		for (int i = 0; i < count; i++) {
			if (indeks[i] == global) {
				jeste = true;
				break;
			}
		}

		if (!jeste) {
			vrni[w] = temp4;
			w++;
		}
		global++;
		temp4 = temp4->naslednje;
	}
	vrni[w] = NULL;
	for (int i = 0; i < kaunt - count; i++) {
		vrni[i]->naslednje = vrni[i + 1];
	}
	free(temp2);
	free(indeksi);
	free(temp);
	free(indeks);

	return vrni[0];

}

int main() {
	Vozlisce* osnova = zgradiOsnovo();
	Vozlisce* indeksi = zgradiIndekse();
	Vozlisce* rezultat = odstrani(osnova, indeksi);

	izpisi(rezultat);

	pocisti(indeksi);
	pocisti(rezultat);

	exit(0);
	return 0;
}
