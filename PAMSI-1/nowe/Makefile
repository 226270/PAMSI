#
#  To sa opcje dla kompilacji
#
CPPFLAGS = -c -g -Iinc -Wall -pedantic

Testownik.out: obj/main.o obj/iTestowany.o obj/iZegar.o obj/Zegar.o obj/iTablica.o obj/Tablica.o 
	g++ -Wall -pedantic -o Testownik.out obj/main.o obj/iTestowany.o obj/iTablica.o obj/Tablica.o obj/iZegar.o obj/Zegar.o

obj/main.o: src/main.cpp inc/iTestowany.hh inc/iZegar.hh inc/Zegar.hh inc/iTablica.hh inc/Tablica.hh 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/iTestowany.o: src/iTestowany.cpp inc/iTestowany.hh
	g++ ${CPPFLAGS} -o obj/iTestowany.o src/iTestowany.cpp

obj/iZegar.o: src/iZegar.cpp inc/iZegar.hh
	g++ ${CPPFLAGS} -o obj/iZegar.o src/iZegar.cpp

obj/Zegar.o: src/Zegar.cpp inc/Zegar.hh
	g++ ${CPPFLAGS} -o obj/Zegar.o src/Zegar.cpp

obj/iTablica.o: src/iTablica.cpp inc/iTablica.hh
	g++ ${CPPFLAGS} -o obj/iTablica.o src/iTablica.cpp

obj/Tablica.o: src/Tablica.cpp inc/Tablica.hh
	g++ ${CPPFLAGS} -o obj/Tablica.o src/Tablica.cpp

clean:
	rm -f obj/*.o Testownik.out