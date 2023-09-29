CC = gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=gnu89

file: file.c
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -f file
