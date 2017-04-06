#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


quicksort: obj/main.o obj/Stopwatch.o obj/Array.o
	g++ -Wall -pedantic -o quicksort obj/main.o obj/Stopwatch.o obj/Array.o

obj/main.o: src/main.cpp inc/iRunnable.hh inc/iStopwatch.hh inc/Stopwatch.hh inc/iArray.hh inc/Array.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/Stopwatch.hh inc/iStopwatch.hh inc/iRunnable.hh
	g++ ${CPPFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

obj/Array.o: src/Array.cpp inc/Array.hh inc/iArray.hh inc/iRunnable.hh
	g++ ${CPPFLAGS} -o obj/Array.o src/Array.cpp

clean:
	rm -f obj/*.o quicksort
