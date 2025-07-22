CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c17
LIBS = -lX11
SOURCES = src/main.c

all: build

build:
	$(CC) $(SOURCES) $(CFLAGS) $(LIBS)