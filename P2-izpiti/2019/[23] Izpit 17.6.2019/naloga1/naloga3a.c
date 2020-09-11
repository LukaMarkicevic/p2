#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

	char vhod[20];
	int n;
	char izhod[20];

	scanf("%s", vhod);
	scanf("%d", &n);
	scanf("%s", izhod);

	FILE* fp = fopen(vhod, "rb");
	FILE* fw = fopen(izhod, "w");

	unsigned char* pike = malloc(3 * n * sizeof(char));

	fread(pike, 3 * n * sizeof(char), sizeof(char), fp);

	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	for (int i = 0; i < 3 * n; i = i + 3) {
		int R = pike[i];
		int G = pike[i + 1];
		int B = pike[i + 2];
		// printf("%d %d %d\n", R, G, B);

		if (R > 0 && G == 0 && B == 0) {
			p1++;

		}
		if (R == 0 && G > 0 && B == 0) {
			p2++;

		}
		if (R == 0 && G == 0 && B > 0) {
			p3++;

		}

	}

	fprintf(fw, "%d\n", p1);
	fprintf(fw, "%d\n", p2);
	fprintf(fw, "%d\n", p3);

	printf("%d\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);

	free(pike);
	fclose(fp);
	fclose(fw);

	return 0;
}
