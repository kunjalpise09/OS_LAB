#include<stdio.h>
#include<unistd.h>
int main()
{
    int cpr;
    cpr = fork();
    
    if(cpr<0)
    {
        printf("Fork failed to create process\n");
    }
    else if(cpr==0)
    {
        printf("Process created\n");
        printf("PID of the Child Process: %d\n", getpid());
        printf("PID of the Parent Process: %d\n", getppid());
    }
    printf("PID of Child Process: %d\n", getpid()); //delete
    printf("PID of Parent Process: %d\n", getppid()); //”In parent process”
    return 0;
}
