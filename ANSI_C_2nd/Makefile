# The C Programming Language 2nd Edition

CC = gcc
CFLAGS = -std=c89 -pedantic -Wall -Wextra -Werror

SRC = $(wildcard *.c)
BIN = $(SRC:.c=)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

run:
	@make $(prog) && ./$(prog)

clean:
	rm -f $(BIN)
