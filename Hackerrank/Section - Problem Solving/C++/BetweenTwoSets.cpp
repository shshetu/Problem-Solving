    #include <iostream>
    #include <list>
    #include <bits/stdc++.h>
    using namespace std;


    int main()
    {
        int m,n;
        cout<< "Insert the size of first array:";
        cin>>m;
        cout<<"Insert the size of second array:";
        cin>>n;
        int a[m];
        int b[n];
        list<int> list;
        int minA = INT_MAX;
        int minB = INT_MAX;
        int counting = 0;

        cout<<"Insert the values in the first Array:";
        for(int i=0;i<m;i++){
            cin>> a[i];
            if(a[i]<minA){
                minA = a[i];
            }
        }
        cout<<"Insert the values in the second Array:";
        for(int i=0;i<m;i++){
            cin>> b[i];
            if(b[i] < minB){
                minB = b[i];
            }
        }
        int j=1;
        int product = 1;
        while(product<=minB){
            product = minA*j;
            int countA = 0;
            for(int i=0;i<m;i++){
                if(product%a[i]==0){
                    countA++;
                }
                if(countA == m){
                    int countB = 0;
                    for(int k=0;k<n;k++){
                        if(b[k]%product==0){
                            countB++;
                        }
                        if(countB==n){
                            counting++;
                        }
                    }
                }
            }
            ++j;
        }
        cout << "List size: "<< counting;
        return 0;

    }
