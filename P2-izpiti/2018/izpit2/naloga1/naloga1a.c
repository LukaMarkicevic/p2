#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d ", &n);
	char arej[n];
	for (int i = 0; i < n; i++) {
		scanf("%c", &arej[i]);
	}
	bool prvi = false;
	int stPlus = 0;
	int stMinus = 0;
	for (int i = 0; i < n; i++) {

		if (arej[i] == '+') {
			prvi = true;
			stPlus++;
			continue;
		}
		if (prvi) {
			stMinus++;
		}

	}



	int oduzmi = 0;

	for (int i = n - 1; i >= 0; i--) {
		if (arej[i] == '+') {
			break;
		}
		oduzmi++;
	}

	stMinus -= oduzmi;
	stPlus--;
	stMinus += stPlus;
	printf("%d\n", stMinus / stPlus);
	return 0;
}
