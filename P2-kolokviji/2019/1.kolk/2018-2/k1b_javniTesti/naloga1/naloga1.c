
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
	long a, b;
	scanf("%ld", &a);
	long arej1[a];
	for (long i = 0; i < a; i++) {
		int z;
		scanf("%d", &z);
		arej1[i] = z;
	}
	scanf("%ld", &b);
	long arej2[b];
	for (long i = 0; i < b; i++) {
		int z;
		scanf("%d", &z);
		arej2[i] = z;
	}
	long arej3[a + b];

	for (long i = 0; i < a; i++) {
		arej3[i] = arej1[i];
	}
	int k = 0;
	for (long j = a; j < a + b; j++) {
		arej3[j] = arej2[k];
		k++;
	}
	// for(int i=0;i<a+b;i++){
	// 	printf("%ld\n", arej3[i]);
	// }
	//printf("------------------------------");
	int temp;
	for (int i = 0; i < a + b - 1; i++) {
		for (int j = 0; j < a + b - 1; j++) {
			if (arej3[j] > arej3[j+1]) {
				temp = arej3[j];
				arej3[j] = arej3[j + 1];
				arej3[j + 1] = temp;
			}
		}
	}
	// for(int i=0;i<a+b;i++){
	// 	printf("%ld\n", arej3[i]);
	// }


	//printf("%ld\n",arej3[0]);
	for (long i = 0; i < a + b; i++) {
		bool jeste = false;
		for (long j = i+1 ; j < a + b; j++) {
			if (arej3[i] == arej3[j]) {
				jeste = true;
			}
		}
		if (!jeste) {
			printf("%ld\n", arej3[i]);
		}
	}

	return 0;
}
