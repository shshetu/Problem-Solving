            #include <iostream>

            using namespace std;

            int main()
            {
                int n,x = 0;
                string bitInput;
                cin>>n;
                int i=0;
                while(i<n){
                    cin>>bitInput;
                     if(bitInput.compare("X++")==0){
                    x++;
                }else if(bitInput.compare("++X")==0){
                    ++x;
                }else if(bitInput.compare("X--")==0){
                x--;
                }else if(bitInput.compare("--X")==0){
                --x;
                }
                i++;
                }
                cout<<x;
            }
