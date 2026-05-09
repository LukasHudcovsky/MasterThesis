CXX = g++
CXXFLAGS = -std=c++17 -Wall

PY_CFLAGS := $(shell python3-config --includes)
PY_LDFLAGS := $(shell python3-config --embed --ldflags)

TARGET = test
SRC_PATH = ../../../src/

SRC = test.cpp $(SRC_PATH)reader.cpp $(SRC_PATH)lr.cpp $(SRC_PATH)slr.cpp $(SRC_PATH)generator.cpp $(SRC_PATH)helpers.cpp

$(TARGET): test.cpp $(SRC_PATH)reader.cpp $(SRC_PATH)lr.cpp $(SRC_PATH)slr.cpp $(SRC_PATH)generator.cpp $(SRC_PATH)helpers.cpp $(SRC_PATH)reader.h $(SRC_PATH)lr.h $(SRC_PATH)slr.h $(SRC_PATH)generator.h $(SRC_PATH)helpers.h $(SRC_PATH)definitions.h
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(PY_CFLAGS) $(PY_LDFLAGS)

clean:
	rm -f $(TARGET)