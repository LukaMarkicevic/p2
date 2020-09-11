
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int count = 0;
int j = 0;
int rekruzija(int arej[], int k, int v) {
	if (k == 0) {
		return 0;
	}

	if (arej[j] + rekruzija(arej[j + 1], k - 1, v) == v) {
		count++;
	}
	return arej[j];

}

int main() {
	int n, k, v;
	scanf("%d%d%d", &n, &k, &v);
	int arej[n];
	
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		arej[i] = a;
	}
	printf("asd");
	rekruzija(arej, k, v);

	printf("%d", count);

	return 0;
}
