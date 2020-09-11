#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d", &n);
	char b[n];
	char temp;
	scanf("%c", &temp);
	for (int i = 0; i < n; i++) {
		char z;
		scanf("%c", &z);
		b[i] = z;
	}

	bool jePrvi = true;
	int brojPlus = 0;
	int brojMinus = 0;
	int i = 0;
	int sum=0;
	while (b[i] != '\0') {
		if (b[i] == '-') {
			brojMinus++;
		}
		if (b[i] == '+') {
			if (jePrvi) {
				brojMinus = 0;
				jePrvi = false;
				i++;
				continue;
			}
			brojPlus++;
			sum+=brojMinus;
			brojMinus=0;
		}
		i++;
	}
	sum+=brojPlus;

	printf("%d\n", sum / brojPlus);

	return 0;
}