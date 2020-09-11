#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n, k1, k2, s;
int count;
int* MEMO;
int i;

void rekurzija(int plos, int a) {
	bool mora = true;

	if (plos >= n || plos < 0 || a > s) {
		return;
	}
	for (int i = 0; i < 1000; i++) {
		if (MEMO[i] == plos) {
			mora = false;
		}
	}

	if (mora) {
		MEMO[i] = plos;
		i++;
	}


	rekurzija(plos + k1, a + 1);
	rekurzija(plos + k2, a + 1);
	rekurzija(plos - k1, a + 1);
	rekurzija(plos - k2, a + 1);

}


int main() {

	scanf("%d%d%d%d", &n, &k1, &k2, &s);
	MEMO = malloc(1000 * sizeof(int));
	for (int i = 0; i < 1000; i++) {
		MEMO[i] = -99;
	}
	rekurzija(0, 0);

	for (int i = 0; i < 1000; i++) {
		if (MEMO[i] == -99) {
			break;
		}
		count++;
	}
	free(MEMO);
	printf("%d\n", count);

	return 0;
}
