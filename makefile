SOURCES = image.cpp main.cpp
OBJS    = ${SOURCES:.c=.o}
CFLAGS  = `wx-config --cflags`
LDADD   = `wx-config --libs`
CC      = g++
PACKAGE = myprg

all : ${OBJS}
	${CC} -o ${PACKAGE} ${OBJS} ${LDADD}

.c.o:
	${CC} ${CFLAGS} -c $<