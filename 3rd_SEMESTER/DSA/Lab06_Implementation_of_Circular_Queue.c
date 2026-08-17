#include <stdio.h>

#define MAXSIZE 5

struct CircularQueue
{
    int front;
    int rear;
    int item[MAXSIZE];
};

void initialize(struct CircularQueue *cq)
{
    cq->front = MAXSIZE - 1;
    cq->rear = MAXSIZE - 1;

    for (int i = 0; i < MAXSIZE; i++)
    {
        cq->item[i] = -1;
    }
}

int isEmpty(struct CircularQueue *cq)
{
    if (cq->rear == cq->front)
        return 1;
    return 0;
}

int isFull(struct CircularQueue *cq)
{
    if (cq->front == (cq->rear + 1) % MAXSIZE)
        return 1;
    return 0;
}

void enqueue(struct CircularQueue *cq, int data)
{
    if (isFull(cq))
    {
        printf("Queue is already full !!!!\n");
    }
    else
    {
        cq->rear = (cq->rear + 1) % MAXSIZE;
        cq->item[cq->rear] = data;
    }
}

void dequeue(struct CircularQueue *cq)
{
    if (isEmpty(cq))
    {
        printf("Nothing to delete !!!!\n");
    }
    else
    {
        cq->front = (cq->front + 1) % MAXSIZE;
        int data = cq->item[cq->front];
        cq->item[cq->front] = -1;

        printf("Data Being deleted : %d\n", data);
    }
}

void printQueue(struct CircularQueue *cq)
{
    printf("[ ");
    for (int i = 0; i < MAXSIZE; i++)
    {
        printf("%d ", cq->item[i]);
    }
    printf("]\n");
}

int main()
{

    struct CircularQueue cq;
    initialize(&cq);

    enqueue(&cq, 100);
    enqueue(&cq, 200);
    enqueue(&cq, 300);
    enqueue(&cq, 400);
    enqueue(&cq, 500);

    printQueue(&cq);

    dequeue(&cq);
    printQueue(&cq);

    enqueue(&cq, 600);
    dequeue(&cq);
    return 0;
}