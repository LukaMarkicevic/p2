#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _Klub {
	char* imeKluba;
	int stClanov;
	char** imena;
} Klub;

Klub* izdelaj() {
	Klub* klubic = (Klub*) malloc(sizeof(Klub));
	char linija[1000];
	fgets(linija, 1000, stdin);
	char* token = strtok(linija, " ");
	char* imeKlubax = (char*) malloc(20 * sizeof(char));
	strcpy(imeKlubax, token);
	token = strtok(NULL, " ");

	int stClanovx = atoi(token);
	char** imenax = (char**) malloc(stClanovx * sizeof(char*));
	int count = -1;
	int i = 0;
	while (token != NULL) {
		count++;
		if (count == stClanovx) {
			break;
		}
		token = strtok(NULL, " ");
		imenax[i++] = token;
	}

	// for (int i = 0; i < stClanovx; i++) {
	// 	printf("%s\n", imenax[i]);
	// }
	klubic->imeKluba = imeKlubax;
	klubic->stClanov = stClanovx;
	klubic->imena = imenax;
	return klubic;
}

void dealo(Klub* klubic) {
	free(klubic->imeKluba);
	for (int i = 0; i < klubic->stClanov; i++) {
		free(klubic->imena[i]);
	}
	
}

int main() {

	Klub* klubic = izdelaj();
	printf("%d\n", klubic->stClanov);
	// dealo(klubic);
	return 0;
}
