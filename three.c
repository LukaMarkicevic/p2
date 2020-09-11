#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;

//
Vozlisce* zgradi(int* t) {
	if (*t <= 0) {
		return NULL;
	}
	Vozlisce* v = malloc(sizeof(Vozlisce));
	v->podatek = *t;
	v->naslednje = zgradi(t + 1);
	return v;
}

void izpisi(Vozlisce* zacetek) {
	printf("[");
	for (Vozlisce* p = zacetek;  p != NULL;  p = p->naslednje) {
		if (p != zacetek) {
			printf(", ");
		}
		printf("%d", p->podatek);
	}
	printf("]\n");
}

int duzina(Vozlisce* zacetek) {
	int count = 0;
	while (zacetek != NULL) {
		count++;
		zacetek = zacetek->naslednje;
	}

	return count;
}

//

Vozlisce* izloci(Vozlisce* zac, Vozlisce* v) {
	Vozlisce* temp2 = zac;
	int duz = duzina(temp2);
	Vozlisce** vrni = malloc(duz * sizeof(Vozlisce*));
	Vozlisce* temp = zac;
	int i = 0;
	while (temp != NULL) {
		if (temp != v) {
			vrni[i] = temp;
			i++;
		}
		temp = temp->naslednje;
	}

	vrni[i] = NULL;
	
	for (int j = 0; j < i; j++) {
		vrni[j]->naslednje = vrni[j + 1];
	}
	return vrni[0];
}

int main() {
	Vozlisce* seznam = zgradi((int[]) {788, 2, 41, 32, -1});
	Vozlisce* v = seznam;

	while (v->podatek != 32) {
		v = v->naslednje;
	}

	izpisi(seznam);
	Vozlisce* k = izloci(seznam, v);
	izpisi(k);

	return 0;
}
