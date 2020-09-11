#include <stdio.h>
#include <stdlib.h>

int main() {
	int *a = NULL;
	int *b = NULL;
	int n, maxdolzina = -1000000;
	scanf("%d", &n);
	a = malloc(n * sizeof(int));
	b = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		int z;
		scanf("%d", &z);
		a[i] = z;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j] && (j - i) > maxdolzina) {
				maxdolzina = j - i;
			}
		}
	}
	int test = 0, y = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((j - i) == maxdolzina) {
				if (test + 1 > y) {
					y += n * 2;
					int *tmp;
					tmp = realloc(b, y * sizeof(int));
					b = tmp;
				}
				b[test] = a[i];
				test++;
			}
		}
	}
	printf("%d\n", maxdolzina);
	for (int i = 0; i < test; i++) {
		//printf("%s","----------------");
		printf("%d\n", b[i]);
	}

	free(a);
	free(b);




	return 0;
}

