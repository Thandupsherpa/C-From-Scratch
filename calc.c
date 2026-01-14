#include<stdio.h>
int main()
{
    int fNum;
    int sNum;
    char opr;

    printf("Enter the first number: ");
    scanf(" %d",&fNum);

    printf("Enter the second number: ");
    scanf(" %d",&sNum);

    printf("Choose an operation: ");
    scanf(" %c",&opr);

    if (opr == '+')
    {
        printf("The result of %d %c %d is: %d ",fNum,opr,sNum,fNum+sNum);
   
    
    }else if (opr == '-')
    {
         printf("The result of %d %c %d is: %d ",fNum,opr,sNum,fNum-sNum);
    }else if (opr == '*')
    {
         printf("The result of %d %c %d is: %d ",fNum,opr,sNum,fNum*sNum);
    }else if (opr == '/')
    {
         if (sNum != 0)
         {
            printf("The result of %d %c %d is: %d ",fNum,opr,sNum,fNum/sNum);
         }else{
            printf("Number not divisible by 0");
         }
         
    }else if (opr == '%')
    {
         printf("The result of %d %c %d is: %d ",fNum,opr,sNum,fNum%sNum);
    }else{
        printf("Enter a valid operation");
    }
    return 0;
}
