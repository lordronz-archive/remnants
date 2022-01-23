#include <stdio.h>

void input(int (*arr)[2], int *i, int *j)
{
    for (*i = 0; *i < 2; (*i)++)
    {
        for (*j = 0; *j < 2; (*j)++)
        {
            scanf("%d", (*(arr + *i) + *j));
        }
    }
}

void determinant(int (*arr)[2])
{
    int res;
    res = (*(*(arr + 0) + 0)) * (*(*(arr + 1) + 1)) - (*(*(arr + 0) + 1)) * (*(*(arr + 1) + 0));
    printf("%d", res);
}

int main()
{
    int arr[2][2], i, j;
    input(arr, &i, &j);
    determinant(arr);
    return 0;
}
