#include<stdio.h>
int main()
{
    char name[20];
    int age;

    printf("Enter you name: ");
    scanf("%s",name);
    printf("Hello %s \n",name);


    printf("Enter you age: ");
    scanf("%d",&age);
    printf("Your age is %d \n",age);
    return 0;
}
