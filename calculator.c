#include <stdio.h>
int main()
 {
    double a,b;
    char c;
    double result;
    printf("Please enter the first number and second number with a space : ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("Choose from the following operations to be applied :- '+' ");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
      result=a+b;
      break;
    default:
    printf("You have not chosen appropriate operation");
      break;
    };
    printf("The application of operation %c on two numbers yield result : %.3lf",c,result);
    return 0;
 }