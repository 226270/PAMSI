#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


mierzenie: obj/main.o obj/Stopwatch.o obj/Stack.o
	g++ -Wall -pedantic -o mierzenie obj/main.o obj/Stopwatch.o obj/Stack.o

obj/main.o: src/main.cpp inc/Stopwatch.hh inc/Stack.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/Stopwatch.hh
	g++ ${CPPFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

obj/Stack.o: src/Stack.cpp inc/Stack.hh
	g++ ${CPPFLAGS} -o obj/Stack.o src/Stack.cpp

clean:
	rm -f obj/*.o mierzenie
