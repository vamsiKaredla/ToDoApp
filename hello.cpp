#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include"todoapp.h"
#include<pthread.h>
using namespace std;
int main()
{
	pthread_t t1;
	cout<<"Starting To DO Application"<<endl;
	ToDoApp m_toDoApp;
	pthread_create(&t1,NULL,&ToDoApp::Initialize,&m_toDoApp);
	cout<<pthread_self()<<endl;

	pthread_join(t1,0);

	cout<<"exiting main"<<endl;
	exit(0);

}

