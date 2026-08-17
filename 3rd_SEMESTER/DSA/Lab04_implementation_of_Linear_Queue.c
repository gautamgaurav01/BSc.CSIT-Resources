#include <stdio.h>

#define MAXSIZE 10

struct Queue
{
    int A[MAXSIZE];
    int front;
    int rear;
};

void initialize(struct Queue *q)
{
    q->front = 0;
    q->rear = -1;
}

int isEmpty(struct Queue *q)
{
    if (q->rear < q->front)
        return 1;
    return 0;
}

int isFull(struct Queue *q)
{
    if (q->rear == MAXSIZE - 1)
        return 1;
    return 0;
}

void enqueue(struct Queue *q, int data)
{
    if (isFull(q))
    {
        printf("Queue is already full !!!!\n");
    }
    else
    {
        q->rear++;
        q->A[q->rear] = data;
    }
}

void dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Nothing to delete !!!!\n");
    }
    else
    {
        int data = q->A[q->front];
        q->A[q->front] = 0;
        q->front++;
        printf("Data Being deleted : %d\n", data);
    }
}

void printQueue(struct Queue *q)
{
    printf("[ ");
    for (int i = 0; i < MAXSIZE; i++)
    {
        printf("%d ", q->A[i]);
    }
    printf("]\n");
}

int main()
{

    struct Queue q;
    initialize(&q);

    char cont = 'Y';

    while (cont == 'Y' || cont == 'y')
    {
        int choice;

        printf("\nPress 1 For Enqueue\n");
        printf("Press 2 For Dequeue\n");
        printf("Press 3 For Display Queue\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int data;
            printf("Enter Data to Queue: ");
            scanf("%d", &data);
            enqueue(&q, data);
            break;
        }

        case 2:
            dequeue(&q);
            break;

        case 3:
            printQueue(&q);
            break;

        default:
            printf("Invalid operation !!\n");
        }

        printf("Do you want to continue operation? (Y/N): ");
        scanf(" %c", &cont);
    }

    return 0;
}