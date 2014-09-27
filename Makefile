target = fizzbuzz

source = $(target).c

CC = gcc
compiler-options = -Wall -Werror -Wextra
RM = rm -f

all:: $(target)

$(target): $(source) Makefile
	$(CC) $(compiler-options) -o $(target) $(source)
	make rename

rename:
	mv $(target).exe $(target)

help:
	@echo "The following make targets are useful:"
	@echo
	@echo "all: build the simplest version (default)."
	@echo "test: show that the programme works for n = 1..100."
	@echo "enterprise_version: build a more enterprisey version."
	@echo "clean: remove regeneratable files"

enterprise_version: $(target)_enterprise.c $(target)_enterprise.h
	$(CC) $(compiler_options) -o $(target) $(target)_enterprise.c
	make rename

clean::
	$(RM) $(target) $(target).stackdump

vi:
	vi $(source)

test: all
	./$(target)

include common.mk

