#include <stdio.h>
int main()
{

    int i, num, temp = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num == 1)
    {
        printf("1 is PRIME number");

    }
    else
    {
        if(num % 2 == 0)
        {
            printf("the given number %d is NOT prime", num);
        }
        else
        {
            for (i = 3; i <= num / 2; i = i+2)
            {
                if (num % i == 0)
                {
                    printf("the given number %d is NOT prime", num);

                    temp = 1;

                    break;
                }
            }
            if(temp == 0)
            {
                printf("the given number %d is PRIME NUMBER", num);
            }
        }
    }
    return 0;
}

