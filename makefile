.PHONY: all compile run

all: compile

SHELL := /bin/bash

FILES := $(filter-out src/*.h.gch, $(wildcard src/*))
FILES := $(filter-out src/*.out, $(FILES))
FILES := $(filter-out src/*.o, $(FILES))

compile:
	@echo "Compiling..."
	@gcc $(FILES)
	@echo "Done!"

run:
	@./a.out

clean:
	@rm src/*.h.gch
	@rm *.out
	@echo "Done!"