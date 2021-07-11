FS=$(shell (grep "FS" .makefile_args | cut -d '=' -f 2))
FILE=$(shell (grep "FILE" .makefile_args | cut -d '=' -f 2))
OUTPUT_FILE=$(shell (echo $(FILE) | cut -d '.' -f 1))
ifeq ($(FS), 1)
  CFLAGS=-fsanitize=address
endif

all:
	make clean
	make build

clean:
	rm -f build

build:
	gcc -o $(OUTPUT_FILE) $(CFLAGS) $(FILE)
