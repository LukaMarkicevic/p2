#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void reverse(char *from, char *to ){
    int len=strlen(from);
    int l;
    for(l=0;l<len;l++)to[l]=from[len-l-1];
    to[len]='\0';
}

int main() {

	char* a = malloc(1000000 * sizeof(char));
	char* b = malloc(1000000 * sizeof(char));

	scanf("%s", a);
	scanf("%s", b);

	char* ans = calloc(1000000 , sizeof(char));

	reverse()

	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j < strlen(b); j++) {
			ans[i+j]+=a[i]*b[j];
			ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
			ans[i+j]%=10;
		}
	}

	for(int i=0;i<strlen(ans);i++){

		printf("%c",ans[i]);
	}

	return 0;
}
