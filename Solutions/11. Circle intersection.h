// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
 
int square (int x)
{
    return x * x;
}
 
// distance between a and b
int distance (int x1, int y1, int x2, int y2)
{
    return square(x1 - x2) + square(y1 - y2);
}
 
int main (int argc, char *argv [])
{
    int circle1X, circle1Y, circle1Radius;
     
    printf ("Enter the coordinates and radius for circle 1: ");
     
    scanf ("%d %d %d", &circle1X, &circle1Y, &circle1Radius);
     
    int circle2X, circle2Y, circle2Radius;
     
    printf ("Enter the coordinates and radius for circle 2: ");
     
    scanf ("%d %d %d", &circle2X, &circle2Y, &circle2Radius);
     
    int centerDistance = distance(circle1X, circle1Y, circle2X, circle2Y);
     
    if ( centerDistance == circle1Radius + circle2Radius ) {
        printf ("The circles are tangential.\n");
         
    } else if ( centerDistance < circle1Radius + circle2Radius ) {
        printf ("The circles overlap");
         
    } else {
        printf ("The circles do not overlap");
         
    }
 
    return 0;
}
 
// @END_OF_SOURCE_CODE