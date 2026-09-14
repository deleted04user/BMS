CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
LDLIBS ?= -lm

.PHONY: all clean check

all: bms

bms: bms.c utils-bms.c utils-bms.h
	$(CC) $(CFLAGS) bms.c utils-bms.c -o $@ $(LDLIBS)

check:
	$(CC) $(CFLAGS) -fsyntax-only bms.c utils-bms.c

clean:
	$(RM) bms
