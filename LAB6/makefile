hw6.out:main.cpp Shape.o Circle.o Rectangle.o Triangle.o
	g++ -o hw6.out main.cpp Shape.o Circle.o Rectangle.o Triangle.o

Shape.o:Shape.cpp Shape.h
	g++ -c Shape.cpp

Circle.o:Circle.cpp Circle.h
	g++ -c Circle.cpp

Rectangle.o:Rectangle.cpp Rectangle.h
	g++ -c Rectangle.cpp

Triangle.o:Triangle.cpp Triangle.h
	g++ -c Triangle.cpp

clean:
	rm -f *.o
	rm -f hw6.out
