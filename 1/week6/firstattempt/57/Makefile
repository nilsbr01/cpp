CXX=g++
CXXFLAGS+=-Wall -std=c++17
SRCS=tokenizer/*.cc cpu/*.cc memory/*.cc main.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o main

clean:
	rm -f $(OBJS)
