//summation of non factors
#include <stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        printf("Invalid Input!!");   
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }

    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("The sum of all non-factors is : %d", iRet);

    return 0;