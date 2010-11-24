
CFLAGS+=-Wall -Wextra
CFLAGS+=-ansi -pedantic
CFLAGS+=-O3
CFLAGS+=-g
LDFLAGS+=-lncurses 
#LDFLAGS+=-lm

all: 

unfloat: floater
	ln -s floater unfloat
