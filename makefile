OBJS = main.o
CC = g++
CFLAGS = -Wall -g
#LIBS =
EXEC = output

output: $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

main.o: main.cpp
	g++ -c main.cpp
	
clean: 
	rm -f $(EXEC) *.o

# target: dependencies
#	command(s)