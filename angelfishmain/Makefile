CXX = clang++
CXXFLAGS = -std=c++17 -Iinclude -g
LDFLAGS = -Llib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:.cpp=.o)

TARGET = build/game

all:
	$(CXX) $(CXXFLAGS) $(SRC) $(LDFLAGS) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)