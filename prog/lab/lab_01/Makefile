CXX = /usr/lib/ccache/bin/clang++
OPTFLAGS = -Ofast
LDFLAGS = -Wl,-O4 -fuse-ld=lld
CFLAGS = $(OPTFLAGS) $(LDFLAGS) -flto

all:
	$(CXX) $(CFLAGS) main.cpp -o sort

clean: sort
	rm sort
