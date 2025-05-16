//factors  in reverse order
#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        printf("Invalid Input!!");      // Updater
    }

    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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


    FactRev(iValue);

    return 0;

}