CFLAGS=-fsanitize=address
OUTPUT_FILE=$(shell (echo $(FILE) | cut -d '.' -f 1))

all:
	make clean
	make build

clean:
	rm -f build

build:
	gcc -o $(OUTPUT_FILE) $(CFLAGS) $(FILE)
