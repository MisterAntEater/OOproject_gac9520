#Gabriel Comer 1001069520

CXXFLAGS =
all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: Arms.o Part.o Battery.o test.o
	$(CXX) $(CXXFLAGS) Arms.o Part.o Battery.o test.o
Part.o: Part.cpp
	$(CXX) $(CXXFLAGS) -w -c Part.cpp
Battery.o: Battery.cpp
	$(CXX) $(CXXFLAGS) -w -c Battery.cpp
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -w -c test.cpp
clean:
	rm -f *.o a.out
