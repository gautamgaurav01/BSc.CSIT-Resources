#include <stdio.h>
#include <unistd.h>   /* contains fork prototype */

void main(void)
{
    printf("Here I am just before first forking statement\n");

    fork();

    printf("Here I am just after first forking statement\n");

    fork();

    printf("Here I am just after second forking statement\n");

    printf("\t\tHello World from process %d!\n", getpid());
}