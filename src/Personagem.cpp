#include "Personagem.h"

Personagem::Personagem()
{
    spriteNum = 1;
    x = 100;
    y = 100;
}

Personagem::~Personagem()
{

}

/* Sets */

void Personagem::setVx( const short int VX )
{
    vx = VX;
}

void Personagem::setVy( const short int VY )
{
    vy = VY;
}

/* Gets */
const short int Personagem::getvx()
{
    return vx;
}

const short int Personagem::getvy()
{
    return vy;
}

void Personagem::Desenha(RenderWindow &window)
{
    if(spriteNum <= sprites.size())
        this->imagem.setTextureRect(sprites[spriteNum]);
    Entidade::Desenha(window);
}

void Personagem::Movimento()
{

}
