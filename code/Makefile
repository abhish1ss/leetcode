FS=$(shell (grep "FS" .makefile_args | cut -d '=' -f 2))
FILE=$(shell (grep "FILE" .makefile_args | cut -d '=' -f 2))
OUTPUT_FILE=binary
CFLAGS=-fsanitize=address -g

all:
	make clean
	make build

clean:
	rm -f $(OUTPUT_FILE) 

build:
	gcc -o $(OUTPUT_FILE) $(CFLAGS) $(FILE)
