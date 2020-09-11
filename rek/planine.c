#include <stdio.h>
#include <stdlib.h>

int N;
int lvl;
int* figures;
int total;
char **window;
int position;
int tops;

void resetWindow()
{
	for (int i=0; i<lvl; i++)
		for (int j=0; j<N; j++)
			window[i][j] = ' ';
}

void setWindowField(int lvl, int pos, int dir)
{
	window[lvl][pos] = dir == 1 ? '/' : '\\';
}

void printWindow(int addon)
{
	for (int i=lvl-1; i>=0; i--) {
		for (int j=0; j<N; j++)
			printf("%c", window[i][j]);
		if ( i > 0 )
			printf("\n");
	};
	if ( addon > 0 )
		printf("   +%d", addon);
	printf("\n");
}

int factoriel(int n)
{
	if ( n == 0 )
		return 1;
	return n*factoriel(n-1);
}

int getPermutations()
{
	int product = 1;
	for (int i=0; i<N; i++)
		if ( figures[i] > 0 )
			product *= factoriel( figures[i] );
	return factoriel( getFiguresNumber() ) / product;
}

int getFiguresNumber()
{
	int sum = 0;
	for (int i=0; i<N; i++)
		sum += figures[i];
	return sum;
}

void resetFigures()
{
	for (int i=0; i<N; i++)
		figures[i] = 0;
}

void incrementFigure(int lvl)
{
	figures[lvl-1]++;
}

void printFigures()
{
	for (int i=0; i<N; i++)
		printf("%d ", figures[i]);
	printf("\n");
}

void recursion( int max, int disp, int bottomLine )
{
	resetWindow();
	resetFigures();
	tops = 0;
	position = 0;

	if ( max == lvl+1 )
		return;

	if ( max == 1 )
	{
		for (int i=0; i<lvl; i++) {
			setWindowField(0, position++, 1);
			setWindowField(0, position++, -1);
		};
		total++;
		printWindow(0);
		resetWindow();

		recursion(2, 1, 0);
		return;
	};

	for (int i=0; i<max; i++)
	{
		setWindowField(i, position++, 1);
		tops++;
	};
	incrementFigure(max);
	for (int i=max-1; i>=bottomLine; i--)
	{
		setWindowField(i, position++, -1);
	};

	int i;
	while( tops < lvl ) {
		for (i=0; i<disp && tops < lvl; i++)
		{
			setWindowField(bottomLine+i, position++, 1);
			tops++;
		};
		incrementFigure( bottomLine+i );

		for (i=i-1; i>=0; i--)
			setWindowField(bottomLine+i, position++, -1);
	};

	for (i=bottomLine-1; i>=0; i--)
		setWindowField(i, position++, -1);

	int e = getPermutations();
	printWindow( e-1 );
	printFigures();

	total += e;

	// ...
	if ( bottomLine + 1 == max || max == lvl )
		recursion(max+1, 1, 0);
	else if ( disp == max || max + disp + 1 > lvl )
		recursion( max, 1, bottomLine+1 );
	else
		recursion( max, disp+1, bottomLine );

}

int main(int argc, const char * argv[])
{
	N = atoi( argv[1] );
	lvl = N/2;

	window = (char**) malloc( lvl * sizeof(char*) );
	for (int i=0; i<lvl; i++)
		window[i] = (char*) malloc( N*sizeof(char) );
	figures = (int*) malloc( N*sizeof(int) );

	resetWindow();

	position = 0;
	recursion( 1, 1, 0 );

	printf("Ukupno kombinacija: %d\n\n", total);

	return 0;
}
