CC=gcc
DEPS = header.h


build: main.o rand_ranged.o
	$(CC) -o mazequest.exe main.o rand_ranged.o
	
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm *.o
	rm *.exe
