CXX = g++
CXXFLAGS = -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -O2 -pipe -DNDEBUG
LDLIBS = 
RM = rm -f

all: main

main:
	$(CXX) $(CXXFLAGS) main.cpp add.cpp subtract.cpp multiply.cpp divide.cpp io.cpp -o calculator

clean:
	$(RM) calculator
