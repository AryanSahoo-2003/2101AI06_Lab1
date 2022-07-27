#include <stdio.h>
#include <math.h>
int main()
 {
    double a,b;
    char c;
    double result;
    printf("Please enter the first number and second number with a space : ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("Choose from the following operations to be applied :- '+','-','*','/','^' ");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
      result=a+b;
      break;
    case '-':
      result=a-b;
      break;
    case '*':
      result=a*b;
      break;
    case '/':
      result=a/b;
      break;
    case '^':
      result =pow(a,b);
      break;
    default:
    printf("You have not chosen appropriate operation");
      break;
    };
    printf("The result of %lf %c %lf is : %.3lf",a,c,b,result);
    return 0;
 }