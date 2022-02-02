#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>

void launch_HMI()
{
	printf("launch Hmi pricess\n");
	int status = execl("./ToDoHmi","./ToDoApp",NULL);
        if(status == -1)
        {
                printf("failed to launch process\n");
                perror("Error: ");

        }
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
	printf("hello this is the launcher process\n");
	pid_t servicePid = fork();
	pid_t hmiPid;
	int serviceStatus;
	int hmiStatus;
	if(servicePid>0)
	{
		printf("i am a parent process %d\n",getpid());
		hmiPid = fork();
		if(hmiPid==0)
		{
			printf("iam the second child process i'll start the HMI process %d",getpid());
			launch_HMI();
		}

	}
	else if(servicePid==0)
	{
		printf("i am the first child process i'll create the SErvice process %d",getpid());
		launch_Service();
	}
	hmiPid = waitpid(hmiPid,&hmiStatus,0);
	servicePid = waitpid(servicePid,&serviceStatus,0);


	return 0;
}
