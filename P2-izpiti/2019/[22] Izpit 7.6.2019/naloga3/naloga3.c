#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int memo[1000000];

int i=0;
int reku(int n) {

    for(int j=0;j<=i;j++){
        if(memo[i]!=n)
    }
    

    if (n == 0) {
        return 1;
    }

    return reku(n/2)+reku(n/2);



}



int main() {

    int a;
    scanf("%d", &a);

    reku(a);

    printf("%d\n", count);

    return 0;
}