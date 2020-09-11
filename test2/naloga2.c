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


int main() {
	Vozlisce* seznam = zgradi((int[]) {788, 2, 41, 32, -1});
	izpisi(seznam);
	return 0;
}
