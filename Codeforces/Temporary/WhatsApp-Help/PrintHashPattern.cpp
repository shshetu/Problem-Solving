#include<iostream>
using namespace std; // todo: Know why we use, namespace std;
int main(){

int n;
cout << "How many lines you want to print? :";
cin >> n;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <= i; j++)
       {
           cout << "#"<<" ";
       }
       cout << endl;
       
    }
    return 0;
}