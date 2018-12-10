arbin	:	main.o	elem.o	arbin.o
	gcc	-o	arbin	main.o	elem.o	arbin.o
main.o	:	main.c	arbin.h
	gcc	-c	main.c
elem.o	:	elem.c
	gcc	-c	elem.c
arbin.o	:	arbin.c elem.h
	gcc	-c	arbin.c
clean	:
	rm arbin	\
	main.o	elem.o	arbin.o
