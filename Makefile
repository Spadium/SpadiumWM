CC = gcc
CXX = g++
CFLAGS = -Wall -Werror -Wextra -std=c++2c
LIBS = `pkg-config --libs --cflags xcb x11`
SOURCES = src/main.cxx src/client.hxx src/client.cxx

all: build

build:
	$(CXX) $(SOURCES) $(CFLAGS) $(LIBS)