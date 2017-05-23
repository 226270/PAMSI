#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


assoc: obj/main.o obj/Stopwatch.o obj/Element.o obj/List.o obj/AssocArray.o
	g++ -Wall -pedantic -o assoc obj/main.o obj/Stopwatch.o obj/Element.o obj/List.o obj/AssocArray.o

obj/main.o: src/main.cpp inc/iRunnable.hh inc/iStopwatch.hh inc/Stopwatch.hh inc/Element.hh inc/iList.hh inc/List.hh inc/iAssocArray.hh inc/AssocArray.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/iStopwatch.hh inc/Stopwatch.hh inc/iRunnable.hh
	g++ ${CPPFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

obj/AssocArray.o: src/AssocArray.cpp inc/iAssocArray.hh inc/AssocArray.hh inc/Element.hh inc/iList.hh inc/List.hh
	g++ ${CPPFLAGS} -o obj/AssocArray.o src/AssocArray.cpp

obj/List.o: src/List.cpp inc/iList.hh inc/List.hh inc/Element.hh
	g++ ${CPPFLAGS} -o obj/List.o src/List.cpp

obj/Element.o: src/Element.cpp inc/Element.hh
	g++ ${CPPFLAGS} -o obj/Element.o src/Element.cpp

clean:
	rm -f obj/*.o assoc
