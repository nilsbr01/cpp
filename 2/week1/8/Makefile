CXX=g++
CXXFLAGS+=-Wall -std=c++17 -c
SRCS=bitset/*.cc bitset/*.h proxy/*.cc proxy/*.h 
OBJS=$(subst .cc,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRCS)

clean:
	rm -f $(OBJS)
