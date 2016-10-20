#Gabriel Comer 1001069520

CXXFLAGS =
all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: Head.o Torso.o Battery.o Arm.o Locomotor.o Part.o Model.o PM.o ModelCatalog.o Order.o MainMenu.o
	$(CXX) $(CXXFLAGS) Head.o Torso.o Battery.o Arm.o Locomotor.o Part.o Model.o PM.o ModelCatalog.o Order.o MainMenu.o
Head.o: Head.cpp
	$(CXX) $(CXXFLAGS) -w -c Head.cpp
Torso.o: Torso.cpp
	$(CXX) $(CXXFLAGS) -w -c Torso.cpp
Battery.o: Battery.cpp
	$(CXX) $(CXXFLAGS) -w -c Battery.cpp
Arm.o: Arm.cpp
	$(CXX) $(CXXFLAGS) -w -c Arm.cpp
Locomotor.o: Locomotor.cpp
	$(CXX) $(CXXFLAGS) -w -c Locomotor.cpp
Part.o: Part.cpp
	$(CXX) $(CXXFLAGS) -w -c Part.cpp
Model.o: Model.cpp
	$(CXX) $(CXXFLAGS) -w -c Model.cpp
ModelCatalog.o: ModelCatalog.cpp
	$(CXX) $(CXXFLAGS) -w -c ModelCatalog.cpp
PM.o: PM.cpp
	$(CXX) $(CXXFLAGS) -w -c PM.cpp
MainMenu.o: MainMenu.cpp
	$(CXX) $(CXXFLAGS) -w -c MainMenu.cpp
Order.o: Order.cpp
	$(CXX) $(CXXFLAGS) -w -c Order.cpp
clean:
	rm -f *.o a.out
