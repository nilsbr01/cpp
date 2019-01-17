CXX=g++
CXXFLAGS+=-Wall -std=c++17
SRCS=*.cc vstring/*.cc
OBJS=$(subst .cc,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o main

clean:
	rm -f $(OBJS)
