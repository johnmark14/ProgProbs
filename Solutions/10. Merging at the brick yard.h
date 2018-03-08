// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
#include <cstdlib>
 
#define F(i, a, b) for ( int i = (a); i < (b); i++ )
 
int compare (const void *a, const void *b)
{
    int *x = (int *) a;
    int *y = (int *) b;
     
    return *x - *y;
}
 
int main (int argc, char *argv [])
{
    int array [10];
     
    printf ("Enter the order for garage 1: ");
    F (i, 0, 5) scanf ("%d", &array [i]);
     
    printf ("Enter the order for garage 2: ");
    F (i, 5, 10) scanf ("%d", &array [i] );
     
    qsort (array, 10, sizeof (int), compare);
     
    printf ("\nThe final merged order is:\n");
     
    F (i, 0, 10) {
        printf ("%d", array [i]);
        if ( i < 9 ) printf (" ");
    }
     
    printf ("\n");
     
 
    return 0;
}