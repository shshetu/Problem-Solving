// C++ program to rotate an array by d elements
#include <bits/stdc++.h>
using namespace std;

// Function to left rotate arr[] of size n by 1
void leftRotateByOne(int arr[], int n) {
    int temp = arr[0], i;
    for (i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
    
}

// Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int n, int d) {
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr,n);
    }
    
}

// Utility function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

// Driver program to test above functions
int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int numOfRotation = 4;
    // Function calling: arrays are mutable in C++
    leftRotate(array, size, numOfRotation);
    printArray(array, size);

    return 0;
}