# Makefile for Flyweight Pattern C++ Example

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Source files
SOURCES = main.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Target executable
TARGET = flyweight_example

# Default target
all: $(TARGET)

# Build the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJECTS) $(TARGET)

# Run the example
run: $(TARGET)
	./$(TARGET)

# Install dependencies (for Ubuntu/Debian)
install-deps:
	sudo apt-get update
	sudo apt-get install -y build-essential

# Help
help:
	@echo "Available targets:"
	@echo "  all        - Build the executable"
	@echo "  clean      - Remove build files"
	@echo "  run        - Build and run the example"
	@echo "  install-deps - Install build dependencies"
	@echo "  help       - Show this help message"

.PHONY: all clean run install-deps help