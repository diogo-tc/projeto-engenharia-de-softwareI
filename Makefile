CXX = g++
CFLAGS = -c -Wall
SOURCE = main.cpp
OBJ=$(SOURCE:.copp=.o)
EXE = EXE

all: $(SOURCE) $(EXE)

$(EXE) : $(OBJ)
		$(CC) $(OBJ) -o $@


%.o: %.c
        $(CC) $(CFLAGS) $< -o $@

clean:
        rm -rf $(OBJ) $(EXE)