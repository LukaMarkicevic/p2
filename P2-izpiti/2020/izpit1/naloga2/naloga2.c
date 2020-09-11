#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;


Vozlisce* prepisi(int* t) {

	int z = 0, count = 0;
	while (t[z] != 0) {
		count++;
		z++;
	}
	if (count == 0) {
		return NULL;
	}

	Vozlisce** vrni = malloc(count * sizeof(Vozlisce*));

	for (int i = 0; i < count; i++) {
		vrni[i] = malloc(sizeof(Vozlisce));
		vrni[i]->podatek = t[i];
	}
	vrni[count] = NULL;
	for (int i = 0; i < count; i++) {
		vrni[i]->naslednje = vrni[i + 1];
	}

	return vrni[0];
}


int main() {

	int* t = malloc(5 * sizeof(int));
	t[0] = 1;
	t[1] = 2;
	t[2] = 6;
	t[3] = 4;
	t[4] = 0;
	Vozlisce* temp = prepisi(t);
	for (int i = 0; i < 4; i++) {
		printf("%d\n", temp->podatek);
		temp = temp->naslednje;
	}

	return 0;
}
