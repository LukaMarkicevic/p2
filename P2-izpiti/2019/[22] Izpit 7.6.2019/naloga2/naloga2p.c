#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"


Vozlisce* obrni(Vozlisce* zacetek) {
	Vozlisce* temp = zacetek;
	Vozlisce* temp2 = zacetek;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->naslednje;
	}
	Vozlisce** obrnuto = malloc(count * sizeof(Vozlisce*));

	for (int i = count - 1; i >= 0; i--) {
		obrnuto[i] = temp2;
		
		temp2 = temp2->naslednje;
	}
	
	obrnuto[count] = NULL;
	for (int i = 0; i <= count - 1; i++) {
		// printf("%d\n",obrnuto[i]->podatek);
		obrnuto[i]->naslednje = obrnuto[i + 1];
	}
	

	free(temp);
	free(temp2);

	return obrnuto[0];

}

int main() {
	
    return 0;
}
