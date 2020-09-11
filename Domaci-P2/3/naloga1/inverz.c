
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c inverz.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>
//#define BROJ 100
#include "inverz.h"

long inverz(long x, long a, long b) {
    long provera=a;
    while(a<=b){
    	provera=a;
    	while(provera<1000&&provera!=x){
    		provera*=provera;
    	} 	
    	if(provera==x){
    		printf("%ld\n",provera);
    		break;
    	}

    	a++;
    }
    return -1;
}
int main() {
    printf("%ld\n", inverz(25, 1, 10));   // 5
    return 0;
}
// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
