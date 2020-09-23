        #include <iostream>
        using namespace std;

        int main()
        {
            int n;
            int numberOfProblemSolving = 0;
            int index = 0;
            int decisionArray[1000];

            cin>>n;

            while(index<n){
                 int decisionCount = 0;

            for(int i = 0;i<3;i++) {
                cin>>decisionArray[i];

                if(decisionArray[i] == 1){
                    decisionCount++;
                }
            }

            if(decisionCount>=2){
                numberOfProblemSolving++;
            }
                index++;
            }
            cout<<numberOfProblemSolving;

            return 0;
        }
