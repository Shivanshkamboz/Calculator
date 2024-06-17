#include<stdio.h>
int main()
{
    double num1;
    double num2;
    char operator;
    printf("enter the first number: ");
    scanf("%lf",&num1);
    printf("enter the operator: ");
    scanf(" %c",&operator);
    printf("enter the second number: ");
    scanf("%lf",&num2);
    if(operator=='+')
    {
        printf("%f",num1+num2);
    }
    else if(operator=='-')
    {
        printf("%f",num1-num2);      
    }
    else if(operator=='*')
    {
        printf("%f",num1*num2);
    }
    else if(operator=='/')
    {
        printf("%f",num1/num2);
    }
    else
    {
        printf("invalid statement");
    }
    return 0;
    
    
}