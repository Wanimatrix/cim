CC := gcc
CFLAGS := -I. -g -Wall
LDFLAGS := -lncurses
OBJS := cim.o mode.o window.o
HEADERS := mode.h window.h

%.o: %.c ${HEADERS}
	${CC} ${CFLAGS} -c -o $@ $<

cim: ${OBJS}
	${CC} ${CFLAGS} -o $@ $^ ${LDFLAGS}

.PHONY: clean

clean:
	rm -f *.o
