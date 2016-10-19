#Gabriel Comer 1001069520

CXXFLAGS =
all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: Head.o Torso.o Battery.o Arm.o Locomotor.o Part.o Model.o test.o
	$(CXX) $(CXXFLAGS) Head.o Torso.o Battery.o Arm.o Locomotor.o Part.o Model.o test.o
Head.o: Head.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Head.cpp
Torso.o: Torso.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Torso.cpp
Battery.o: Battery.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Battery.cpp
Arm.o: Arm.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Arm.cpp
Locomotor.o: Locomotor.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Locomotor.cpp
Part.o: Part.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Part.cpp
Model.o: Model.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 Model.cpp
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -w -c -std=c++11 test.cpp
clean:
	rm -f *.o a.out
