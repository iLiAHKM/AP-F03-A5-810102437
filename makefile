CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
LDFLAGS = -lsfml-graphics -lsfml-audio -lsfml-system -lsfml-window

# Target executable name
TARGET = /source/main.out

# Source files and object files
SRCS = /source/game.cpp /source/main.cpp
OBJS = $(SRCS:.cpp=.o)
SRCDIR = source
INCDIR = include
OBJDIR = obj
BINDIR = .
# Default rule
all: $(TARGET)

# Linking the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Compiling source files into object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(wildcard $(INCDIR)/*.hpp)
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cleaning the build
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets to avoid conflicts with file names
.PHONY: all clean