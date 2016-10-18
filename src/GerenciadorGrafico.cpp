#include "GerenciadorGrafico.h"

GerenciadorGrafico::GerenciadorGrafico()
{
    init();
}

GerenciadorGrafico::~GerenciadorGrafico()
{
    deinit();
}

void GerenciadorGrafico::init()
{
    tP1.loadFromFile("Arquivos//Imagens//Tanque1.bmp");
}

void GerenciadorGrafico::deinit()
{

}

void GerenciadorGrafico::Desenha(Sprite &sprite)
{

}
