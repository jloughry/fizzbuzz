target = fizzbuzz

source = $(target).c

CC = gcc
compiler-options = -Wall
RM = rm -f
EDITOR = vi

include ../Makefiles/git1.mk

all: $(target)

include ../Makefiles/git2.mk

$(target): $(source) Makefile
	$(CC) $(compiler-options) -o $(target) $(source)
	make rename

rename:
	mv $(target).exe $(target)

clean:
	$(RM) $(target) $(documentation).bak

vi:
	$(EDITOR) $(source)

test:
	./$(target)

spell:
	aspell --lang="en" check $(documentation)

commit-only:
	make clean
	git add .
	git commit -am "commit from Makefile $(timestamp)"

notes:
	(cd ../notes && make vi)

