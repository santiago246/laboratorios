#include <iostream>
#include "Graph.h"
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    vector <int> b;

    a.push_back ( 1 );
    a.push_back ( 2 );
    a.push_back ( 3 );

    b.push_back ( 10 );
    b.push_back ( 20 );
    b.push_back ( 30 );
    Graph grafo(a,b);
    cout<<grafo.numOutgoing(3);


    return 0;
}
