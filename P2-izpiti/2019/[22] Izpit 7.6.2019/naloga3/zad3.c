#include <stdio.h>

int gore;
int dole;
int count;
int n;
int lvl;

void rekurzija(int gore, int dole) {

	if (gore > lvl || dole > lvl || dole > gore) {
		return;
	}

	if (gore == lvl && dole == lvl ) {
		count++;
		return;
	}

	rekurzija(gore + 1, dole);
	rekurzija(gore, dole + 1);

}

int main() {
	scanf("%d", &n);
	lvl = n / 2;

	rekurzija(0, 0);
	printf("%d\n", count);

}