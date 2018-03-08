// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
#include <cstring>
 
using namespace std;
 
/**
* we could use pow() function for calculating power
* pow() function returns double
* sometimes double can produce ambiguous result 
* for example, pow (2, 3) = 8.000000000001
* lets keep it simple and write our own power() function 
*/
int power (int base, size_t exponent)
{
    int ret = 1;
 
    for ( int i = 1; i <= exponent; i++ ) {
        ret *= base;
    }
 
    return ret;
}
 
int main (int argc, char *argv [])
{
    char binary [9 + 3];
     
    printf ("Enter binary number: ");
    scanf ("%s", binary);
     
    size_t length = strlen (binary);    // "size_t" is also known as "unsigned long"
    int decimal = 0;
     
    for ( int i = 0; i < length; i++ ) {
        int binaryDigit = binary [i] - '0';
        decimal += (binaryDigit * power(2, length - 1 - i));
    }
 
    printf ("In decimal: %d\n", decimal);
 
    return 0;
}
 
// @END_OF_SOURCE_CODE