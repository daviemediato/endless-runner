#include "biblioteca.h"
#include "desenha.h"
#include "musica.h"
#include "variaveis.h"

void desenhaInimigo2(void)
{
    if(iniciaJogo == 0){
        if(j==12)
            j=1;
        glColor3f(1, 1, 1);
        glEnable(GL_TEXTURE_2D);
        if(j==1 || j==2)
            glBindTexture(GL_TEXTURE_2D, texturaDemonio1);
        if(j==3 || j==4)
            glBindTexture(GL_TEXTURE_2D, texturaDemonio2);
        if(j==5 || j==6)
            glBindTexture(GL_TEXTURE_2D, texturaDemonio3);
        if(j==7 || j==8)
            glBindTexture(GL_TEXTURE_2D, texturaDemonio4);
        if(j==9 || j==10)
            glBindTexture(GL_TEXTURE_2D, texturaDemonio5);
        if(j==11 || j==12)
            glBindTexture(GL_TEXTURE_2D, texturaDemonio6);

        glBegin(GL_TRIANGLE_FAN);
            glTexCoord2f(0, 0);	glVertex3f(morcego.x, morcego.y, 0);
            glTexCoord2f(1, 0);	glVertex3f(morcego.x + 10, morcego.y, 0);
            glTexCoord2f(1, 1);	glVertex3f(morcego.x + 10, morcego.y + morcego.largura, 0);
            glTexCoord2f(0, 1);	glVertex3f(morcego.x, morcego.y + morcego.largura, 0);
        glEnd();
        if(DeslocarOn==1 && PausarOn==0)
            j++;
        glDisable(GL_TEXTURE_2D);	
    }
}

void desenhaPersonagem(void)
{
        if(i==9)
            i=1;
        glColor3f(1, 1, 1);
        glEnable(GL_TEXTURE_2D);
        if(i==1)
            glBindTexture(GL_TEXTURE_2D, texturaP1);
        if(i==2)
            glBindTexture(GL_TEXTURE_2D, texturaP2);
        if(i==3)
            glBindTexture(GL_TEXTURE_2D, texturaP3);
        if(i==4)
            glBindTexture(GL_TEXTURE_2D, texturaP4);
        if(i==5)
            glBindTexture(GL_TEXTURE_2D, texturaP5);
        if(i==6)
            glBindTexture(GL_TEXTURE_2D, texturaP6);
        if(i==7)
            glBindTexture(GL_TEXTURE_2D, texturaP7);
        if(i==8)
            glBindTexture(GL_TEXTURE_2D, texturaP8);
        if(i==9)
            glBindTexture(GL_TEXTURE_2D, texturaP9);
        if(ColidirOn == 1)
        {
            glBindTexture(GL_TEXTURE_2D, texturaColisao);
            i = 1;
        }
        if(JumpOn == 1)
        {
            glBindTexture(GL_TEXTURE_2D, texturaPulo);
            i = 1;
        }
        if(AgacharOn == 1)
        {
            glBindTexture(GL_TEXTURE_2D, texturaAgachar);
            i = 1;
        }
        glBegin(GL_TRIANGLE_FAN);
            glTexCoord2f(0, 0);	glVertex3f(personagem.x, personagem.y, 0);
            glTexCoord2f(1, 0);	glVertex3f(personagem.x + 10, personagem.y, 0);
            glTexCoord2f(1, 1);	glVertex3f(personagem.x + 10, personagem.y + personagem.tamanho, 0);
            glTexCoord2f(0, 1);	glVertex3f(personagem.x , personagem.y + personagem.tamanho , 0);
        if((DeslocarOn==1 && PausarOn==0) && escOn == 0 && restartOn == 0 || iniciaJogo == 1)
            i++;
        glEnd();
        glDisable(GL_TEXTURE_2D);
}

