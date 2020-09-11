#include "naloga2.h"

Vozlisce* vstaviUrejeno(Vozlisce* zacetek, int element) {

	Vozlisce* voz = malloc(sizeof(Vozlisce));
	voz->podatek = element;

	Vozlisce* temp = zacetek;
	Vozlisce* temp2 = zacetek->n;
	Vozlisce* temp3 = zacetek->nn;

	while (temp != NULL) {

		if (element < temp->podatek) {
			voz->n = temp;
			voz->nn = temp2;
			return voz;
		}

		if (element < temp2->podatek) {
			voz->n = temp2;
			voz->nn = temp3;
			temp->n = voz;
			temp->nn = temp2;
			return zacetek;
		}
		if (element < temp3->podatek) {
			voz->n = temp3;
			voz->nn = temp3->n;
			temp2->n = voz;
			temp2->nn = temp3;
			temp->nn = voz;
			return zacetek;
		}


		temp = temp->n;
		temp2 = temp2->n;
		temp3 = temp3->n;
	}
	voz->n = NULL;
	voz->nn = NULL;
	temp3->n = voz;
	temp3->nn = NULL;
	temp2->nn = voz;
	return zacetek;

}

int main() {

	return 0;
}
