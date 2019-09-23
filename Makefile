CC=gcc
OPCOES_COMPILADOR=-I. -I/usr/include/SOIL -lglut -lGLU -lSOIL -lGLEW -lGL -lm -lSDL -lSDL_mixer
TODOS_ARQUIVOS_PONTOH =
TODOS_ARQUIVOS_OBJ = main.o desenha.o musica.o

%.o: ../%.c $(TODOS_ARQUIVOS_PONTOH)
	$(CC) -o $@ -c $< $(OPCOES_COMPILADOR)

all: $(TODOS_ARQUIVOS_OBJ)
	gcc -o main $^ $(OPCOES_COMPILADOR)

run: all
	./main

clean:
	rm *.o main
