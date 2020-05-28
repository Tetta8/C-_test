CXX = g++
TARGET = Date
CXXFLAGS = -Wall -O2 -pipe
SRCS = Date.cpp DateTest2.cpp
OBJS := $(SRCS:.cpp=.o) #SRCSの各ファイルのサフィックスの.cppを.oに変換

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	rm -f $(TARGET) $(OBJS)
