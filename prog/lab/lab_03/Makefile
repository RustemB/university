CC = /usr/lib/ccache/bin/clang
OPTFLAGS = -Ofast
LDFLAGS = -Wl,-O4 -fuse-ld=lld
CFLAGS = $(OPTFLAGS) $(LDFLAGS) -flto

all: test

test: strings.o
	$(CC) $(CFLAGS) main.c -I. strings.o -o test

strings.o:
	$(CC) $(CFLAGS) strings.c -c -o strings.o

clean: test
	rm test strings.o
