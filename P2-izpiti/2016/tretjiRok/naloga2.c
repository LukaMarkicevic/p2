#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[1000001];
	char b[1000001];
	scanf("%s%s", a, b);
	int duz1 = strlen(a), duz2 = strlen(b);
	int ostatak;
	if (duz1 > duz2) {
		while (duz1 > 0) {

			duz1--;
		}
	} else if (duz2 > duz1) {

	}

	printf("%s\n", b);


	return 0;
}