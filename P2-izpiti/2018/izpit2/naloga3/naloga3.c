
/*
 * Va"sa re"sitev tretje naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 3 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n, k;
int count;
char* tab;
int j = 0;

void printSve(int jedan, int dva) {
	for (int i = 0; i < jedan; i++) {
		printf("%d", 1);
	}
	for (int i = 0; i < dva; i++) {
		printf("%d", 2);
	}
	printf("\n");
}


void rekurzija(int jedan, int dva, int n) {
	if (dva > jedan) {
		return;
	}
	
	if (n == 0) {
		count++;
		// printSve(jedan, dva);
		return;
	}
	

	rekurzija(jedan + 1, dva, n - 1);
	rekurzija(jedan, dva + 1, n - 1);
}

int main() {
	scanf("%d%d", &n, &k);

	rekurzija(k, 0, n);
	printf("%d\n", count);
	return 0;
}
