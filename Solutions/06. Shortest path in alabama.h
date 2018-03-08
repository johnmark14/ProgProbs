// @BEGIN_OF_SOURCE_CODE
 
#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
 
#define Alabaster   "Alabaster"
#define Birmingham  "Birmingham"
#define Demopolis   "Demopolis"
#define Mobile      "Mobile"
#define Montgomery  "Montgomery"
#define Huntsville  "Huntsville"
#define Tuscaloosa  "Tuscaloosa"
 
using namespace std;
 
struct node {
    string sourceCity;
    string destinationCity;
    int miles;
     
    node () {}
     
    node (string sourceCity, string destinationCity, int miles) {
        this->sourceCity = sourceCity;
        this->destinationCity = destinationCity;
        this->miles = miles;
    };
     
} routing [9];
 
void populateData()
{
    routing [0] = node (Alabaster, Birmingham, 24);
    routing [1] = node (Alabaster, Montgomery, 71);
    routing [2] = node (Birmingham, Huntsville, 103);
    routing [3] = node (Birmingham, Tuscaloosa, 59);
    routing [4] = node (Demopolis, Mobile, 141);
    routing [5] = node (Demopolis, Montgomery, 101);
    routing [6] = node (Demopolis, Tuscaloosa, 65);
    routing [7] = node (Mobile, Montgomery, 169);
    routing [8] = node (Montgomery, Tuscaloosa, 134);
}
 
// best path among all the paths
vector <string> bestPath;
 
// best cost among all the acceptable cost
int bestCost;
 
// intermediate path
vector <string> path;
 
// user input, source and destination city 
string city1, city2;
 
// check if the cityName is already visited 
bool notInPath(string cityName)
{
    for ( int i = 0; i < path.size(); i++ ) {
        if ( path [i] == cityName ) return false;
    }
     
    return true;
}
 
void recurShortestPath(string currentCity, int currentCost)
{
    if (currentCity == city2) {
        if (currentCost < bestCost) {
            bestCost = currentCost;
            bestPath = path;
        }
        return;
    }
     
    // loop through all the routing paths 
    for ( int i = 0; i < 9; i++ ) {
        if (routing [i].sourceCity == currentCity && notInPath(routing [i].destinationCity)) {
            // put the next city in the path 
            path.push_back(routing [i].destinationCity);
            // lets do the experiment
            recurShortestPath(routing [i].destinationCity, currentCost + routing [i].miles);
            // preserve the previous state 
            path.pop_back();
             
        } else if (routing [i].destinationCity == currentCity && notInPath(routing [i].sourceCity)) {
            path.push_back(routing [i].sourceCity);
            recurShortestPath(routing [i].sourceCity, currentCost + routing [i].miles);
            path.pop_back();
        }
    }
}
 
int main (int argc, char *argv [])
{
    populateData();
 
    // initially bestCost is the maximum value ever
    bestCost = INT_MAX;
     
    printf ("Enter city #1: ");
    cin >> city1;
     
    printf("Enter city #2: ");
    cin >> city2;
     
    path.push_back(city1);
     
    recurShortestPath(city1, 0);
     
    printf ("Shortest routing and distance:\n");
    bool isHyphen = false;
     
    for ( int i = 0; i < bestPath.size(); i++ ) {
        if (isHyphen) printf ("-");
        isHyphen = true;
         
        cout << bestPath [i];
    }
     
    printf (", %d miles\n", bestCost);
     
    return 0;
}
 
// @END_OF_SOURCE_CODE