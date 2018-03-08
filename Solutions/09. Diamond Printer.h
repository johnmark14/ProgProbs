#include <stdio.h>
 
int main ()
{
    printf ("Enter an odd number (1-100): ");
 
    int oddNumber;
 
    scanf ("%d", &oddNumber);
 
    int length = oddNumber / 2;
 
    for ( int i = 0; i <= length; i++ ) {
        for ( int j = length - i - 1; j >= 0; j-- )
            printf (" ");
        for ( int k = 1; k < 2 * (i + 1); k++ )
            printf ("*");
        printf ("\n");
    }
 
    for ( int i = 0; i < length; i++ ) {
        for ( int j = 1; j <= i + 1; j++ )
            printf (" ");
            oddNumber -= 2;
        for ( int k = oddNumber; k >= 1; k-- )
            printf ("*");
        printf ("\n");
    }
 
    return 0;
}