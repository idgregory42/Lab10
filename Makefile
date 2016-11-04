AutomatedMakefile = am
CC = g++
CXXFLAGS = -Wno-deprecated-declarations -g -O0

PROJECT_PATH = $(CURRENT_DIR)


INC_DIRS = -I$(CURRENT_DIR)/CSC2110
LIB_DIRS = -L$(CURRENT_DIR)/CSC2110 



LIBS = $(LDFLAGS) -lCSC2110

COMPILE = $(CC) $(CXXFLAGS) $(INC_DIRS) -c 
LINK = $(CC) $(CXXFLAGS) $(LIB_DIRS)



FILES = HybridDriver.o
EXECUTABLE = Lab08.exe

all: Lab08
	$(EXECUTABLE)

Lab08: 				$(FILES)
				$(LINK) $(FILES) $(LIBS) -o $(EXECUTABLE)

HybridDriver.o:	           HybridDriver.cpp
				$(COMPILE) HybridDriver.cpp