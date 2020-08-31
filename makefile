timer: main.o processingtimer.o
		g++ -o timer main.o processingtimer.o
main.o:	main.cpp
		g++ -c main.cpp
processingtimer.o:	processingtimer.cpp
		g++ -c processingtimer.cpp
clean:;         rm -f *.o *~ $(timer)
