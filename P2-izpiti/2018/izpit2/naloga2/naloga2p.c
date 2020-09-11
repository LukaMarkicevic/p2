#include <stdio.h>

#include "naloga2.h"

Vozlisce* vstaviUrejeno(Vozlisce* zacetek, int element) {

	Vozlisce* voz = malloc(sizeof(Vozlisce));
	voz->podatek = element;

	// ce je prazen
	if (zacetek == NULL) {
		voz->n = NULL;
		voz->nn = NULL;
		return voz;
	}
	// ce je na zacetku
	if (element < zacetek->podatek) {
		voz->n = zacetek;
		voz->nn = zacetek->n;
		return voz;
	}

	// ce je normalno
	Vozlisce* t1 = zacetek;
	Vozlisce* t2 = zacetek->n;
	Vozlisce* t3 = zacetek->nn;
	while (t3 != NULL) {
		if (element < t3->podatek) {
			voz->n = t3;
			voz->nn = t3->n;
			t2->n = voz;
			t2->nn = t3;
			t1->nn = voz;
			return zacetek;
		}
		if (element < t2->podatek) {
			voz->n = t2;
			voz->nn = t3;
			t1->n = voz;
			t1->nn = t2;
			return zacetek;
		}
		t1 = t1->n;
		t2 = t2->n;
		t3 = t3->n;
	}

	

	while (t2 != NULL) {
		if (element < t2->podatek) {
			voz->n = t2;
			voz->nn = t3;
			t1->n = voz;
			t1->nn = t2;
			return zacetek;
		}
		t1 = t1->n;
		t2 = t2->n;
		t3 = t3->n;
	}

	t1->n = voz;
	t1->nn = NULL;
	voz->n = NULL;
	voz->nn = NULL;
	return zacetek;


}


int main() {
	return 0;
}