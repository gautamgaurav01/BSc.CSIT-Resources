#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack structure
struct Stack
{
    char items[MAX];
    int top;
};

// Stack operations
void push(struct Stack *s, char c)
{
    s->items[++s->top] = c;
}

char pop(struct Stack *s)
{
    return s->items[s->top--];
}

char peek(struct Stack *s)
{
    return s->items[s->top];
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

// Function to return precedence
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Infix to postfix conversion
void infixToPostfix(char exp[])
{
    struct Stack st;
    st.top = -1;

    char result[MAX];
    int k = 0;

    for (int i = 0; i < strlen(exp); i++)
    {
        char c = exp[i];

        // If operand
        if (isalnum(c))
        {
            result[k++] = c;
        }

        // If '('
        else if (c == '(')
        {
            push(&st, c);
        }

        // If ')'
        else if (c == ')')
        {
            while (!isEmpty(&st) && peek(&st) != '(')
            {
                result[k++] = pop(&st);
            }
            pop(&st);
        }

        // Operator
        else
        {
            while (!isEmpty(&st) && prec(c) <= prec(peek(&st)))
            {
                result[k++] = pop(&st);
            }
            push(&st, c);
        }
    }

    // Pop remaining elements
    while (!isEmpty(&st))
    {
        result[k++] = pop(&st);
    }

    result[k] = '\0';

    printf("Postfix Expression: %s\n", result);
}

int main()
{
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i";

    infixToPostfix(exp);

    return 0;
}