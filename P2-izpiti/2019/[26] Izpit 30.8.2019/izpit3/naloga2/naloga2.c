#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d", &n);
	char red[n];
	scanf("%s", red);

	int max = 0;
	int zamax = -1;
	for (int i = 0; i < n; i++) {
		if (red[i] == 'G') {
			max++;
		}
		if (red[i] == 'D') {
			max--;
		}
		if (max > zamax) {
			zamax = max;
		}
	}
	// printf("%d\n", zamax);

	for (int i = zamax; i >= 1; i--) {
		int trenutno = 0;

		for (int j = 0; j < n; j++) {
			if (red[j] == 'G') {
				trenutno++;
				if (trenutno == i) {
					printf("%c", '/');
					continue;
				}
			}
			if (red[j] == 'D') {
				trenutno--;
				if (trenutno+1 == i) {
					printf("%c", '\\');
					continue;
				}
			}



			printf("%c", '.');

		}


		printf("\n");
	}



	return 0;
}
