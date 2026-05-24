CXX = g++
CXXFLAGS = -std=c++17 -Wall -I"src" -I"vendor/rtmidi"
LDFLAGS = -lasound -lpthread

# Find all C++ files in src/
SRCS = $(shell find src -name "*.cpp") vendor/rtmidi/RtMidi.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = ArrangerEngine

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
