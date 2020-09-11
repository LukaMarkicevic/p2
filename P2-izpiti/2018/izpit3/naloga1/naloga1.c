#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

	int n;
	scanf("%d", &n);
	char kar[n];
	bool jePrvi;
	char z;
	scanf("%c", &z);
	for (int i = 0; i < n; i++) {
		scanf("%c", &z);
		kar[i] = z;

	}

	for (int i = 0; i < n; i++) {
		jePrvi = true;
		while (kar[i] != '_') {
			//printf("%d\n",i);
			if (jePrvi && kar[i] >= 'a' && kar[i] <= 'z') {
				kar[i]-=32;
			}
			jePrvi = false;
			i++;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%c", kar[i]);

	printf("\n");
	return 0;
}