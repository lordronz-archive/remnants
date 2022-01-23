#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head)
{
    node_t *temporary = head;
    while (temporary != NULL)
    {
        printf("%d ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}

int main()
{
    node_t *head;
    node_t *temp;
    temp = new_node(69);
    head = temp;
    temp = new_node(420);
    temp->next = head;
    head = temp;
    temp = new_node(666);
    temp->next = head;
    head = temp;
    printlist(head);
    return 0;
}