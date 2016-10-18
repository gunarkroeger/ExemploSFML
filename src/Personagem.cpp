#include "Personagem.h"

Personagem::Personagem()
{
    C = false;
    B = false;
    D = false;
    E = false;
    direcao = 1;
    x = 100;
    y = 100;
}

Personagem::~Personagem()
{

}

/* Sets */
void Personagem::setH( const short int H )
{
    h = H;
}

void Personagem::setL( const short int L )
{
    l = L;
}

void Personagem::setvx( const short int VX )
{
    vx = VX;
}

void Personagem::setvy( const short int VY )
{
    vy = VY;
}

void Personagem::setsx( const short int SX )
{
    Sx = SX;
}

void Personagem::setsy( const short int SY )
{
    Sy = SY;
}


/* Gets */
const short int Personagem::getH()
{
    return h;
}

const short int Personagem::getL()
{
    return l;
}

const short int Personagem::getvx()
{
    return vx;
}

const short int Personagem::getvy()
{
    return vy;
}

const short int Personagem::getsx()
{
    return Sx;
}

const short int Personagem::getsy()
{
    return Sy;
}

void Personagem::Desenha(RenderWindow &window)
{
    if(direcao <= sprites.size())
        this->imagem.setTextureRect(sprites[direcao]);
    Entidade::Desenha(window);
    //masked_stretch_blit(img, buffer, Sx, Sy, l*2, h*2, x, y, l, h); // (Imagem, Buffer, Xinicial na IMG maior. Yinicial na IMG maior, Largura do subsprite, Altura do Subsprite, posiçãoX, posiçãoY, TamanhoX, TamanhoY);
}

void Personagem::Movimento()
{

}
