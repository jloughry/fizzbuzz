target = fizzbuzz

source = $(target).c
documentation = README.md

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
	$(RM) $(target) $(documentation).bak

vi:
	$(EDITOR) $(source)

test:
	./$(target)

readme:
	$(EDITOR) $(documentation)

spell:
	aspell --lang="en" check $(documentation)

# If git prompts for a username, execute "git remote" as described in the
# entry at 20131102.1129 in the notes file; this need only be done once.
# Warning: set the respository name on the end of the command or you will
# corrupt the repository.

commit:
	make clean
	git add .
	git commit -am "commit from Makefile $(timestamp)"
	make sync

sync:
	git pull --rebase
	git push

commit-only:
	make clean
	git add .
	git commit -am "commit from Makefile $(timestamp)"

notes:
	(cd ../notes && make vi)

