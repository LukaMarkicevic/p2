
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga1.c
./test01

*/

#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"
int nule;
int* poisci(int* t, int* dolzina, int** konec) {
    int length=0;
    int i=0;
    
    printf("ASDASDASDASD");
    while(nule!=2){
    	if(t[i]==0){
    		nule++;
    	}
    	if(nule<2){
    		length++;
    	}
    	i++;
    }
    // *dolzina=nule;
    **konec=2;
    return &nule;
}

int main() {
    int tabela[] = {72, 0, 91, 67, 42, 58, 0};

    int n = 0;
    int* pk = NULL;
    int* pz = poisci(tabela + 3, &n, &pk);


    printf("%d, %d, %d\n", n, *pz, *pk);
    exit(0);
    return 0;
}
