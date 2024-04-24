a.exe: pal.o module1.o
	gcc pal.o module1.o 
module1.o : module1.c ud.h
	gcc -c module1.c 
pal.o : pal.c ud.h
	gcc -c pal.c