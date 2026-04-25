#include <stdio.h>

void calculator(float *num1, float *num2, float *sum, float *diff, float *mltp, float *div)
{
    *sum =  *num1 + *num2;
    *diff = *num1 - *num2;
    *mltp = *num1 * *num2;
    
    if (*num2 == 0)
        *div = 0;
    else
        *div = *num1 / *num2;
}

int main(void)
{
    float num1, num2;
    float sum, diff, mltp, div;

    printf("PLEASE ENTER NUM 1 : ");
    scanf("%f", &num1);
    printf("ENTER NUM 2 : ");
    scanf("%f", &num2);

    calculator(&num1, &num2, &sum, &diff, &mltp, &div);

    printf("SUM = %.2f \nDIFF = %.2f \nMLTP = %.2f\n", sum, diff, mltp);
    
    if (num2 == 0)
        printf("DIV: Error (Division by zero)\n");
    else
        printf("DIV = %.2f\n", div);

    return (0);
}