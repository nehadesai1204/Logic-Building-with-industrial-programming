#include<stdio.h>
void Display(int num )
{
    int iCnt = 0;
     for(iCnt=num; iCnt>=1 ; iCnt--){
        printf(" %d \n",iCnt);
     }
}
int main()                         
{
    int number;
    
 printf("Enter the frequency: ");
    scanf("%d", &number);

     Display(number);
   
     return 0;

}