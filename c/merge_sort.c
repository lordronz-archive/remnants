#include <stdio.h>
#include <stdlib.h>

void merge(int numbers[], int first, int mid, int last)
{
    int i, j, k;
    int n1 = mid - first + 1;
    int n2 = last - mid;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = numbers[first + i];
    for (j = 0; j < n2; j++)
        R[j] = numbers[mid + 1 + j];
    
    i = 0;
    j = 0;
    k = first;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            numbers[k] = L[i];
            i++;
        }
        else
        {
            numbers[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        numbers[k] = L[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        numbers[k] = R[j];
        k++;
        j++;
    }
}

void mergeSort(int numbers[], int first, int last)
{
    if (first < last)
    {
        int mid = (first + last) / 2;
        mergeSort(numbers, first, mid);
        mergeSort(numbers, mid + 1, last);

        merge(numbers, first, mid, last);
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

    mergeSort(numbers, 0, n - 1);

    printArray(numbers, n);
}