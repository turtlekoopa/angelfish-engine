UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
	CXX = g++
else
	CXX = clang++
endif

CXXFLAGS = -std=c++17 -Iinclude -g

TARGET = build/game

SRC = $(shell find src -name "*.cpp")
OBJ = $(SRC:.cpp=.o)

RAYLIB_CFLAGS := $(shell pkg-config --cflags raylib)
RAYLIB_LIBS := $(shell pkg-config --libs raylib)

ifeq ($(UNAME_S),Darwin)
	LDFLAGS = $(RAYLIB_LIBS) \
		-framework OpenGL \
		-framework Cocoa \
		-framework IOKit \
		-framework CoreVideo
else
	LDFLAGS = $(RAYLIB_LIBS)
endif

all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p build
	$(CXX) $(CXXFLAGS) $(OBJ) $(LDFLAGS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(RAYLIB_CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)