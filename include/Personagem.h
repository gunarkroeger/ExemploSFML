#ifndef _PERSONAGEM_H_
#define _PERSONAGEM_H_

#include "GerenciadorGrafico.h"
#include "Entidade.h"

class Personagem : public Entidade
{
    protected:          // Protected para que as classes derivadas possuam esses atributos.
        GerenciadorGrafico* grafico;
           Sprite img; // Imagem.
           short int h;       // Altura da imagem.
           short int l;       // Largura da imagem.
           short int vx;      // Velocidade em Y.
           short int vy;      // Velocidade em X.
           short int Sx;      // Posi��o x do sprite na imagem maior.
           short int Sy;      // Posi��o y do sprite na imagem maior.
           short int direcao; // Indica se o personagem est� orientado na vertical ou na horizontal.

           bool C,B,D,E; // Vari�veis para detectar o sentido das colis�es.
           vector<IntRect> sprites;

    public:
           Personagem();
           ~Personagem();

           /* Sets */
           void setH( const short int H );
           void setL( const short int L );
           void setvx( const short int VX );
           void setvy( const short int VY );
           void setsx( const short int SX );
           void setsy( const short int SY );
           void setbuffer( Texture B);

           /* Gets */
           const short int getH();
           const short int getL();
           const short int getvx();
           const short int getvy();
           const short int getsx();
           const short int getsy();

           /* Movimenta��o */
           virtual void Movimento();

           virtual void Desenha(RenderWindow &window);
};

#endif
