#include <math.h>
#include <stdio.h>

int main()
{
    float a, b, c, D, root1, root2, i;
    printf("Enter values of a, b, c of quadratic equation (ax^2 + bx + c): ");
    scanf("%f %f %f", &a, &b, &c);
    D = (b * b) - 4 * a * c;
    switch (D > 0)
    {
    case 1:
        root1 = (-b + sqrt(D)) / 2 * a;
        root2 = (-b - sqrt(D)) / 2 * a;
        printf("Root 1 = %.3f\nRoot 2 = %.3f", root1, root2);
        break;
    case 0:
        switch (D < 0)
        {
        case 1:
            root1 = root2 = -b / 2 * a;
            i = sqrt(-D) / 2 * a;
            printf("Two distinct complex roots exists: %.2f + i %.2f and %.2f - i %.2f ", root1, i, root2, i);
            break;
        case 0:
            root1 = -b / (2 * a);
            printf("Two equal and real roots exists: %.2f and %.2f", root1, root1);
            break;
        }
    }
}