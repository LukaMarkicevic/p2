
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char** argv) {
	FILE* fp = fopen(argv[1], "r");
	int n = atoi(argv[2]);
	int k = atoi(argv[3]);
	//printf("%d%d",n,k);
	int counter = 0, counter2 = 0;
	int i = 0;
	char polje[100000];


	while (!feof(fp)) {
		counter++;
		fgets(polje, 100000, fp);

		if (counter == n) {
			while (counter2 != k - 1) {
				if (polje[i] == ' ') {
					counter2++;
				}
				i++;
			}
			while (polje[i] != ' '&&polje[i] != '\n'&&polje[i] != '\0') {
				printf("%c", polje[i]);
				i++;
			}
			printf("\n");
			break;
		}

	}



	return 0;
}
