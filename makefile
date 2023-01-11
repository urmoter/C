.PHONY: all compile run

all: compile

SHELL := /bin/bash

FILES := $(filter-out src/LL.h.gch, $(wildcard src/*))
FILES := $(filter-out src/a.out, $(FILES))

compile:
	@echo "Compiling..."
	@gcc $(FILES)
	@echo "Done!"

run:
	@./src/a.out