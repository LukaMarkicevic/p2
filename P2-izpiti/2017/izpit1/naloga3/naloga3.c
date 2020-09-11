#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>


int main() {

	long n;
	scanf("%ld", &n);

	long maksBroj = 1;
	long a = n;
	while (a != 0) {
		maksBroj *= 10;
		a--;
	}

	long* vrstica = malloc(n * sizeof(long));
	long* vrstica2 = malloc(n * sizeof(long));

	long broj1 = 0;
	long broj2 = 0;

	long test = maksBroj;

	for (long i = 0; i < n; i++) {
		scanf("%ld", &vrstica[i]);
		broj1 += vrstica[i] * test;
		scanf("%ld", &vrstica2[i]);
		broj2 += vrstica2[i] * test;
		test /= 10;
	}


	// printf("%ld %ld\n", broj1, broj2);


	bool ok;
	bool jeste;

	// if (8 > 8) {
	// 	prlongf("AHHAHA");
	// }


	for (long i = broj1/10; i <= broj2/10; i++) {
		long broj = i;
		jeste = true;
		ok = true;
		for (long j = n - 1; j >= 0; j--) {

			if (!ok) {
				break;
			}
			long cifra = broj % 10;
			// if (i == 483) {
			// 		prlongf("CIFRA --- %d %d %d\n", cifra, vrstica[j], vrstica2[j]);
			// 	}
			broj -= cifra;
			broj /= 10;
			if (broj == 0) {
				ok = false;
			}
			if (cifra < vrstica[j] || cifra > vrstica2[j]) {

				jeste = false;
				break;
			}

		}

		if (jeste) {
			printf("%ld\n", i);
		}

	}
	return 0;
}