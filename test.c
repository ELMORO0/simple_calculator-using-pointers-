#include <stdio.h>

void calculator(float a, float b, char op)
{
    if (op == '+')
        printf("RESULT : %.2f ", a + b);
    else if (op == '-')
        printf("RESULT : %.2f", a - b);
    else if (op == '*')
        printf("RESULT : %.2f ", a * b);
    else if (op == '/')
        printf("RESULT : %.2f ", a / b);
}

int main(void)
{

     float num1; 
     float num2;
        char operator;

     printf("Enter first number: ");
     scanf("%f", &num1);
     printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);
        while (operator != '+' && operator != '-' && operator != '*' && operator != '/')
        {
            printf("Invalid operator. Please enter a valid operator (+, -, *, /): ");
            scanf(" %c", &operator);
        }
     printf("Enter second number: ");
        scanf("%f", &num2);
        while (num2 == 0 && operator == '/')
        {
            printf("Cannot divide by zero. Please enter a non-zero number: ");
            scanf("%f", &num2);
        }
        calculator(num1, num2, operator);
    return (0);
}