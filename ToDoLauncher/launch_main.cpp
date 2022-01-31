#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>

void launch_HMI()
{
	printf("launch Hmi pricess\n");

}

void launch_Service()
{
	printf("lauch Service process\n");
	int status = execl("./ToDoAPP","./ToDoApp",NULL);
	if(status == -1)
	{
		printf("failed to launch process\n");
		perror("Error: ");

	}

}

int main()
{
	printf("hello this is the launcher process");
	pid_t cpid;
	int status =0;
	cpid = fork();
	if(cpid==0)
	{
		launch_Service();
	}
	else
	{
       		 /* waiting for child process to exit*/
		    printf("\n Parent executing before wait(), child process created by parent is = (%d)\n",cpid);
       		 cpid = wait(&status); /* waiting for child process to exit*/
        	printf("\n wait() in parent done\nParent pid = %d\n", getpid());
        	printf("\n cpid returned is (%d)\n",cpid);
        	printf("\n status is (%d)\n",status);
	}
	
	return 0;
}
