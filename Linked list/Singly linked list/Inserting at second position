#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void append(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void insert_second(int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("List is empty, cannot insert at second position\n");
        return;
    }
    newnode->data = data;
    newnode->next = head->next;
    head->next = newnode;
}
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int n, data;
    printf("enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        append(data);
    }
    printf("Enter data to insert at second position: ");
    scanf("%d", &data);
    insert_second(data);
    printf("Linked List: ");
    display();
    return 0;
}
