#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int a, b, n;
int count = 0;
int* MEMO;
int mop;

int rekurzija(int n) {
	if (n == 0) {
		bool mora = false;
		for (int i = 0; i < 100; i++) {
			if (MEMO[i] == n) {
				mora = true;
			}
		}
		if (!mora) {
			MEMO[mop] = n;
			mop++;
		}
		return 1;
	}
	bool mora = false;
	for (int i = 0; i < 100; i++) {
		if (MEMO[i] == n) {
			mora = true;
		}
	}
	if (!mora) {
		MEMO[mop] = n;
		mop++;
	}

	return rekurzija(n / a) + rekurzija(n / b);
}

int main() {

	scanf("%d %d %d", &a, &b, &n);
	MEMO = malloc(100 * sizeof(int));

	for (int i = 0; i < 100; i++) {
		MEMO[i] = -1;
	}
	rekurzija(n);

	for (int i = 0; i < 100; i++) {
		if (MEMO[i] != -1) {
			count++;
		}
	}
	printf("%d\n", count);

	free(MEMO);

	return 0;
}