void desenhaInimigo(){
    if(iniciaJogo == 0){
        if(k == 8)
            k = 1;
        glColor3f(1, 1, 1);
        glEnable(GL_TEXTURE_2D);
        if(k==1 || k==2)
            glBindTexture(GL_TEXTURE_2D, texturaCavalo1);
        if(k==3 || k==4)
            glBindTexture(GL_TEXTURE_2D, texturaCavalo2);
        if(k==5 || k==6)
            glBindTexture(GL_TEXTURE_2D, texturaCavalo3);
        if(k==7 || k==8)
            glBindTexture(GL_TEXTURE_2D, texturaCavalo4);
        glBegin(GL_TRIANGLE_FAN);
            glTexCoord2f(0, 0);	glVertex3f(cavalo.x, cavalo.y, 0);
            glTexCoord2f(1, 0);	glVertex3f(cavalo.x + cavalo.largura, cavalo.y, 0);
            glTexCoord2f(1, 1);	glVertex3f(cavalo.x + cavalo.largura, cavalo.y + 10, 0);
            glTexCoord2f(0, 1);	glVertex3f(cavalo.x, cavalo.y + 10, 0);
        if(DeslocarOn==1 && PausarOn==0 && escOn == 0 && restartOn == 0)
            k++;
        glEnd();
        glDisable(GL_TEXTURE_2D);
    }
}

void desenhaInimigo3(void)
{
    if(iniciaJogo == 0){
        if(c==4)
            c=1;
        glColor3f(1, 1, 1);
        glEnable(GL_TEXTURE_2D);
        if(c==1 || c==2)
            glBindTexture(GL_TEXTURE_2D, texturablade2);
        if(c==3 || c==4)
            glBindTexture(GL_TEXTURE_2D, texturablade1);
        glBegin(GL_TRIANGLE_FAN);
            glTexCoord2f(0, 0);	glVertex3f(blade.x, blade.y, 0);
            glTexCoord2f(1, 0);	glVertex3f(blade.x + 10, blade.y, 0);
            glTexCoord2f(1, 1);	glVertex3f(blade.x + 10, blade.y + blade.largura, 0);
            glTexCoord2f(0, 1);	glVertex3f(blade.x, blade.y + blade.largura, 0);
        glEnd();
        if(DeslocarOn==1 && PausarOn==0)
            c++;
        glDisable(GL_TEXTURE_2D);	
    }
}

void desenhaInimigo4(void)
{
    if(iniciaJogo == 0){
        if(a==10)
            a=1;
        glColor3f(1, 1, 1);
        glEnable(GL_TEXTURE_2D);
        if(a==1 || a==2)
            glBindTexture(GL_TEXTURE_2D, texturaFire1);
        if(a==3 || a==4)
            glBindTexture(GL_TEXTURE_2D, texturaFire2);
        if(a==5 || a==6)
            glBindTexture(GL_TEXTURE_2D, texturaFire3);
        if(a==7 || a==8)
            glBindTexture(GL_TEXTURE_2D, texturaFire4);
        if(a==9 || a==10)
            glBindTexture(GL_TEXTURE_2D, texturaFire5);

        glBegin(GL_TRIANGLE_FAN);
            glTexCoord2f(0, 0);	glVertex3f(fire.x, fire.y, 0);
            glTexCoord2f(1, 0);	glVertex3f(fire.x + 10, fire.y, 0);
            glTexCoord2f(1, 1);	glVertex3f(fire.x + 10, fire.y + fire.largura, 0);
            glTexCoord2f(0, 1);	glVertex3f(fire.x, fire.y + fire.largura, 0);
        glEnd();
        if(DeslocarOn==1 && PausarOn==0)
            a++;
        glDisable(GL_TEXTURE_2D);	
    }
}

void escreve(void *font, char *s, float x, float y, float z) {
    int i;
    glRasterPos3f(x, y, z);
    for (i = 0; i < strlen(s); i++) 
        glutBitmapCharacter(font, s[i]);
}


