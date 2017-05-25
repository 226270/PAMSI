#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


avl: obj/main.o obj/Stopwatch.o obj/Node.o obj/AVL.o
	g++ -Wall -pedantic -o avl obj/main.o obj/Stopwatch.o obj/Node.o obj/AVL.o

obj/main.o: src/main.cpp inc/iRunnable.hh inc/iStopwatch.hh inc/Stopwatch.hh inc/Node.hh inc/AVL.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/iStopwatch.hh inc/Stopwatch.hh inc/iRunnable.hh
	g++ ${CPPFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

obj/AVL.o: src/AVL.cpp inc/AVL.hh inc/Node.hh inc/iRunnable.hh
	g++ ${CPPFLAGS} -o obj/AVL.o src/AVL.cpp

obj/Node.o: src/Node.cpp inc/Node.hh
	g++ ${CPPFLAGS} -o obj/Node.o src/Node.cpp

clean:
	rm -f obj/*.o quicksort
