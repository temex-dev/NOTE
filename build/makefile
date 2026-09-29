CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

TARGET = main
SOURCES = ../main.cpp
OBJECTS = main.o

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

%.o: ../%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)
