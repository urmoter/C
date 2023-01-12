.PHONY: all compile run

all: compile

SHELL := /bin/bash

FILES := $(filter-out src/*.h.gch, $(wildcard src/*))
FILES := $(filter-out src/*.out, $(FILES))

compile:
	@echo "Compiling..."
	@gcc $(FILES)
	@echo "Done!"

run:
	@./a.out