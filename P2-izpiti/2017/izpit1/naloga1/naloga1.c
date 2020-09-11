#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {

	char** broj = malloc(1000001 * sizeof(char));
	char* linija = malloc(100001 * sizeof(char));

	fgets(linija, 1000001, stdin);

	int i = 0;
	int sum = 0;
	int count = 0;

	char* newString;
	newString = strtok(linija, " ");
	while (newString != NULL)
	{
		count++;
		broj[i] = newString;
		newString = strtok(NULL, " ");
		i++;
	}
	bool isNumber;
	for (int z = 0; z < count; z++) {
		int j = 0;
		isNumber = true;
		while (j < strlen(broj[z])) {
			if ((broj[z][j])=='\n') {
				break;
			}
			if (!isdigit(broj[z][j])) {
				isNumber = false;
				break;
			}
			j++;
		}
		if (isNumber) {
			sum += atoi(broj[z]);
		}
	}

	printf("%d\n", sum);

	return 0;
}