#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char arej[1000];
int i;

int rekurzija() {

	int f, g;
	char c = arej[i];
	i++;
	if (c == 'T') {
		return 1;
	}
	if (c == 'F') {
		return 0;
	}
	if (c == '!') {
		f = rekurzija();
		if (f == 1) {
			f = 0;
		} else {
			f = 1;
		}
	}
	if (c == '&') {
		f = rekurzija();
		g = rekurzija();
		f = f & g;
	}

	if (c == '|') {
		f = rekurzija();
		g = rekurzija();
		f = f | g;
	}
	return f;
}

int main() {
	scanf("%s", arej);
	int stanje = rekurzija();
	if (stanje == 0) {
		printf("F");
	} else {
		printf("T");
	}
	printf("\n");
	return 0;
}

