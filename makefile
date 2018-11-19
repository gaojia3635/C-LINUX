20131921_gaojianxiang:main.o link3.o link2.o pid.o min.o
	gcc main.o link3.o link2.o pid.o min.o -o 20131921_gaojianxiang
main.o:main.c zhs.h
	gcc main.c -c
link3.o:link3.c
	gcc link3.c -c
link2.o:link2.c
	gcc link2.c -c
pid.o:pid.c
	gcc pid.c -c
min.o:min.c
	gcc min.c -c