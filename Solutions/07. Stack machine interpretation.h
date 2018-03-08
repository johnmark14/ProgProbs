#include <stdio.h>
#include <stack>
using namespace std;
 
int main ()
{
    printf ("Enter virtual machine commands: \n");
 
    char ch;
    int value;
    stack <int> s;
 
    while ( scanf ("%c", &ch) && ch != 'R' ) {
 
        if ( ch == 'P' ) {
            scanf ("%d", &value);
            s.push (value);
        }
 
        else if ( ch == 'A' ) {
            value = s.top ();
            s.pop ();
            value += s.top ();
            s.pop ();
            s.push (value);
        }
 
        else if ( ch == 'M' ) {
            value = s.top ();
            s.pop ();
            value *= s.top ();
            s.pop ();
            s.push (value);
        }
 
        else if ( ch == 'S' ) {
            value = s.top ();
            s.pop ();
            value = s.top () - value;
            s.pop ();
            s.push (value);
        }
 
        else if ( ch == 'D' ) {
            value = s.top ();
            s.pop ();
            value = s.top () / value;
            s.pop ();
            s.push (value);
        }
    }
 
    printf ("=> %d\n", s.top ());
    s.pop ();
 
    return 0;
}