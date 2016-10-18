#ifndef _MENU_H_
#define _MENU_H_

#include "Jogo.h"

class Menu
{
    private:
           Texture buffer;
           // Bitmap de buffer para desenhar todas as imagens nele
           // e logo em seguida jog�-lo inteiro na tela, isso evita
           // que a tela ou as imagens fiquem piscando.
           Texture fundoR; // Fundo do menu de raiz.
           Texture fundoC; // Fundo do menu de cr�ditos.
           Texture fundoS; // Fundo do menu de sair.
           Texture cursor; // O imagem do navio que indica qual op��o est� selecionada.
           Jogo* J;
           bool sair;      // Vari�vel para indicar o processo de sa�da
                           // e evitar que o menu seja aberto novamente quando
                           // o bot�o sair for pressionado.


    public:
           Menu();
           ~Menu();

           void Inicializar();
           void Iniciar();
           void Raiz();       // Menu principal.
           void Creditos();   // Tela de cr�ditos.
           bool Sair();       // Menu de pergunta para confirma��o de sa�da.

           /* Sets */
           void setbuffer( Texture B);
           void setfundoraiz( Texture R);
           void setfundocreditos( Texture C);
           void setfundosair( Texture S);
           void setcursor( Texture C);
           void setjogo( Jogo* Jo);
           /* Gets */

};

#endif
