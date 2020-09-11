#include <stdio.h>
#include <stdbool.h>
void asd(int w);
int main() {
	bool neg1 = false, neg2 = false;
	char z = getchar();
	if (z == 45) {
		neg1 = true;
		z = getchar();
	}
	int a = 0, b = 0;
	while (z != 32) {

		a = a * 10 + z - '0';

		z = getchar();
	}
	if (neg1) {
		a = a * (-1);
	}

	char q = getchar();
	if (q == 45) {
		neg2 = true;
		q = getchar();
	}
	while (q != '\n') {

		b = b * 10 + q - '0';

		q = getchar();
	}

	if (neg2) {
		b = b * (-1);
	}


	int w = a + b;

	asd(w);
	putchar('\n');

	return 0;
}
void asd(int w) {

	if (w < 0) {
		putchar('-');
		w = w * (-1);
	}
	if (w / 10) {
		asd(w / 10);
	}
	putchar(w % 10 + '0');


}