#include <stdio.h>

int main()
{
    float num1, num2, num3;
    char op;
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &op, &num2);
    switch (op)
    {
    case '+':
        num3 = num1 + num2;
        break;
    case '-':
        num3 = num1 - num2;
        break;
    case '*':
        num3 = num1 * num2;
        break;
    case '/':
        num3 = num1 / num2;
        break;
    default:
        printf("Invalid operator\n");
    }
    printf("%.2f %c %.2f = %.2f", num1, op, num2, num3);
}