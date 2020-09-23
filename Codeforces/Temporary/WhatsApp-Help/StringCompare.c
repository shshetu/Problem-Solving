#include<stdio.h>
#include<string.h>    // for strcmp() function

int main()
{
    char aj1[100], aj2[100];
    int compare;

    printf("\n\nEnter 1st string: ");
    gets(aj1);

    printf("\n\nEnter 2nd string: ");
    gets(aj2);

    compare = strcmp(aj1, aj2);
    if(compare == 0)
        printf("\n\nBoth the strings are exactly same.\n\n");
    else
        printf("\n\nBoth the strings are different.\n");

    return 0;
}