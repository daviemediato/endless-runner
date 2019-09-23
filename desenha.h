

typedef struct QuadradoMenu { //Coordenadas de cada opcao do menu .

    int x1; 
    int x2;
    int y1;
    int y2;

}opcaoMenu;

typedef struct Quadrado { // Coordenadas da struct quadrado.
    float x;         
    float y;        
    float tamanho;
    float largura;
}quadrado;


void desenhaMenu (opcaoMenu opcao,GLuint textura);
void desenhaObjetos(quadrado objeto,GLuint textura);
