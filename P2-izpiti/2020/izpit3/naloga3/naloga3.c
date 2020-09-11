#include <stdio.h>
#include <stdlib.h>

char input[1000];
int MAX;
int ind;

int countParameters()
{
	int rdepth = 0;
	int params = 0;
	int lparen = 0;
	int rparen = 0;
	char s;

	while ( 1 ) {

		s = input[ind];

		if ( s == '\0' )
			return params;
		else if (s == ')') {
			rparen++;
			if ( params > MAX )
				MAX = params;
			return params;
		} else if (s >= '0' && s <= '9') {
			while (1) {
				s = input[ind++];
				if ( s == ',' || s == ')' ) {
					ind--;
					break;
				};
			};
			params++;
		} else if (s == ',') {
			ind++;
		} else if ( s == '(' ) {
			ind++;
			lparen++;

			rdepth = countParameters();
			if ( rdepth > MAX )
			{
				MAX = rdepth;
			};
			params++;
			ind++;
		} else {
			while (s != '(') {
				s = input[++ind];
			};
		};
	};

	return params;
}

int main() {

	scanf("%s", input);

	MAX = 0;
	ind = 0;
	countParameters();

	printf("%d", MAX);

	return 0;
}
