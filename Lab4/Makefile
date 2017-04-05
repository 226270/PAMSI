#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


mierzenie: obj/main.o obj/Stopwatch.o obj/Stack.o obj/Element.o obj/List.o obj/Queue.o
	g++ -Wall -pedantic -o mierzenie obj/main.o obj/Stopwatch.o obj/Stack.o obj/Element.o obj/List.o obj/Queue.o

obj/main.o: src/main.cpp inc/Stopwatch.hh inc/Stack.hh inc/iRunnable.hh inc/iStack.hh inc/iStopwatch.hh inc/Element.hh inc/List.hh inc/iList.hh inc/iQueue.hh inc/Queue.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/Stopwatch.hh inc/iStopwatch.hh inc/iRunnable.hh inc/Element.hh inc/iQueue.hh
	g++ ${CPPFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

obj/List.o: src/List.cpp inc/List.hh inc/iList.hh inc/iRunnable.hh inc/Element.hh
	g++ ${CPPFLAGS} -o obj/List.o src/List.cpp

obj/Stack.o: src/Stack.cpp inc/Stack.hh inc/iStack.hh inc/iRunnable.hh inc/Element.hh
	g++ ${CPPFLAGS} -o obj/Stack.o src/Stack.cpp

obj/Queue.o: src/Queue.cpp inc/Queue.hh inc/iQueue.hh inc/Element.hh
	g++ ${CPPFLAGS} -o obj/Queue.o src/Queue.cpp

obj/Element.o: src/Element.cpp inc/Element.hh
	g++ ${CPPFLAGS} -o obj/Element.o src/Element.cpp

clean:
	rm -f obj/*.o mierzenie
