#include "Entidade.h"

Entidade::Entidade()
{
   x = 0;
   y = 0;
}

Entidade::~Entidade()
{

}

void Entidade::setX(int x)
{
    this->x = x;
}

void Entidade::setY(int y)
{
    this->y = y;
}

void Entidade::setGrafico(GerenciadorGrafico* grafico)
{
    this->grafico = grafico;
}

void Entidade::setTexture(Texture &texture)
{
    this->imagem.setTexture(texture);
}

int Entidade::getX()
{
    return x;
}

int Entidade::getY()
{
    return y;
}

GerenciadorGrafico* Entidade::getGrafico()
{
    return grafico;
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
