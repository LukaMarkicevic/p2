#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int n;
int count;

void rekurzija(int a, int b) {

	if (b > a || a + b > n) {
		return;
	}
	if (a + b == n && a == b) {
		count++;
		return;
	}

	rekurzija(a + 1, b);
	rekurzija(a, b + 1);


}


int main() {
	+
	scanf("%d", &n);

	rekurzija(0, 0);

	printf("%d\n", count);


	return 0;
}
