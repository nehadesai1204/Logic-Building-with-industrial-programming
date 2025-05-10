#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int iNum = 2;

    while(iCnt < iNo)
    {
        printf("%d" , iNum);
        iNum += 2;
        iCnt++ ;
    }

    printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("enter the number : \n");
    scanf("%d" , &ivalue);

    PrintEven(ivalue);

    return 0;
}