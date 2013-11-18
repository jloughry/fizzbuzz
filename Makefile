target = fizzbuzz
source = $(target).c

CC = gcc
compiler-options = -Wall
RM = rm -f
EDITOR = vi

#
# Note: make requires that we set the value of a variable OUTSIDE any rules.
#

timestamp = `date +%Y%m%d.%H%M`

all: $(target)

$(target): $(source) Makefile
	$(CC) $(compiler-options) -o $(target) $(source)
	make rename

rename:
	mv $(target).exe $(target)

clean:
	$(RM) $(target)

vi:
	$(EDITOR) $(source)

test:
	./$(target)

readme:
	$(EDITOR) README.md

commit:
	make clean
	git add .
	git commit -am "commit from Makefile $(timestamp)"
	git pull --rebase
	git push

commit-only:
	make clean
	git add .
	git commit -am "commit from Makefile $(timestamp)"

