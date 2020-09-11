#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

	int n;
	scanf("%d ", &n);

	char arej[n];
	for (int i = 0; i < n; i++) {
		scanf("%c", &arej[i]);
	}
	bool prvi = true;
	for (int i = 0; i < n; i++) {
		if (prvi || arej[i - 1] == '_') {
			prvi = false;
			if (arej[i] >= 'a' && arej[i] <= 'z') {
				arej[i] = toupper(arej[i]);
			}
		}


		printf("%c", arej[i]);
	}
	printf("\n");

	return 0;
}
