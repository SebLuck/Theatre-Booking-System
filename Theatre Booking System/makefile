CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

.PHONY: all clean
all : theatre

theatre : maintheatre.cpp theatre.o
	$(CXX) $(CXXFLAGS) -o $@ $^
theatre.o : theatre.cpp theatre.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm *~ *.o theatre.exe







