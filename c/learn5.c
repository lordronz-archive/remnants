#include <stdio.h>
int main(void)
{
    float price = 6.50, new_price;
    int increase = 2;
    char c, d;
    c = 'd';
    d = c;
    printf("d = %c\n", d);
    new_price = price + increase;
    printf("New price is %4.2f", new_price);
    /* Output: New price is 8.50 */
    return 0;
    
}