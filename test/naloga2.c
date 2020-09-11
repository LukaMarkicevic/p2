#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



int main() {
	FILE* fp = fopen("vhod.txt", "r");
	FILE* fw = fopen("izhod.txt", "w");
	char str[100];
	char* pos;
	char* word = "asd";
	int count = 0;
	int index;
	while (fgets(str, 100, fp) != NULL) {
		index = 0;

		// Find next occurrence of word in str
		while ((pos = strstr(str + index, word)) != NULL)
		{
			// Index of word in str is
			// Memory address of pos - memory
			// address of str.
			index = (pos - str) + 1;

			count++;
		}
	}
	printf("%d\n", count);

	fclose(fp);
	fclose(fw);

	return 0;
}
