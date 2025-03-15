CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRC = src/main.cpp src/encryptor.cpp src/decryptor.cpp src/utils.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = file_encryption_tool

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	del $(OBJ) $(TARGET)  # Use 'rm' if on Linux/macOS
