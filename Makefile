#Gabriel Comer 1001069520

CXXFLAGS =
all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: Arms.o Part.o Locomotor.o Battery.o Head.o Torso.o
    $(CXX) $(CXXFLAGS) Arms.o Parts.o Locomotor.o Battery.o Head.o Torso.o
Arms.o: Arms.cpp
    $(CXX) $(CXXFLAGS) -w -c Arms.cpp
Part.o: Part.cpp
    $(CXX) $(CXXFLAGS) -w -c Part.cpp
Locomotor.o: Locomotor.cpp
    $(CXX) $(CXXFLAGS) -w -c Locomotor.cpp
Battery.o: Battery.cpp
    $(CXX) $(CXXFLAGS) -w -c Battery.cpp
Head.o: Head.cpp
    $(CXX) $(CXXFLAGS) -w -c Head.cpp
test.o: test.cpp
    $(CXX) $(CXXFLAGS) -w -c test.cpp
clean:
	rm -f *.o a.out
