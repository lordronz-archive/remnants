#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int numbers[], int len)
{
    int i, j, temp, flag;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            flag = 0;
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                flag = 1;
            }
        }
        if (!flag)
        {
            break;
        }
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
}

int main()
{
    int n, i;
    int *numbers;
    printf("How many numbers do you want to sort : ");
    scanf("%d", &n);
    numbers = (int *)malloc(n * sizeof(int));
    printf("What are the numbers : \n");
    for (i = 0; i < n; i++)
        scanf("%d", (numbers + i));

    bubbleSort(numbers, n);

    printArray(numbers, n);
}