void deslocar (){
    if(iniciaJogo == 0){
    	coin.x = coin.x - speedX/1.2;
        if(vidas<3)
        	life.x = life.x - speedX/1.2; 

    	if(controllinimigos == 1){
        	cavalo.x = cavalo.x - speedX/1.2; 
    	}
    	if(controllinimigos == 2){
        	morcego.x = morcego.x - speedX/1.2; 
    	}
    	if(controllinimigos == 3){
        	blade.x = blade.x - speedX/1.2; 
    	}
    	if(controllinimigos == 4){
        	fire.x = fire.x - speedX/1.2; 
    	}
    }
        

    back.x = back.x - speedX/16; 
    back2.x = back2.x - speedX/16;

    middle.x = middle.x - speedX/12;
    middle2.x = middle2.x - speedX/12;

    house.x = house.x - speedX/8;
    house2.x = house2.x - speedX/8;

    chao.x = chao.x - speedX/4;
    chao2.x = chao2.x - speedX/4;

	if(cavalo.x <= -10){// Condicao para fazer o cavalo voltar ao inicio.
		cavalo.x = 160;
		controllinimigos = 1 + rand() % 4;
	}
	if(morcego.x <= -5){ // Condicao para fazer o morcego voltar pro inicio
		morcego.x = 160;
		controllinimigos = 1 + rand() % 4;
	}
	if(blade.x <= -10){ // Condicao para fazer a blade voltar pro inicio
		blade.x = 160;
		controllinimigos = 1 + rand() % 4;
	}
	if(fire.x <= -10){ // // Condicao para fazer a bola de fogo voltar pro inicio
		fire.x = 160;
		controllinimigos = 1 + rand() % 4;
	}
	if(middle2.x <= 0)
    	middle2.x = 160;
    if(middle.x <= -160)
    	middle.x = 0;
    if(house2.x <= 0)
    	house2.x = 160;
    if(house.x <= -160)
    	house.x = 0;
    if(back2.x <= 0)
    	back2.x = 160;
    if(back.x <= -160)
    	back.x = 0;
   	if(chao.x <= -160)
    	chao.x = 0;
    if(chao2.x <= 0)
    	chao2.x = 160;
    if(coin.x <= 0){
    	coin.x = 640;
    	controllcoin = 0; // controla par auxiliar na soma de pontos caso o jogador pegue o powerup
    }
    if(life.x <= 0){
    	life.x = 1280;
    	controlllife = 0; // controla par auxiliar na soma de vidas caso o jogador pegue o powerup
    }
}

void jumpStage (){ // Procedimento que faz o ato de pular.
    int limitepulo = 13;
    personagem.y += jump; // Aumenta a coordenada do personagem no eixo y com o valor do jump.
    jump -= jumpBoost; // Vai diminuindo o valor do jump com a variavel auxiliar jumpBoost.

    if(personagem.y <= limitepulo && ColidirOn == 0) { // Quando a coordenada personagem.y chegar em determinado valor :
		jump = pastJump; // O jump recebe seu valor inicial.
        JumpOn = 0;     // JumpOn recebe falso,para evitar pulos consecutivos.
    }
}

void verificarPosicaoEscolha (){

    if(MenuOn == 1 ) {
        desenhaMenu(escolha,texturaEscolha);
        desenhaMenu(start,texturaStart);
        desenhaMenu(options,texturaOptions);
        desenhaMenu(credits,texturaCredits);
        if(ColidirOn == 0)
            desenhaMenu(logo,texturaLogo);
        if (ColidirOn == 1 && vidas == 0)
            desenhaObjetos(gameover , texturaGameOver);
        if(ColidirOn == 1 && vidas != 0)
            desenhaMenu(logo,texturaLogo);
    }

    if((escolherOpcao == 3) && (MenuOn == 1) && (teclaE == 1)){ // starta o game.

        inicializa();
        DeslocarOn = 1;
      	ColidirOn = 0;
      	PausarOn = 0;
        MenuOn = 0;
        AgacharOn = 0;
        JumpOn = 0 ;
        iniciaJogo = 0;
        controllscore = 0;
        controllvidas = 0;
        if(vidas == 0){
            vidas = 3;
            pontuacao = 0;
            speedX = 2;
        }
    }

    if((escolherOpcao == 2) && (MenuOn == 1) && (teclaE == 1)){ // coloca a textura de options , temos que faze-la.
        desenhaMenu(info,texturaInfo);
    }

    if((escolherOpcao) == 1 && (MenuOn == 1) && (teclaE == 1)){ // coloca a textura de credits , temos que faze-la.
        desenhaMenu(info2,texturaDentroCredits);  
    }   

    if(iniciaJogo == 0){
        sprintf(sPontuacao, "Pontuacao: %.f", pontuacao);
        escreve(GLUT_BITMAP_9_BY_15, sPontuacao, 120, 87, 0);
    }

    if(escOn == 1 && iniciaJogo == 0 && MenuOn == 0 ){
            desenhaMenu(escolha2,texturaEscolha);
            desenhaMenu(logo,texturaLogo);
            desenhaMenu(ok,texturaOk);
            desenhaMenu(cancel,texturaCancel);

            if(escolherEscR == 1 && teclaE == 1){
                exit(0);
            }
            if(escolherEscR == 2 && teclaE == 1){
                escOn = 0;
                DeslocarOn = 1;
            }
    }

    if(restartOn == 1 && iniciaJogo == 0 && MenuOn == 0){
        desenhaMenu(escolha2,texturaEscolha);
        desenhaMenu(logo,texturaLogo);
        desenhaMenu(ok,texturaOk);
        desenhaMenu(cancel,texturaCancel);

        if(escolherEscR == 1 && teclaE == 1){
            inicializa();
            DeslocarOn = 1;
            ColidirOn = 0;
            PausarOn = 0;
            MenuOn = 0;
            AgacharOn = 0;
            JumpOn = 0 ;
            iniciaJogo = 0;
            pontuacao = 0;
            controllscore = 0;
            speedX = 2;
            restartOn = 0;
            escOn = 0;
            vidas = 3;
        }
        if(escolherEscR == 2 && teclaE == 1){
            restartOn = 0;
            DeslocarOn = 1;

        }
    }

}


