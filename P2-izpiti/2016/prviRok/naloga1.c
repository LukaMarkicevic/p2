#include <stdio.h>
#include <stdlib.h>

int broji(int broj, int count) {
	if (count == 0) {
		return broj;
	}
	int novbroj = 0;
	while (broj != 0) {
		int ostatak = broj % 10;
		broj -= ostatak;
		broj /= 10;
		novbroj += ostatak;
	}
	return broji(novbroj,count-1);
}


int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	printf("%d\n", broji(a * b, c));

	return 0;
}