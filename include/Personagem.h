#ifndef _PERSONAGEM_H_
#define _PERSONAGEM_H_

#include "GerenciadorGrafico.h"
#include "Entidade.h"

class Personagem : public Entidade
{
protected:          // Protected para que as classes derivadas possuam esses atributos.
    short int vx;      // Velocidade em Y.
    short int vy;      // Velocidade em X.
    short int spriteNum; // Numero da sprite

    vector<IntRect> sprites;

public:
    Personagem();
    ~Personagem();

    /* Sets */
    void setVx( const short int VX );
    void setVy( const short int VY );

    /* Gets */
    const short int getvx();
    const short int getvy();

    /* Movimentação */
    virtual void Movimento();

    virtual void Desenha(RenderWindow &window);
};

#endif
