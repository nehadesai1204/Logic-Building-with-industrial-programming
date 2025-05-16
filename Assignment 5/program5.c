//Used to Display multiples of number till 5
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iAns = iNo * iCnt;

        printf("%d\n", iAns);

    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}