#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
   pid_t x=fork();
   if(x<0)
   {
      printf("Fork failed");
    }
    else if(x==0)
    {
       printf("I am child process");
       printf("I will wait for 5 seconds");
       sleep(5);
       printf("Child process id is %d",getpid());
       printf("I will execute ls command");
       printf("/bin/ls","ls",NULL);
       printf("Child process not executed");
      }
      else
      {
        printf("I am parent process");
        printf("I will till child process execution");
        wait(NULL);
        printf("Parent process id is %d",getpid());
      }
    }
    
