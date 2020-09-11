#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main() {

	char bin[1000000];

	scanf("%s", bin);

	long duzina = strlen(bin);

	// printf("%ld\n",duzina);

	long broj=0;

	long long id = 2;

	for (int i = duzina-1; i >=0; i--) {
		id+=id;
		if (bin[i] == '1') {
			broj +=id;
		}
	}

	//printf("%ld\n",broj);
	printf("%d\n",(int) ceil(log2(broj/2))-1);


	// unsigned int Log2n(unsigned int n)
	// {
	// 	return (n > 1) ? 1 + Log2n(n / 2) : 0;
	// }

}
