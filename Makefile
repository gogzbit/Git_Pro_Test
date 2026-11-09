.PHONY: check clean dvi

SHELL=/bin/bash
CC=g++ -D_POSIX_C_SOURCE=200809L
CFLAGS=-Wall -Werror -Wextra -ggdb -std=c11

APPNAME=Prata
DIRBUILD=./build

all: install

install:
	
	mkdir -p $(DIRBUILD)
	$(CC)  $(CFFLAGS) ./main.cpp ./mylib.cpp -o $(DIRBUILD)/$(APPNAME)

uninstall:
	rm -drf $(DIRBUILD)

run:
	$(DIRBUILD)/$(APPNAME)
	
check:
	clang-format -style=Google -n ./*.cpp ./*.hpp
	clang-format -style=Google -i ./*.cpp ./*.hpp
	cppcheck --enable=all --suppress=missingIncludeSystem ./*.cpp ./*.hpp

# 	rm -f .clang-format
	
valgrind:

	valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all $(DIRFUNCTESTS)/tetris_backend_test
	
clean:

	rm -f *.out
	
git: uninstall clean

	git status
	git add *
	git commit -m"asd"
	git push origin develop