# Define variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g
TARGET = main
SRCS = main.cpp building.cpp elevator.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target: builds the program and runs it
all: $(TARGET)
	./$(TARGET)

# Rule to link object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Pattern rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target: removes object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)