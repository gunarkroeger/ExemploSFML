#include "Cenario.h"

Cenario::Cenario()
{
    v = 0;
}

Cenario::~Cenario()
{

}

void Cenario::setV(const float v)
{
     this->v = v;
}


/* Movimentação */
void Cenario::Movimento()
{
    if(v != 0)
    {
        y += v;
        if (y >= -615) y = -1200;
    }
}
