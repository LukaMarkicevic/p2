#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;

Vozlisce* izloci(Vozlisce* zac, Vozlisce* v) {

	Vozlisce* temp = zac;
	Vozlisce* temp2 = zac->naslednje;

	// ce je v na zacetku
	if (temp == v) {
		return temp2;
	}

	// ce ni na zacetku
	while (temp2 != NULL) {

		if (temp2 == v) {
			temp->naslednje = temp2->naslednje; // preskocimo
			free(v);
			break;
		}

		temp2 = temp2->naslednje;
	}

	return zac;

}

int main() {return 0;}

