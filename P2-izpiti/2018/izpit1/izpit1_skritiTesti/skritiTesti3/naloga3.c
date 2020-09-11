
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
#include <limits.h>
#include <stdbool.h>

int min = INT_MAX;
int n;
int* arej;
int sve;

int absraz(int sum1, int sum2) {
	return ((sum1 - sum2) < 0) ? -(sum1 - sum2) : (sum1 - sum2);
}

void printArej(int* arej) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arej[i]);
	}
	printf("\n");
}

int suma(int* arej) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arej[i] == -99) {
			continue;
		}
		sum += arej[i];
	}
	return sum;
}

void rekurzija(int* arej, int indeks) {
	if (indeks == n) {
		return;
	}
	
	if (absraz(suma(arej), sve - suma(arej)) < min) {

		min = absraz(suma(arej), sve - suma(arej));
	}



	rekurzija(arej, indeks + 1);
	int* arej2 = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		arej2[i] = arej[i];
	}
	arej2[indeks] = -99;
	rekurzija(arej2, indeks + 1);


	free(arej2);



}

int main() {

	scanf("%d", &n);
	arej = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arej[i]);
		sve += arej[i];
	}

	rekurzija(arej, 0);
	printf("%d\n", min);
	free(arej);
	return 0;
}
