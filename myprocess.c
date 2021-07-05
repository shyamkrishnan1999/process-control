#include<stdio.h>
#include<unistd.h>

void odd(int);
void even(int);

void main()
{
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);

    if(fork()==0)
    {
        printf("The Child Process id is %d",getpid());
        printf("\nThe Even numbers upto %d are:\n",limit);
        even(limit);
    }
    else
    {
        printf("The parent process id is %d",getpid());
        printf("\nThe odd numbers upto %d are:\n",limit);
        odd(limit);
    }
}

void odd(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i%2==1)
            printf("%d\n",i);
    }
}

void even(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
}