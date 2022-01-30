#include<iostream>

 class ToDoApp
{
	public:
		ToDoApp();
		static void* Initialize(void* context);
//		static ToDoApp* m_handle;
		int openFile();
		int enterIntoList();
		int viewMyList();
};
