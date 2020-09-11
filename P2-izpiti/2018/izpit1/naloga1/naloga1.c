#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		int z;
		scanf("%d", &z);
		arr[i] = z;
	}

	bool visi;
	int count = 0;
	for (int i = 0; i < n; i++) {
		visi = false;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				visi = true;
				break;
			}
		}
		if (!visi) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}