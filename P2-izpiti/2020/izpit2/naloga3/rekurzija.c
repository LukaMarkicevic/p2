#include <stdio.h>
#include <stdlib.h>

// &, |, !
// |T|!TF
// izraz = T & (!T | F)
// T


char niz[1000];
int i;
int greska;

int dohvatiVrednost();

int main()
{
    int vr;
    scanf("%s", niz);
    i = 0;
    

    vr = dohvatiVrednost();
    if ( vr == 1 )
        printf("T");
    else if ( vr == 0 )
        printf("F");

}

// !&
int dohvatiVrednost()
{
    int f, g;


    char c = niz[i];
    i++;
    if ( c == 'T' )
        return 1;
    else if ( c == 'F' )
        return 0;
    else if ( c == '!' )
    {
        f = dohvatiVrednost();
        if ( f == 1 )
            f = 0;
        else
            f = 1;
    } else if ( c == '&' )
    {

        f = dohvatiVrednost();

        g = dohvatiVrednost();

        f = f & g;
    } else if ( c == '|' )
    {
        f = dohvatiVrednost();
        g = dohvatiVrednost();
        f = f | g;
    };

    return f;
}