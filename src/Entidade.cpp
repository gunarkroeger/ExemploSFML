#include "Entidade.h"

Entidade::Entidade()
{
   x = 0;
   y = 0;
}

Entidade::~Entidade()
{

}

void Entidade::setX(float x)
{
    this->x = x;
}

void Entidade::setY(float y)
{
    this->y = y;
}

void Entidade::setH( const int H )
{
    h = H;
}

void Entidade::setL( const int L )
{
    l = L;
}

void Entidade::setTexture(Texture &texture)
{
    this->imagem.setTexture(texture);
}

float Entidade::getX()
{
    return x;
}

float Entidade::getY()
{
    return y;
}

const int Entidade::getH()
{
    return h;
}

const int Entidade::getL()
{
    return l;
}

bool Entidade::getColide()
{
    return colide;
}

int Entidade::getMassa()
{
    return massa;
}

Sprite Entidade::getImagem()
{
    return imagem;
}

void Entidade::Desenha(RenderWindow &window)
{
    imagem.setPosition(x,y);
    window.draw(imagem);
}

void Entidade::Movimento()
{

}

bool Entidade::Colide(Entidade* outra)
{
    if(!this->colide || !outra->getColide())
        return false;

    if(x > outra->getX() + outra->getL())
        return false;
    if(x + getL() < outra->getX())
        return false;

    if(y > outra->getY() + outra->getH())
        return false;
    if(y + getH() < outra->getY())
        return false;

    int dx = (x + l)/2 - (outra->getX() + outra->getL())/2;
    int dy = (y + h)/2 - (outra->getY() + outra->getH())/2;

    if(massa < outra->getMassa())
    {
        if(abs(dx) > abs(dy)) //força da colisão só nas direções x OU y
            x += 0.05*dx;
        else
            y += 0.05*dy;
    }
    else if(massa > outra->getMassa())
    {
        if(abs(dx) > abs(dy))
            outra->setX(outra->getX() - 0.05*dx);
        else
            outra->setY(outra->getY() - 0.05*dy);
    }
    else
    {
        if(abs(dx) > abs(dy))
        {
            x += 0.04*dx;
            outra->setX(outra->getX() - 0.04*dx);
        }
        else
        {
            y += 0.04*dy;
            outra->setY(outra->getY() - 0.04*dy);
        }
    }
    return true;
}
