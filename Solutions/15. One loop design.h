#include <stdio.h>
 
int main ()
{
    char a [10];
    for ( int i = 0; i < 10; i++ ) {
        a [i] = '*';
        a [i + 1] = 0;
        printf ("%10s", a);
        printf ("\n");
    }
    return 0;
}