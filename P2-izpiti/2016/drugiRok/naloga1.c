#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	int a, b;
	char str1[1000000];
	char str2[1000000];
	scanf("%d%d", &a, &b);
	sprintf(str1, "%d", a);
	sprintf(str2, "%d", b);

	int duz1 = strlen(str1);
	int duz2 = strlen(str2);

	int count = 0;

	// char


//bubble sort
	int temp;
	for (int z = duz1 - 2; z >= 0; z--) {
		for (int j = 0; j <= z; j++) {
			if (str1[j] > str1[j + 1]) {
				temp = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = temp;
			}
		}
	}

	for (int z = duz2 - 2; z >= 0; z--) {
		for (int j = 0; j <= z; j++) {
			if (str2[j] > str2[j + 1]) {
				temp = str2[j];
				str2[j] = str2[j + 1];
				str2[j + 1] = temp;
			}
		}
	}
	char arej1[1000000];
	char arej2[1000000];

	for (int i = 0; i < duz1; i++) {
		if (str1[i] != str1[i + 1]) {
			arej1[i] = str1[i];
			count++;
		}
	}

	for (int i = 0; i < duz2; i++) {
		if (str2[i] != str2[i + 1]) {
			arej2[i] = str2[i];
		}
	}
	
	//printf("%d\n",count);
	bool vrednost;
	for(int i=0;i<duz1;i++){
		vrednost=true;
		for(int j=0;i<duz2;i++){
			if(arej1[i]!=arej2[j]){
				vrednost=false;
			}
		}
		if(!vrednost){
			count++;
		}
	}
	printf("%d\n",count);

	return 0;
}