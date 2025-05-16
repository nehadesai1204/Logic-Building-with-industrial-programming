/////////////////////////////////////////////////////////////////////////////
//
//  File name :     program4.c
//  Description :   program to calculate multiplication of all digits
//  Author :        Neha Desai
//  Date :          16-05-2025
//
/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        
    }
    return iMult;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : ");

    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("The multiplication of all digits is : %d", iRet);

    return 0;

}