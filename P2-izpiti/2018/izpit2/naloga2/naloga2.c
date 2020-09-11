
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

Vozlisce* vstaviUrejeno(Vozlisce* zacetek, int element) {
	Vozlisce* voz = malloc(sizeof(Vozlisce));
	voz->podatek = element;

	if (zacetek == NULL) {
		voz->n = zacetek;
		voz->nn = NULL;
		return voz;
	}
	Vozlisce* asd = zacetek->nn;
	Vozlisce* p = zacetek->n;
	Vozlisce * pp = zacetek;
	if (asd == NULL) {
		if (element < pp->podatek) {
			voz->n = pp;
			voz->nn = p;
			return voz;
		}
		if (element < p->podatek) {
			voz->n = p;
			voz->nn = asd;
			pp->n = voz;
			pp->nn = voz->n;
			return pp;
		}
		voz->n = NULL;
		voz->nn = NULL;
		p->n = voz;
		p->nn = NULL;
		pp->nn = voz;
		pp->n=p;
		return pp;
	}

	while (asd != NULL) {


		if (element < pp->podatek) {
			voz->n = pp;
			voz->nn = p;
			return voz;
		}
		if (element < p->podatek) {
			voz->n = p;
			voz->nn = asd;
			pp->n = voz;
			pp->nn = voz->n;
			return pp;
		}
		if (element < asd->podatek) {
			voz->n = asd;
			voz->nn = asd->n;
			p->n = voz;
			p->nn = voz->n;
			pp->nn = voz;
			return zacetek;
		}
		pp = p;
		p = asd;
		asd = asd->n;
	}
	voz->n = NULL;
	voz->nn = NULL;
	p->n = voz;
	p->nn = NULL;
	pp->nn = voz;
	return zacetek;
}

int main() {
	
    return 0;
}

