#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int levi, desni, srednji;
int ultc;

void rekurzija(int l, int d, int c, int count, bool levij, bool desnij) {

	if (l < 0 || d < 0 || c < 0) {
		return;
	}
	if (count == (levi + desni + srednji)) {
		ultc++;
		return;
	}
	if (!levij) {
		rekurzija(l, d - 1, c, count + 1, false, true);
	}
	if (!desnij) {
		rekurzija(l - 1, d, c, count + 1, true, false);
	}
	
	rekurzija(l, d, c - 1, count + 1, false, false);


}


int main() {

	scanf("%d%d%d", &levi, &desni, &srednji);

	rekurzija(levi, desni, srednji, 0, false, false);

	printf("%d\n", ultc);

	return 0;
}
