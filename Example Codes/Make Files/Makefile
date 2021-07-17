all:all.out

CC=arm-linux-gnueabi-gcc
CXX=arm-linux-gnueabi-gxx
LD=arm-linux-gnueabi-gcc
LDFLAGS=-static
CFLAGS=-g

all.out:test.o sum.o sqr.o
	${LD} $^ -o $@ ${LDFLAGS}
test.o:test.c fun.h
	${CC} $< -c
%.o:%.c fun.h
	${CC} $< -c
	
clean:
	rm -rf *.o *.out
