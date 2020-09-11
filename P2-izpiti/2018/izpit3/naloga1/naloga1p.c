#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {

	int n;
	scanf("%d", &n);

	char arej[n];

	scanf("%s", arej);

	bool prvi;
	for (int i = 0; i < n; i++) {
		prvi = true;
		while (arej[i] != '_') {

			if (prvi && arej[i] >= 'a' && arej[i] <= 'z') {
				arej[i] -= 32;
				
			}
			prvi = false;
			i++;
		}

	}

	printf("%s\n", arej);



	return 0;
}