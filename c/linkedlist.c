#include <stdio.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    int *numbers = NULL;
    while (true)
    {
        int number;
        printf("number : ");
        scanf("%d", &number);

        bool found = false;
        for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
        {
            if (ptr->number == number)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            // Allocate space for numbers
            node *n = malloc(sizeof(node));
            if (!n)
            {
                return 1;
            }
            // Add number to list

            n->number = number;
            n->next = NULL;
            if (numbers)
            {
                for (node *ptr = numbers; ptr != NULL; ptr = ptr->next)
                {
                    if (!ptr->next)//same as ptr->next == NULL
                    {
                        ptr->next = n;
                        break;
                    }
                }
            }
            else
            {
                numbers = n;
            }
        }
    }

}