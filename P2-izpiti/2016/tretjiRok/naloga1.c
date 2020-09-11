#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

	int n, k;
	scanf("%d%d", &n, &k);

	int count = 0;
	int broj;
	int i;
	for (i = n; i < n + 1000000; i++) {
		bool isPrime = false;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) {
				isPrime=true;
				break;
			}
		}
		if(!isPrime){
			count++;
		}
		if (count == k+1) {

			break;
		}

	}
	printf("%d\n", i);


	return 0;
}