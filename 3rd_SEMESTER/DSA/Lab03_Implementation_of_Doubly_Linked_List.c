#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

struct Node *head = NULL;

// Insertion at first
void insertionAtFirst(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->previous = NULL;

    if (head == NULL)
    {
        head = node;
    }
    else
    {
        head->previous = node;
        node->next = head;
        head = node;
    }
}

// Insertion at last
void insertionAtLast(int data)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    node->previous = NULL;

    if (head == NULL)
    {
        head = node;
    }
    else
    {
        struct Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = node;
        node->previous = temp;
    }
}

// Delete from first
void deleteFromFirst()
{
    if (head == NULL)
    {
        printf("Nothing to Delete!!!!\n");
    }
    else
    {
        printf("Data being deleted is: %d\n", head->data);

        struct Node *temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->previous = NULL;
        }

        free(temp);
    }
}

// Delete from last
void deleteFromLast()
{
    if (head == NULL)
    {
        printf("Nothing to Delete!!!!\n");
    }
    else
    {
        struct Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        printf("Data being deleted is: %d\n", temp->data);

        if (temp->previous != NULL)
        {
            temp->previous->next = NULL;
        }
        else
        {
            head = NULL;
        }

        free(temp);
    }
}

// Traverse list
void traverse()
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function
int main()
{

    printf("\nAfter Inserting elements at First:\n");
    insertionAtFirst(100);
    insertionAtFirst(200);
    insertionAtFirst(300);
    traverse();

    printf("\nAfter Inserting elements at Last:\n");
    insertionAtLast(400);
    insertionAtLast(500);
    traverse();

    printf("\nDeleting from the First node:\n");
    deleteFromFirst();
    traverse();

    printf("\nDeleting from the Last node:\n");
    deleteFromLast();
    traverse();

    return 0;
}