// to display non factors
#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        printf("Invalid Input!!");   
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n", iCnt);
        }

    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);


    NonFact(iValue);

    return 0;

}