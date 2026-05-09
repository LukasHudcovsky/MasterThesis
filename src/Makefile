CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = main

SRC = main.cpp reader.cpp lr.cpp slr.cpp generator.cpp helpers.cpp

$(TARGET): main.cpp reader.cpp lr.cpp slr.cpp generator.cpp helpers.cpp reader.h lr.h slr.h generator.h helpers.h definitions.h
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)