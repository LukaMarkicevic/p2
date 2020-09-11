#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;


Vozlisce* prepisi(int* t) {

	if (t[0] == 0) {
		return NULL;
	}

	int velikostTabele = 0;
	int z = 0;
	while (t[z] != 0) {
		velikostTabele++;
		z++;
	}

	Vozlisce** vrni = malloc(velikostTabele * sizeof(Vozlisce*));

	// printf("%d\n", velikostTabele);

	for (int i = 0; i < velikostTabele; i++) {
		vrni[i] = malloc(sizeof(Vozlisce));
		vrni[i]->podatek = t[i];
		vrni[i]->naslednje = NULL;
	}
	vrni[velikostTabele] = NULL;
	for (int j = 0; j < velikostTabele; j++) {
		vrni[j]->naslednje = vrni[j + 1];
	}

	return vrni[0];
}


int main() {

	int arej[] = {1, 2, 0, 3, 4, 5, 0};
	Vozlisce* voz = prepisi(arej);
	for (int i = 0; i < 2; i++) {
		printf("%d\n", voz->podatek);
		voz = voz->naslednje;
	}

	return 0;
}
