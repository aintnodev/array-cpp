SRCS := $(wildcard src/*.cpp)
BINS := $(patsubst src/%.cpp,bin/%, $(SRCS))

all: $(BINS)

bin/%: src/%.cpp
	mkdir -p bin
	g++ $< -o $@
