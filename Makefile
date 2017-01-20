./bin/main: bin obj ./obj/main.o ./obj/func.o
	gcc ./obj/main.o ./obj/func.o -o ./bin/main -lm

./obj/main.o: ./main.c
	gcc -c ./main.c -o ./obj/main.o

./obj/func.o: ./func.c
	gcc -c ./func.c -o ./obj/func.o

bin:  
	mkdir bin

obj: 
	mkdir obj

.PHONY: clean
clean:
	rm -f -r bin/ obj/