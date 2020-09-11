#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga2.h"

void uredi(Oseba** osebe, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {

			int uslov = strcmp(osebe[i]->ime, osebe[j]->ime);
			
			Oseba* a = osebe[i];
			Oseba* b = osebe[j];
			if (uslov > 0) {
				osebe[i] = b;
				osebe[j] = a;
			}
		}
	}
}

int main() {
	return 0;
}


