CC := gcc
#CFLAGS := 
DEST := ./build/

all: recursion_mario.c
	mkdir -p build
	$(CC) recursion_mario.c -lcs50 -o $(DEST)/recursion_mario 