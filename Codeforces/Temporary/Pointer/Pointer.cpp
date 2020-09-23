            #include <iostream>

            using namespace std;

            // Always declare functions before the main function
            void assignVariableToAPointer(){
            // Declare vaiables
            int myNum = 20;
            string myName = "Shetu";
            // Declare pointers
            int *integerPointer;
            string *stringPointer;

            // Assign the Memory Address to the pointer
            integerPointer = &myNum;
            stringPointer = &myName;

            // Print the memory address of the pointer
            cout<<"Memory Address of "<<myNum<<" is: "<<integerPointer<<endl;
            cout<<"Memory Address of "<<myName<<" is: "<<stringPointer<<endl;

            // Print the value stored in pointer
            cout<<"Value of "<<myNum<<" is: "<<*integerPointer<<endl;
            cout<<"Value of"<<myName<<" is: "<<*stringPointer<<endl;

            }

            // Multiply without passing variables in function
            void multiplyUsingPointer(int& num1, int& num2, int& num3){
                num1*=2;
                num2*=2;
                num3*=2;
            }

            // Multiply Numbers
            void multiplyNumbers(){
            int n1 = 2,n2=3, n3 = 4;
                multiplyUsingPointer(n1,n2,n3);
                cout<<n1<<endl;
                cout<<n2<<endl;
                cout<<n3<<endl;
            }

            // Null Pointer
            void printNullPointer(){
            int *integerPointer = NULL;
            cout<<"The value of the pointer: "<<integerPointer;
            }

            // Increment Pointer
            void incrementPointers(){
            // Declare a constant variable and declare an array of that size and a pointer
            const int MAX = 3;
            int integerArray[MAX] = {10,100,200};
            int *integerPointer;

            // Assign the address of the array to the pointer
            integerPointer = integerArray;
            // use for loop and print the array address and variable using pointer
            int arrayLength = sizeof(integerArray)/sizeof(integerArray[0]);
            for( int i =0;i<arrayLength;i++){
                cout<<"Address of the Pointer: ";
                cout<<i<<" "<<integerPointer<<endl;
                cout<<"Value of the Pointer: ";
                 cout<<i<<" "<<*integerPointer<<endl;
                 integerPointer++;
            }
            }

            // Pointer to Pointer Operation
            void printPointerToPointerOperation(){
            int numberOfBirds = 100;
            int *birdPointer;
            int **pointerOfBirdPointer;

            // Assign Memory address to pointers
            birdPointer = &numberOfBirds;
            pointerOfBirdPointer = &birdPointer;

            // Print the values
            cout<<"Value: "<<numberOfBirds<<endl;
            cout<<"Value of birdPointer: "<<*birdPointer<<endl;
            cout<<"Value of pointerOfBirdPointer: "<<**pointerOfBirdPointer<<endl;
            }

            // Use of Do..While Loop
            void useOfDoWhileLoop(){
            int input;
            do{
                cout<<"Enter your value greater than 5: ";
                cin>>input;
            }while(input<6);
            cout<<"The value entered is: "<<input;
            }

            int main()
            {
                // print pointer
               // assignVariableToAPointer();

                // Print Null Pointer
               // printNullPointer();

                // print pointer Arithmatic
               //incrementPointers();

              // print pointer to pointer
              // printPointerToPointerOperation();

              // Use of Do While Loop
              useOfDoWhileLoop();
                return 0;
            }
