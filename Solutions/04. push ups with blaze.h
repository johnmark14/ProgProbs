// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
 
using namespace std;
 
int main (int argc, char *argv [])
{
    int finalScore;
    printf ("Enter final score: ");
    scanf ("%d", &finalScore);
     
    int pushUps = 0;
    for ( int i = 7; i <= finalScore; i = i + 7 )
        pushUps = pushUps + i;
     
    printf ( "Push ups: %d\n", pushUps );
     
    return 0;
}
 
// @END_OF_SOURCE_CODE