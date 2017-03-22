#
#  To sa opcje dla kompilacji
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++11


algorytmy: obj/main.o obj/stoper.o obj/wykonywalny.o
	g++ -Wall -pedantic -o algorytmy obj/main.o obj/stoper.o obj/tablica.o obj/wykonywalny.o

obj/main.o: src/main.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh
	g++ ${CPPFLAGS} -o obj/tablica.o src/tablica.cpp

obj/wykonywalny.o: src/wykonywalny.cpp inc/wykonywalny.hh
	g++ ${CPPFLAGS} -o obj/wykonywalny.o src/wykonywalny.cpp
