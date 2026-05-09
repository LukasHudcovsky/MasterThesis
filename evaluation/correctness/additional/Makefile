CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = test

$(TARGET): test.cpp my_parser.cpp bison_parser.tab.o
	$(CXX) $(CXXFLAGS) test.cpp my_parser.cpp bison_parser.tab.o -o $(TARGET)

bison_parser.tab.o: bison_parser.tab.c
	$(CXX) $(CXXFLAGS) -c bison_parser.tab.c

bison_parser.tab.c bison_parser.tab.h: bison_parser.y
	bison -d bison_parser.y

clean:
	rm -f *.o *.tab.c *.tab.h $(TARGET)