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
    tP1.loadFromFile("Arquivos//Imagens//Objeto1b.png");
    tP2.loadFromFile("Arquivos//Imagens//Objeto2b.png");
    tMar.loadFromFile("Arquivos//Imagens//mar.png");
    tPraia.loadFromFile("Arquivos//Imagens//Praia1.png");
    tTanque.loadFromFile("Arquivos//Imagens//Tanque1.png");
    tPeixe.loadFromFile("Arquivos//Imagens//Aquatico1.png");
    tBarreira.loadFromFile("Arquivos//Imagens//Barreira1.png");
}

void GerenciadorGrafico::deinit()
{

}

void GerenciadorGrafico::Desenha(Sprite &sprite)
{

}
