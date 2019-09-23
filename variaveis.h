
//Valores e variaveis utilizadas no game

#define Largura 160
#define Altura 90
#define WORD_LENGTH 64

int MenuOn = 1;
int escolherOpcao = 1;
int escolherEscR = 1;
int escOn = 0;
int restartOn = 0;

int teclaE = 0;
int iniciaJogo = 1;

char sPontuacao[WORD_LENGTH];

int controllscore = 0;
float pontuacao = 0;
float controlaDificuldade = 200;
int controllsom = 0;

int DeslocarOn = 0;    // Movimentacao dos objetos frente ao eixo X.
int AgacharOn = 0;
int agachar = 5; // Slide do personagem
int ColidirOn = 0;  // Colisao do personagem com os objetos.
int JumpOn = 0;   // Pulo do personagem.
int PausarOn = 0; // Pausar o game.
int timer = 40; // Valor do timer.
float aumentaDificuldade = 1.3 ;

float jump = 5; // Valor do salto/pulo.
float jumpBoost = 0.5;  // Incremento do pulo ( variacao do y ).
float pastJump = 5;   // Variavel que volta ao antigo valor.
float speedX = 2; // Valor que fará o deslocamento no eixo X dos objetos.
int i = 1; // variavel para variar textura do personagem
int j = 1; // variavel para obstaculo voador
int k = 1; // variavel para obstaculo de chao
int c = 1; // variavel que controla blade
int a = 1; // variavel que controla fire

int vidas = 3;
int controllvidas = 0;
int controllcoin = 0;
int controlllife = 0;
int controllinimigos = 1;

 GLuint texturaP1,texturaP2,texturaP3, texturaP4,texturaP5, texturaP6, texturaP7, texturaP8, texturaP9;
 GLuint texturaCavalo1, texturaCavalo2, texturaCavalo3 ,texturaCavalo4;
 GLuint  texturaDemonio1, texturaDemonio2, texturaDemonio3,texturaDemonio4, texturaDemonio5, texturaDemonio6;
 GLuint  texturaFire1, texturaFire2, texturaFire3,texturaFire4, texturaFire5;
 GLuint texturablade1 , texturablade2;
 GLuint texturaColisao ,texturaAgachar ,texturaPulo,texturaVida;
 GLuint texturaBack ,texturaBack2 ,texturaMiddle,texturaGameOver;
 GLuint texturaMiddle2 ,texturaHouse,texturaHouse2 ,texturaChao ,texturaChao2;
 GLuint texturaStart,texturaCredits,texturaOptions,texturaLogo,texturaEscolha,texturaInfo,texturaDentroCredits;
 GLuint texturaOk,texturaCancel,texturaExit,texturaInicial;
 GLuint texturaCoin,texturaLife;

quadrado personagem,cavalo,morcego,blade,fire,coin,life; 

quadrado back = {0,0,90,160};
quadrado back2 = {160,0,90,160};
quadrado middle = {0,0,90,160};
quadrado middle2 = {160,0,90,160};
quadrado house = {0,0,90,160};
quadrado house2 = {160,0,90,160};
quadrado chao = {0,0,90,160};
quadrado chao2 = {160,0,90,160};
quadrado gameover = {50,75,15,60};
quadrado vida1 = {0,85,5,5};
quadrado vida2 = {5,85,5,5};
quadrado vida3 = {10,85,5,5};

opcaoMenu start = {65,95,30,45};
opcaoMenu options = {65,95,45,60};
opcaoMenu credits = {65,95,60,75};
opcaoMenu logo = {50,110,75,90};
opcaoMenu cancel = {65,95,45,60};
opcaoMenu ok = {65,95,60,75};
opcaoMenu escolha = {65,95,60,75};
opcaoMenu escolha2 = {65,95,60,75};
opcaoMenu info = {0,160,0,90};
opcaoMenu info2 = {0,160,0,90};
