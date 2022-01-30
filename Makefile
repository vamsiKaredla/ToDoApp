all: runtodoapp

runtodoapp: ./ToDoAppService/hello.o ./ToDoAppService/todoapp.o
	g++ ./ToDoAppService/hello.o ./ToDoAppService/todoapp.o -lpthread -o ToDoAPP

hello.0:./ToDoAppService/hello.cpp
	g++ -c ./ToDoAppService/hello.cpp -lpthread

todoapp.0:./ToDoAppService/todoapp.cpp
	g++ -c ./ToDoAppService/todoapp.cpp -lpthread

clean:
	rm -rf *o ./ToDoAppService/hello
