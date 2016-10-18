#include "Tanque.h"

Tanque::Tanque() : Inimigo()
{
    x = 700;
    y = 250;
    vy = 2;
    vx = 0;
}

Tanque::~Tanque()
{

}

/* Movimentação */
void Tanque::Movimento()
{
    if(y <= 100)
    {
        vy = -vy;
        Sx = 31;
    }
    if(y >= 470)
    {
        vy = -vy;
        Sx = 0;
    }
    y = y + vy;
}

void Tanque::setTexture(Texture &texture)
{
    Entidade::setTexture(texture);
    this->imagem.setTextureRect(IntRect(0,0,32,32));
}