void desenhaCena(void)
{
	glClear(GL_COLOR_BUFFER_BIT);


    desenhaObjetos(back,texturaBack);
    desenhaObjetos(back2,texturaBack2);
    desenhaObjetos(middle,texturaMiddle);
    desenhaObjetos(middle2,texturaMiddle2);
    desenhaObjetos(house,texturaHouse);
    desenhaObjetos(house2,texturaHouse2);
    desenhaObjetos(chao,texturaChao);
    desenhaObjetos(chao2,texturaChao2);

    if(vidas>=1 && MenuOn == 0)
        desenhaObjetos(vida1,texturaVida);
    if(vidas>=2 && MenuOn == 0)
        desenhaObjetos(vida2,texturaVida);
    if(vidas == 3 && MenuOn == 0)
        desenhaObjetos(vida3,texturaVida);
    

    desenhaPersonagem();

    desenhaInimigo();
    desenhaInimigo2();
    desenhaInimigo3();
    desenhaInimigo4();

    desenhaObjetos(coin,texturaCoin);

    if (vidas<3 && ColidirOn == 0)
    	desenhaObjetos(life,texturaLife);

    
    verificarPosicaoEscolha();


    glutSwapBuffers();
    
}

void verificaColisao(){
	if((coin.x <= (personagem.x +10)) && ((coin.y+5) >= personagem.y))
	{
		controllcoin ++;
		if(DeslocarOn == 1 && ColidirOn == 0 && MenuOn == 0 && controllcoin == 1){
			pontuacao+=100;
			tocarSom("msc/powerup.wav",1);
		}

	}

	if((life.x <= (personagem.x +10)) && ((life.y+5) >= personagem.y))
	{
		controlllife ++;
		if(DeslocarOn == 1 && ColidirOn == 0 && MenuOn == 0 && controlllife == 1 && vidas<3){
			vidas ++ ;
			tocarSom("msc/powerup.wav",1);
		}

	}
    if((cavalo.x <= (personagem.x + 10)) && ((cavalo.y+10) >= personagem.y)){
    	if(personagem.tamanho == 5) // se ele estiver com o tamanho reduzido
            personagem.tamanho += agachar;
        ColidirOn = 1;
        MenuOn = 1;
        JumpOn = 0;
        AgacharOn = 0;
        PausarOn = 0;
        DeslocarOn = 0;
        jump = 5;
        controllscore++;
        controllvidas++;
        controllsom++;
        speedX = 2;
    }

   	if((blade.x <= (personagem.x + 10)) && ((blade.y+10) >= personagem.y)){
    	if(personagem.tamanho == 5) // se ele estiver com o tamanho reduzido
            personagem.tamanho += agachar;
        ColidirOn = 1;
        MenuOn = 1;
        JumpOn = 0;
        AgacharOn = 0;
        PausarOn = 0;
        DeslocarOn = 0;
        jump = 5;
        controllscore++;
        controllvidas++;
        controllsom++;
        speedX = 2;
    }

    if((personagem.x + 10 >= morcego.x) && ((personagem.y+personagem.tamanho) >= morcego.y && (personagem.y+personagem.tamanho)<=(morcego.y+5))){
    	if(personagem.tamanho == 5) // se ele estiver com o tamanho reduzido
            personagem.tamanho += agachar;
        ColidirOn = 1;
        MenuOn = 1;
        JumpOn = 0;
        AgacharOn = 0;
        PausarOn = 0;
        DeslocarOn = 0;
        jump = 5;
        controllscore++;
        controllvidas++;
        controllsom++;
        speedX = 2;
    }

    if((personagem.x + 10 >= fire.x) && ((personagem.y+personagem.tamanho) >= fire.y && (personagem.y+personagem.tamanho)<=(fire.y+10))){
    	if(personagem.tamanho == 5) // se ele estiver com o tamanho reduzido
            personagem.tamanho += agachar;
        ColidirOn = 1;
        MenuOn = 1;
        JumpOn = 0;
        AgacharOn = 0;
        PausarOn = 0;
        DeslocarOn = 0;
        jump = 5;
        controllscore++;
        controllvidas++;
        speedX = 2;
        controllsom++;
    }

    if(controllsom == 1)
        tocarSom("msc/colisao.wav",0);

    if(controllvidas == 1)
        vidas--;

    if(DeslocarOn && ColidirOn == 0 || iniciaJogo == 1){
        deslocar();
    }
    if(iniciaJogo == 0 && ColidirOn == 0 && PausarOn == 0 && escOn == 0 && restartOn == 0){

        pontuacao += 0.5;

        if(fmod(pontuacao,controlaDificuldade) == 0){
            speedX = speedX*aumentaDificuldade;
        }

    }

    if(JumpOn && ColidirOn == 0 && DeslocarOn) {
        jumpStage();
    }
}


