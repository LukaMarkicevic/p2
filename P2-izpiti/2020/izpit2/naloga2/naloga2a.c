#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;

Vozlisce* izloci(Vozlisce* zac, Vozlisce* v) {
	Vozlisce* temp = zac;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->naslednje;
	}

	Vozlisce** vrni = malloc((count - 1) * sizeof(Vozlisce*));
	int z = 0;
	Vozlisce* temp2 = zac;
	for (int i = 0; i < count; i++) {
		if (temp2 != v) {
			vrni[z] = temp2;
			z++;
		}
		temp2 = temp2->naslednje;
	}
	// printf("%d\n", count);
	vrni[count - 1] = NULL;
	for (int i = 0; i < count - 1; i++) {
		vrni[i]->naslednje = vrni[i + 1];
	}

	return vrni[0];


}

int main() {

	Vozlisce** vrni = malloc(5 * sizeof(Vozlisce*));
	vrni[0] = malloc(sizeof(Vozlisce));
	vrni[1] = malloc(sizeof(Vozlisce));
	vrni[2] = malloc(sizeof(Vozlisce));
	vrni[3] = malloc(sizeof(Vozlisce));
	vrni[4] = malloc(sizeof(Vozlisce));

	vrni[0]->podatek = 2;
	vrni[1]->podatek = 3;
	vrni[2]->podatek = 4;
	vrni[3]->podatek = 5;
	vrni[4]->podatek = 6;

	vrni[0]->naslednje = vrni[1];
	vrni[1]->naslednje = vrni[2];
	vrni[2]->naslednje = vrni[3];
	vrni[3]->naslednje = vrni[4];
	vrni[4]->naslednje = NULL;

	Vozlisce* temp = izloci(vrni[0], vrni[2]);

	for (int i = 0; i < 4; i++) {
		printf("%d\n", temp->podatek);
		temp = temp->naslednje;
	}


	return 0;
}
