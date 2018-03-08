#include <stdio.h>
#include <string.h>
 
int main ()
{
    int dataset;
    scanf ("%d", &dataset);
 
    while ( dataset--) {
        char input [35];
        scanf ("%s", input);
 
        int length = strlen (input);
 
        if ( input [length - 1] == 'r' && input [length - 2] == 'e' ) {
            input [length - 1] = 's';
            input [length] = 't';
            input [length + 1] = 0;
        }
 
        else {
            if ( input [length - 1] == 'e' )
                strcat (input, "r");
            else
                strcat (input, "er");
        }
 
        printf ("%s\n", input);
 
    }
 
    return 0;
}