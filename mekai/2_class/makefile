CXX = g++
TARGET = test
CXXFLAGS = -Wall -O2 -pipe
SRCS = IdNo.cpp IdNoTest.cpp
OBJS := $(SRCS:.cpp=.o) #SRCSの各ファイルのサフィックスの.cppを.oに変換

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	rm -f $(TARGET) $(OBJS)
