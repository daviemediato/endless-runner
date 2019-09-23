#include "biblioteca.h"
#include "desenha.h"

void desenhaMenu (opcaoMenu opcao,GLuint textura){ // Irá desenhar o menu do game.

    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,textura);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);	glVertex3f(opcao.x1,opcao.y1,0);
        glTexCoord2f(1, 0);	glVertex3f(opcao.x2,opcao.y1,0);
        glTexCoord2f(1, 1);	glVertex3f(opcao.x2,opcao.y2,0);
        glTexCoord2f(0, 1);	glVertex3f(opcao.x1,opcao.y2,0);

    glEnd();

    glDisable(GL_TEXTURE_2D);	

}

void desenhaObjetos(quadrado objeto,GLuint textura){

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,textura);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);	glVertex3f(objeto.x,objeto.y,0);
        glTexCoord2f(1, 0);	glVertex3f(objeto.x + objeto.largura ,objeto.y,0);
        glTexCoord2f(1, 1);	glVertex3f(objeto.x + objeto.largura,objeto.y + objeto.tamanho,0);
        glTexCoord2f(0, 1);	glVertex3f(objeto.x,objeto.y + objeto.tamanho,0);

    glEnd();

    glDisable(GL_TEXTURE_2D);


}


