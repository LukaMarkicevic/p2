#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main() {

	char* a = malloc(1000000 * sizeof(char));
	int b;

	scanf("%s", a);
	scanf("%d", &b);

	for (int i = 0; i < strlen(a); i++) {
		int broj = a[i] - '0';
		// printf("%d\n",broj);
		printf("%d", broj / b);
	}

	return 0;
}