        #include <iostream>
        #include <string>
        using namespace std;


        int main()
        {
            string inputString, resultsString;
            cin>>inputString;

            int length = inputString.length();

            for(int i=0;i<length;i++){
                if(inputString[i]=='a' ||inputString[i]=='A' ||inputString[i]=='e' ||inputString[i]=='E' ||inputString[i]=='i' ||inputString[i]=='I'
                   || inputString[i]=='o' ||inputString[i]=='O' ||inputString[i]=='u' ||inputString[i]=='U'||inputString[i]=='y'||inputString[i]=='Y'){
                    continue;
                   }else{
                   resultsString+='.';
                   resultsString+=tolower(inputString[i]);
                   }
            }
            cout<<resultsString;
            return 0;
        }