void atualiza (int timer){

    verificaColisao();

    glutPostRedisplay();
    glutTimerFunc(timer,atualiza,timer);
}

void inicializa(void)
{
    glClearColor(1, 1, 1, 1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    texturaP1 = SOIL_load_OGL_texture("img/cowboy1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP2 = SOIL_load_OGL_texture("img/cowboy2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP3 = SOIL_load_OGL_texture("img/cowboy3.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP4 = SOIL_load_OGL_texture("img/cowboy4.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP5 = SOIL_load_OGL_texture("img/cowboy5.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP6 = SOIL_load_OGL_texture("img/cowboy6.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP7 = SOIL_load_OGL_texture("img/cowboy7.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP8 = SOIL_load_OGL_texture("img/cowboy8.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaP9 = SOIL_load_OGL_texture("img/cowboy9.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	texturaBack = SOIL_load_OGL_texture("img/background.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaBack2 = SOIL_load_OGL_texture("img/background2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	texturaMiddle = SOIL_load_OGL_texture("img/middleground.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaMiddle2 = SOIL_load_OGL_texture("img/middleground2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	texturaColisao = SOIL_load_OGL_texture("img/colisao.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaPulo = SOIL_load_OGL_texture("img/jump.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaAgachar = SOIL_load_OGL_texture("img/slide.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	texturaChao = SOIL_load_OGL_texture("img/floor.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaChao2 = SOIL_load_OGL_texture("img/floor2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	texturaHouse = SOIL_load_OGL_texture("img/houses.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaHouse2 = SOIL_load_OGL_texture("img/houses2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    
	texturaCavalo1 = SOIL_load_OGL_texture("img/ng1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaCavalo2 = SOIL_load_OGL_texture("img/ng2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaCavalo3 = SOIL_load_OGL_texture("img/ng3.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaCavalo4 = SOIL_load_OGL_texture("img/ng4.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	texturaFire1 = SOIL_load_OGL_texture("img/fireball_1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaFire2 = SOIL_load_OGL_texture("img/fireball_2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaFire3 = SOIL_load_OGL_texture("img/fireball_3.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaFire4 = SOIL_load_OGL_texture("img/fireball_4.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaFire5 = SOIL_load_OGL_texture("img/fireball_5.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    
	texturaDemonio1 = SOIL_load_OGL_texture("img/d1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaDemonio2 = SOIL_load_OGL_texture("img/d2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaDemonio3 = SOIL_load_OGL_texture("img/d3.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaDemonio4 = SOIL_load_OGL_texture("img/d4.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaDemonio5 = SOIL_load_OGL_texture("img/d5.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturaDemonio6 = SOIL_load_OGL_texture("img/d6.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);


	texturablade1 = SOIL_load_OGL_texture("img/blade_1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
	texturablade2 = SOIL_load_OGL_texture("img/blade_2.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

	
    texturaInfo = SOIL_load_OGL_texture("img/dentroOptions.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaStart = SOIL_load_OGL_texture("img/start.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaOptions = SOIL_load_OGL_texture("img/options.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaCredits = SOIL_load_OGL_texture("img/credits.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaLogo = SOIL_load_OGL_texture("img/logo.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaEscolha = SOIL_load_OGL_texture("img/texturaEscolha.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaDentroCredits = SOIL_load_OGL_texture("img/dentroCredits.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

    texturaGameOver = SOIL_load_OGL_texture("img/gameover.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaVida = SOIL_load_OGL_texture("img/heart.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

    texturaOk = SOIL_load_OGL_texture("img/ok.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaCancel = SOIL_load_OGL_texture("img/cancel.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

    texturaCoin = SOIL_load_OGL_texture("img/Gold_1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);
    texturaLife = SOIL_load_OGL_texture("img/Red_1.png",SOIL_LOAD_AUTO,SOIL_CREATE_NEW_ID,SOIL_FLAG_INVERT_Y);

    cavalo.x = 160;
    cavalo.y = 10;
    cavalo.largura = 10;

    blade.x = 160;
    blade.y = 10;
    blade.largura = 10;

    morcego.x = 160;
    morcego.y = 17;
    morcego.largura = 5;

    fire.x = 160;
    fire.y = 17;
    fire.largura = 10;

    personagem.x = 0;
    personagem.y = 10;
    personagem.tamanho = 10;

    back.x = 0;
    back.y = 0;

    back2.x = 160;
    back2.y = 0;

    middle.x = 0;
    middle.y = 0;

    middle2.x = 160;
    middle2.y = 0;

    house.x = 0;
    house.y = 0;

    house2.x = 160;
    house2.y = 0;

    chao.x = 0;
    chao.y = 0;

    chao2.x = 160;
    chao2.y = 0;

    vida1.x = 0;
    vida1.y = 85;

    vida2.x = 5;
    vida2.y = 85;

    vida3.x = 10;
    vida2.y = 85;

    life.x = 1135;
    life.y = 15;
    life.largura = 5;
    life.tamanho = 5;

    coin.x = 640;
    coin.y = 12;
    coin.largura = 5;
    coin.tamanho = 5;

    
    JumpOn = 0;
    jump = 5;
    speedX = 2;  
    controllcoin = 0;
    controlllife = 0;
    controllsom = 0;
}

void redimensiona(int width, int height){ 

   glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, Largura, 0, Altura, -1, 1);

    float razaoAspectoJanela = ((float)width)/height;
    float razaoAspectoMundo = ((float) Largura)/ Altura;
    // se a janela está menos larga do que o mundo (16:9)...
    if (razaoAspectoJanela < razaoAspectoMundo) {
        // vamos colocar barras verticais (acima e abaixo)
        float hViewport = width / razaoAspectoMundo;
        float yViewport = (height - hViewport)/2;
        glViewport(0, yViewport, width, hViewport);
    }
    // se a janela está mais larga (achatada) do que o mundo (16:9)...
    else if (razaoAspectoJanela > razaoAspectoMundo) {
        // vamos colocar barras horizontais (esquerda e direita)
        float wViewport = ((float)height) * razaoAspectoMundo;
        float xViewport = (width - wViewport)/2;
        glViewport(xViewport, 0, wViewport, height);
    } else {
        glViewport(0, 0, width, height);
    }

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void tecladoSoltar(unsigned char key , int x , int y)
{
	switch(key)
	{
		case 's':
			if(PausarOn == 0 && ColidirOn == 0 && MenuOn == 0 && escOn == 0 && restartOn == 0 && personagem.y == 10 && AgacharOn){
                personagem.tamanho += agachar;
                AgacharOn = 0;
			}	
			break;
        case 13:
            teclaE--;
            break;
		default:
		break;
	}
}

void teclado(unsigned char key, int x, int y)
{
    switch(key)
   {
      case 27:             // Tecla ESC ---> Fecha o game.            
        if(iniciaJogo == 0 && MenuOn == 0 && restartOn == 0){
            escOn = 1;
            DeslocarOn = 0;
            ColidirOn = 0;
        }
        else{
            if(escOn == 1 && iniciaJogo == 0 && MenuOn == 0){
                DeslocarOn = 1;
                escOn = 0;
            } 
        }                    
        break;

      case 'p':                         // Tecla P ---> Pausa o game.
        if(DeslocarOn && ColidirOn == 0 && MenuOn == 0 && escOn == 0 && restartOn == 0){
            DeslocarOn = 0;
            PausarOn = 1;
            ColidirOn = 0;
            MenuOn = 1;
        }
        else{
            if(PausarOn == 1) {
                DeslocarOn = 1;
                PausarOn = 0;
                ColidirOn = 0;
                MenuOn = 0;
            }
        }
		break;

      case 'w':                      // Tecla Espaco --> Pulo do game.
        if((escolherOpcao >= 1 && escolherOpcao <= 3) && escolherOpcao != 1 && MenuOn == 1){
                escolherOpcao--;
                escolha.y1+=15;
                escolha.y2+=15;
                tocarSom("msc/menu.wav",1);
            }

        if((escolherEscR == 2) && (escOn==1 || restartOn== 1) && iniciaJogo == 0){
                escolherEscR = 1;
                escolha2.y1+=15;
                escolha2.y2+=15;
                tocarSom("msc/menu.wav",1);
         }

      	if(ColidirOn == 0 && PausarOn == 0 && MenuOn == 0 && escOn == 0 && restartOn == 0 && personagem.y == 10)
      	{
      		if(AgacharOn == 0){ // so vai funcionar se ele nao estiver agachado
      			JumpOn = 1;
            	if(personagem.y == 10) // para dar som de pulo apenas uma vez ao apertar 'W'
                	tocarSom("msc/jump.wav",0);
            }
      	}
       	break;

      case 'r':                    // tecla R reinicia o game.
        if(iniciaJogo == 0 && MenuOn == 0 && escOn == 0){
            restartOn = 1;
            DeslocarOn = 0;
            ColidirOn = 0;
        }
        else{
            if(restartOn == 1 && iniciaJogo == 0 && MenuOn == 0){
                DeslocarOn = 1;
                restartOn = 0;
            } 
        } 

        break;

      case 's':
         if((escolherOpcao >= 1 && escolherOpcao <= 3) && escolherOpcao != 3 && MenuOn == 1){
                escolherOpcao++;
                escolha.y1-=15;
                escolha.y2-=15; 
                tocarSom("msc/menu.wav",1);
            }

         if((escolherEscR ==1) && (escOn==1 || restartOn== 1) && iniciaJogo == 0){
                escolherEscR = 2;
                escolha2.y1-=15;
                escolha2.y2-=15; 
                tocarSom("msc/menu.wav",1);
         }

      	if(PausarOn == 0 && ColidirOn == 0 && MenuOn == 0 && escOn == 0 && restartOn == 0 && personagem.y ==10){
      		personagem.tamanho -= agachar;
      		AgacharOn = 1;
      	}
      		break;

      case 13:
            teclaE ++;
            verificarPosicaoEscolha();
            break;
      default:
         break;
    }
}

int main(int argc, char **argv) //Main do Projeto Dino Run .
{
    glutInit(&argc, argv);
    glutInitContextVersion(1, 1);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Beta");

    glutDisplayFunc(desenhaCena);
    glutReshapeFunc(redimensiona);
    glutKeyboardFunc(teclado);
    glutKeyboardUpFunc(tecladoSoltar);
    tocarMusica("msc/countryroads.mp3",-1);


    inicializa();
    glutTimerFunc(timer,atualiza,timer);
    glutMainLoop();

    return 0;
}
