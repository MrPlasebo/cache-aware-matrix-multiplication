CC = gcc
SRC_DIR = src

all:
	$(CC) $(SRC_DIR)/naive_matrix.c -o naive
	$(CC) $(SRC_DIR)/optimized_matrix.c -o optimized

run:
	./naive
	./optimized

clean:
	rm -f naive optimized