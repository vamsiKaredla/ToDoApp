all: runtodoapp

runtodoapp: hello.o todoapp.o
	g++ hello.o todoapp.o -lpthread -o ToDoAPP

hello.0: hello.cpp
	g++ -c hello.cpp -lpthread

todoapp.o: todoapp.cpp
	g++ -c todoapp.cpp -lpthread

clean:
	rm -rf *o hello
