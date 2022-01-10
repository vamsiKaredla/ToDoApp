#include"todoapp.h"
#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
using namespace std;
	
	static ToDoApp* m_handle;
	int fd;
	char buf[20];
	ToDoApp::ToDoApp()
	{
		cout<<"constructor of to do application class"<<endl;
	}
	 void *ToDoApp::Initialize(void* context)
	{
		m_handle = static_cast<ToDoApp *>(context);
		cout<<pthread_self()<<endl;
	//	sleep(5);
		int ret = m_handle->openFile();
		cout<<"opne file returned\t"<<ret;
		int choice = 0;
		while(choice!=3)
		{
			cout<<"Please select your choice"<<endl;
			cout<<"1)create a todo"<<endl<<"2)view my todo"<<endl<<"3)exit"<<endl;
			cin>>choice;
			switch(choice)
			{
				case 1:
					m_handle->enterIntoList();
					break;
				case 2:
					m_handle->viewMyList();
					break;
				case 3:
					cout<<"exiting app"<<endl;
					break;
				default:
					cout<<"please enter correct choice"<<endl;
			}
		}
		return NULL;
	}
	
	int ToDoApp::openFile()
	{
		fd = open("todolist.txt",O_APPEND | O_CREAT | O_RDWR,0660);
		if(fd==-1)
		{
			cout<<"error accessing data"<<endl;
			return 1;
		}
		else
			cout<<"data access point created\t"<<fd<<endl;
		return 0;
	}

	int ToDoApp::enterIntoList()
	{
		cout<<"enter title"<<endl;
	//	char* title=NULL;
	//	cin>>title;
	//	cout<<"entered title \t"<<title<<endl;
	//	strcpy(buf,title);
		size_t byteWritten = write(fd,"just writing /n",50);
		if(byteWritten<0)
		{
		//	printf("%s", explain_write(fd, "just writing /n",50));
		}
		cout<<"\n bytes written"<<static_cast<int>(byteWritten);
		return 0;
	}
	int ToDoApp::viewMyList()
	{
		cout<<"selected view my list"<<endl;
		return 0;
	}

	

