#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int count;
int n;
int k1;
int k2;
int s;
int* MEMO;
int j = 0;
void rekurzija(int t, int s) {
	if (t >= n || t < 0 || s < 0) {
		return;
	}
	bool mora = false;
	for (int i = 0; i < 1000; i++) {
		if (t == MEMO[i]) {
			mora = true;
		}
	}
	// printf("%d\n", t);
	if (!mora) {
		count++;
		MEMO[j] = t;
		j++;
	}

	rekurzija(t + k1, s - 1);
	rekurzija(t + k2, s - 1);
	rekurzija(t - k1, s - 1);
	rekurzija(t - k2, s - 1);

}


int main() {

	// int n, k1, k2, s;
	scanf("%d%d%d%d", &n, &k1, &k2, &s);
	MEMO = malloc(1000 * sizeof(int));
	for (int i = 0; i < 1000; i++) {
		MEMO[i] = -999;
	}
	rekurzija(0, s);
	free(MEMO);
	printf("%d\n", count);

	return 0;
}