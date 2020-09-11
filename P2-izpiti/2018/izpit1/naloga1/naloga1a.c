#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d", &n);
	int arej[n];
	int count = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &arej[i]);
	}

	for (int i = 0; i < n; i++) {
		bool jeste = true;
		for (int j = i + 1; j < n; j++) {
			if (arej[i] < arej[j]) {
				jeste = false;
				break;
			}
		}
		if (jeste) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
