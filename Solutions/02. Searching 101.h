// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
 
using namespace std;
 
int main (int argc, char *argv [])
{
    int numbers [5];
     
    // taking inputs
    for ( int i = 0; i < 5; i++ ) {
        printf ("Enter a number: ");
        scanf ("%d", &numbers [i]);
    }
     
    printf ("Enter the number to be searched: ");
     
    int searchNumber;
    scanf ("%d", &searchNumber);
     
    bool isNumberFound = false;
     
    // searching number
    for ( int i = 0; i < 5; i++ ) {
        if (numbers [i] == searchNumber) {
            isNumberFound = true;
            break;
        }
    }
     
    if (isNumberFound)
        printf ("The number %d appears in the first 5 numbers.\n", searchNumber);
    else
        printf("The number %d does not appear in the first 5 numbers\n", searchNumber);
 
    return 0;
}
 
// @END_OF_SOURCE_CODE