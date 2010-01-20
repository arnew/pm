
CFLAGS+=-ansi -pedantic -Wall -Wextra
LDFLAGS+=-lm # zum beispiel

program: program.o foo.o bar.o

clean: 
	rm -rf foo.o bar.o program.o program

foo.o: header.h

bar.o: header.h

program.o: header.h

