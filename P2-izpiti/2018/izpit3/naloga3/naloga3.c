
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

int count = 0;
int memoi[1000000];
int i = 0;
int reku(int a, int b, int n) {
	int j = 0;
	bool jeSte = false;
	for (j = 0; j <= i; j++) {
		if (memoi[j] == n) {
			jeSte = true;
			break;
		}

	}

	if (!jeSte) {
		count++;
		memoi[i] = n;
		i++;

	}

	if (n == 0) {
		return 1;
	}
	return reku(a, b, n / a) + reku(a, b, n / b);
}





int main() {

	int a, b, n;

	scanf("%d%d%d", &a, &b, &n);

	reku(a, b, n);

	printf("%d\n", count+1);

	return 0;
}
