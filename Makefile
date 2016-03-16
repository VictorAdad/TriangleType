CC= g++
CFLAGS=-c -Wall
LFLAGS = -lcppunit -ldl
OBJECTS = triangle.o main.o TriangleTests.o


Wtime: $(OBJECTS)
	${CC} $(LFLAGS) -o $@ $^  

%.o : %.cc
	${CC} $(CFLAGS) -c $^

clean :
	rm -Rf $(OBJECTS) Wtime
