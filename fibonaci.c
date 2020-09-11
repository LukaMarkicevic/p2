#include <stdio.h>
long long memo[1000];
long long fibonaci(long long a) {
	if (memo[a] > 0)
		return memo[a];
	if (a < 1)
		return 1;
	
	memo[a] = fibonaci(a - 1) + fibonaci(a - 2);
	return memo[a];
}


int main() {

	//int a;
	//scanf("%d", &a);
	for (long long i = 0; i < 1000; i++) {
		printf("i: %lld | broj: %lld\n",i,fibonaci(i));
	}
	return 0;
}