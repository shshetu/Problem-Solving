#include <iostream>
 #include <list>
// #include <bits/stdc++.h>


using namespace std;

// List Addition operation and finding size of the list
void addToListAndFindSize(){
    // declare list
list<int> numberList;
// declare iterator
list<int>::iterator it;

// Add to the list
numberList.push_back(10);
numberList.push_back(20);
numberList.push_back(30);
numberList.push_back(40);
numberList.push_back(50);

//Find size of the list
int sizeOfList = numberList.size();
cout<<"The List contains "<< sizeOfList<<" elements"<<endl;

// Iterate through the list
for( it = numberList.begin();it != numberList.end(); ++it){
    cout<<' '<<*it;
}

}
int main()
{
    // print List and size of the list
    addToListAndFindSize();
    return 0;
}
