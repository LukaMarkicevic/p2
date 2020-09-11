#include <stdio.h>
#include <stdbool.h>

int main() {
	int n;
	scanf("%d", &n);
	int arej[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arej[i]);
	}

	bool jeste;
	int count = 0;
	for (int i = 0; i < n; i++) {
		jeste = true;
		for (int j = i; j < n; j++) {
			if (arej[j] > arej[i]) {
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