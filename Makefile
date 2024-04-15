
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: clean fclean all

all: my_ngram

my_ngram: my_ngram.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f my_ngram
