CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
SOURCES = src/main.c src/linear_search.c src/binary_search.c
TARGET = search_demo

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCES) include/search.h
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) $(TARGET).exe
