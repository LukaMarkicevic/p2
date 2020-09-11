#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int n, k, m;
int count;

void printArej(char* arej) {
	for (int i = 0; i < n; i++) {
		printf("%c", arej[i]);
	}
	printf("\n");
}

int absraz(int sum1, int sum2) {
	return ((sum1 - sum2) < 0) ? -(sum1 - sum2) : (sum1 - sum2);
}

bool razlika(char* arej, int k) {
	for (int i = 0; i < n; i++) {
		if (i + 1 == n) break;
		int broj1 = arej[i] - '0';
		int broj2 = arej[i + 1] - '0';
		if (absraz(broj1, broj2) != k) {
			return false;
		}
	}
	return true;
}

int main() {

	scanf("%d%d%d", &n, &k, &m);

	char* prviBroj = malloc(n * sizeof(char));

	for (int i = 0; i < n; i++) {
		prviBroj[i] = '0';
	}
	prviBroj[0] = '1';

	char* poslednjiBroj = malloc(n *  sizeof(char));

	for (int i = 0; i < n; i++) {
		poslednjiBroj[i] = '9';
	}

	int i;
	while (count < m) {
		for (i = n - 1; i >= 0; i--) {
			prviBroj[i]++;
			// printArej(prviBroj);
			if (prviBroj[i] > '9') {
				prviBroj[i] = '0';
				/* do carry and proceed to next digit */
			} else {
				break;
			}
		}
		if (razlika(prviBroj, k)) {
			printArej(prviBroj);
			count++;
		}
	}



	free(prviBroj);
	free(poslednjiBroj);

	return 0;
}

// radi 4/10 primera
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>

// int n, k, m;
// long long poslednjiBroj;
// int count;

// int absraz(int sum1, int sum2) {
// 	return ((sum1 - sum2) < 0) ? -(sum1 - sum2) : (sum1 - sum2);
// }

// int main() {

// 	scanf("%d%d%d", &n, &k, &m);

// 	long long prviBroj = 1;

// 	for (int i = 0; i < n; i++) {
// 		prviBroj *= 10;
// 	}
// 	prviBroj /= 10;
// 	poslednjiBroj = prviBroj * 10 - 1;

// 	for (long long i = prviBroj; i <= poslednjiBroj; i++) {
// 		bool jeste = false;
// 		long long temp = i;
// 		int a = n;
// 		while (a>1) {
// 			int cifra = temp % 10;
// 			temp -= cifra;
// 			temp /= 10;
// 			int cifra2 = temp % 10;
// 			if (absraz(cifra, cifra2) != k) {
// 				jeste = true;
// 				break;
// 			}
// 			a--;
// 		}

// 		if (!jeste) {
// 			count++;
// 			if (count > m) {
// 				break;
// 			}
// 			printf("%lld\n", i);
// 		}
// 	}

// 	return 0;
// }
