#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int a, i = 0;
	int* arej = malloc(100 * sizeof(int));
	while ((scanf("%d ", &a)) != EOF) {
		arej[i++] = a;
	}

	for (int j = 0; j < i; j++) {
		printf("%d\n", arej[j]);
	}

	return 0;
}
