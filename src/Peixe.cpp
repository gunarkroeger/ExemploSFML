#include "Peixe.h"

Peixe::Peixe() : Inimigo()
{
    spriteNum = rand() % 12;
    massa = 100;
    colide = false;
    x = rand() % 450 + 100;
    y = rand() % 400 + 100;
    LA = 4;
    A = rand() % 5;
}

Peixe::~Peixe()
{

}

void Peixe::setTexture(Texture& texture)
{
    Entidade::setTexture(texture);
    this->imagem.setTextureRect(IntRect(6,3,64,176));
    int w = 33;
    int h = 31;

    for(int j = 0; j < 4; j++)
        for(int i = 0; i < 3; i++)
            sprites.push_back(IntRect(1+w*i,1+h*j,w,h));
}

/* Sets */
void Peixe::setA(int a)
{
    A = a;
}

void Peixe::setLA(int la)
{
    LA = la;
}

/* Gets */
int Peixe::getA()
{
    return A;
}

int Peixe::getLA()
{
    return LA;
}

void Peixe::Movimento()
{
    A--;
    if(A <= 0)
    {
        A = LA;
        spriteNum = (spriteNum+1) % sprites.size();
    }
}













