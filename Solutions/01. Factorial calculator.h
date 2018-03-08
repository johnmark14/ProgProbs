// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
 
using namespace std;
 
int main (int argc, char *argv [])
{
    printf ("Enter a number: ");
     
    int n; 
    scanf ("%d", &n);
     
    int factorial = 1;
     
    for ( int i = 1; i <= n; i++ ) 
        factorial *= i;
     
    printf ("%d! = %d\n", n, factorial);
     
    return 0;
}
 
// @END_OF_SOURCE_CODE