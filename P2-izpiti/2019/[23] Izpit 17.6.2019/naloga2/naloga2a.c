#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga2.h"

void uredi(Oseba** osebe, int n) {

	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {


			if (strcmp(osebe[i]->ime, osebe[j]->ime) > 0) {
				Oseba* temp = osebe[i];
				osebe[i] = osebe[j];
				osebe[j] = temp;
			}

		}

	}

}

int main() {

	return 0;
}
