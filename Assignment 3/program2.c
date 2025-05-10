#include <stdio.h>

void PrintEvenFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(int i = 1; i<= iNo ; i++)
    {
        if((iNo % i==0) && (i % 2 == 0))
        {
            printf("%d" ,  i);
        }
    }

    printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("enter the number : \n");
    scanf("%d" , &ivalue);

    PrintEvenFactor(ivalue);

    return 0;
}