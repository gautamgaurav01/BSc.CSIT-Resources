#include<stdio.h>
void largest_among_three_numbers(int var1,int var2, int var3)
{
    if (var1 >= var2)
    {
        if (var1 >= var3)
        {
            printf("%d is the largest number.", var1);
        }
        else
        {
            printf("%d is the largest number.", var3);
        }
    }
    else
    {
        if (var2 >= var3)
        {
            printf("%d is the largest number.", var2);
        }
        else
        {
            printf("%d is the largest number.", var3);
        }
    }
}
int main()
{
    int var1, var2, var3;
    printf("Enter three numbers:\t ");
    scanf("%d %d %d", &var1, &var2, &var3);
    largest_among_three_numbers(var1,var2,  var3);
    return 0;
}


