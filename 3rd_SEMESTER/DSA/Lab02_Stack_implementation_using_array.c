#include <stdio.h>
#define MAX 30

struct stack
{
    int data[MAX];
    int tos;
};

int isFull(struct stack *s)
{
    return (s->tos == MAX - 1);
}

int isEmpty(struct stack *s)
{
    return (s->tos == -1);
}

void push(struct stack *s, int data)
{
    if (isFull(s))
    {
        printf("Stack overflow.. Data cannot be pushed\n");
    }
    else
    {
        s->tos++;
        s->data[s->tos] = data;
        printf("%d pushed into stack\n", data);
    }
}

void pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack underflow... nothing to pop\n");
    }
    else
    {
        int poppedData = s->data[s->tos];
        s->tos--;
        printf("%d popped from stack\n", poppedData);
    }
}

int top(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return s->data[s->tos];
    }
}

void display(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for (int i = s->tos; i >= 0; i--)
        {
            printf("%d\n", s->data[i]);
        }
    }
}

int main()
{
    struct stack s1;
    s1.tos = -1;

    push(&s1, 45);
    push(&s1, 10);
    push(&s1, 25);

    display(&s1);

    pop(&s1);
    display(&s1);

    printf("Top element is: %d\n", top(&s1));

    return 0;
}