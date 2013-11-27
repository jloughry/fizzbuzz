target = fizzbuzz

source = $(target).c

CC = gcc
compiler-options = -Wall -Werror
RM = rm -f

all:: $(target)

$(target): $(source) Makefile
	$(CC) $(compiler-options) -o $(target) $(source)
	make rename

rename:
	mv $(target).exe $(target)

clean::
	$(RM) $(target)

vi:
	vi $(source)

test:
	./$(target)

include common.mk

