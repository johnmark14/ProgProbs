#include <stdio.h>
 
int main ()
{
    int water_usage;
 
    while ( scanf ("%d", &water_usage) && water_usage ) {
 
        printf ("%d GALLONS PER WEEK WILL LAST %d WEEKS\n", water_usage, 10000 / water_usage );
    }
 
    return 0;
}