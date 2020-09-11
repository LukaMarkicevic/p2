#include <stdio.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d", &n);
	char arej[n];
	scanf("%s", arej);

	int brojPluseva = 0;
	int prviPlus;
	bool prvi = true;
	for (int i = 0; i < n; i++) {
		if (arej[i] == '+') {
			if (prvi) {
				prviPlus = i;
				prvi = false;
			}

			brojPluseva++;
		}

	}
	
	int count = 0;
	int brojMinuseva = 0;
	for (int i = prviPlus; count < brojPluseva; i++) {
		if (arej[i] == '+') {
			count++;
			continue;
		}
		brojMinuseva++;

	}
	
	brojMinuseva += brojPluseva - 1;
	// printf("%d\n",brojMinuseva);

	printf("%d\n", brojMinuseva/(brojPluseva-1));


	return 0;
}