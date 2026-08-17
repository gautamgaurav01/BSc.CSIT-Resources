#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at first
void InsertAtFirst(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
}

// Insert at last
void InsertAtLast(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    struct Node *temp = head;

    if (head == NULL)
    {
        head = node;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
    }
}

// Insert at specific position
void InsertAtSpeciPos(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;

    int pos;
    printf("Enter position where you want to insert: ");
    scanf("%d", &pos);

    int size = 0;
    struct Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }

    if (pos > size)
    {
        printf("Sorry! Unable to insert at your position\n");
    }
    else
    {
        temp = head;
        int i = 1;

        while (i < pos)
        {
            temp = temp->next;
            i++;
        }

        node->next = temp->next;
        temp->next = node;
    }
}

// Traverse list
void traverse()
{
    struct Node *temp = head;

    printf("{ ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("}\n");
}

int main()
{

    InsertAtFirst(100);
    InsertAtFirst(200);
    InsertAtFirst(300);
    InsertAtLast(400);
    InsertAtSpeciPos(500);
    traverse();
    return 0;
}