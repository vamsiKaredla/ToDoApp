all: runtodoapp launcher

runtodoapp: ./ToDoAppService/hello.o ./ToDoAppService/todoapp.o
	g++ ./ToDoAppService/hello.o ./ToDoAppService/todoapp.o -lpthread -o ./bin/ToDoAPP

hello.0:./ToDoAppService/hello.cpp
	g++ -c ./ToDoAppService/hello.cpp -lpthread

todoapp.0:./ToDoAppService/todoapp.cpp
	g++ -c ./ToDoAppService/todoapp.cpp -lpthread

launcher:./ToDoLauncher/launch_main.cpp
	g++ ./ToDoLauncher/launch_main.cpp -o ./bin/launcher

clean:
	rm -rf *o ./ToDoAppService/hello
