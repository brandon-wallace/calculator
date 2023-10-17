CXX = g++
CXXFLAGS = -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pipe -O2 -DNDEBUG 
LDLIBS = 
RM = rm -f

all: main

debug: CXXFLAGS += -ggdb 
debug: main

main:
	$(CXX) $(CXXFLAGS) main.cpp add.cpp subtract.cpp multiply.cpp divide.cpp io.cpp -o calculator


clean:
	$(RM) calculator
