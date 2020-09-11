#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n, k;
int count;
void rekurzija(int jedan, int dva, int s) {
	if (dva > jedan) {
		return;
	}
	if (s == 0) {
		count++;
		return;
	}

	rekurzija(jedan + 1, dva, s - 1);
	rekurzija(jedan, dva + 1, s - 1);

}

int main() {

	scanf("%d %d", &n, &k);

	rekurzija(k, 0, n);

	printf("%d\n", count);

	return 0;
}
