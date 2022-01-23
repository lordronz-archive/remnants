#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...)
{
    va_list nums;
    va_start(nums, count);
    int i = 0, sum = 0;
    for (i = 0; i < count; i++)
    {
        sum += va_arg(nums, int);
    }
    va_end(nums);
    return sum;
}

int main()
{
    printf("%d", sum(5, 100, 200, 150, -30, 0));
    return 0;
}