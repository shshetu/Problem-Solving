#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin>>rows>>columns;
    int boardArea = rows*columns;
    int dominoArea = 2;
    int numberOfDomaino = boardArea/dominoArea;
    cout<<numberOfDomaino;
    return 0;
}
