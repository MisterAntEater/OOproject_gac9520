#Gabriel Comer 1001069520

CXXFLAGS =
all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: Arm.o Part.o Battery.o Head.o Locomotor.o Torso.o test.o
	$(CXX) $(CXXFLAGS) Arm.o Part.o Battery.o Head.o Locomotor.o Torso.o test.o
Arm.o: Arm.cpp
	$(CXX) $(CXXFLAGS) -w -c Arm.cpp
Part.o: Part.cpp
	$(CXX) $(CXXFLAGS) -w -c Part.cpp
Battery.o: Battery.cpp
	$(CXX) $(CXXFLAGS) -w -c Battery.cpp
Head.o: Head.cpp
	$(CXX) $(CXXFLAGS) -w -c Head.cpp
Locomotor.o: Locomotor.cpp
	$(CXX) $(CXXFLAGS) -w -c Locomotor.cpp
Torso.o: Torso.cpp
	$(CXX) $(CXXFLAGS) -w -c Torso.cpp
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -w -c test.cpp
clean:
	rm -f *.o a.out
