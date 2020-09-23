#include <iostream>
using namespace std;

int main()
{
    //declare
    int n, k;
    int a[100];
    int count = 0;
    int valueOfKthPosition;

    //take input
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {

        cin >> a[i];
        if (k>0 && k<=n && i+1 == k)
        {
            valueOfKthPosition = a[k];
        }
    }

    // check how many contestents will go to the next round
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > 0 && a[i] >= valueOfKthPosition)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
