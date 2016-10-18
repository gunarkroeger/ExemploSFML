#include "Jogo.h"

Jogo::Jogo(GerenciadorGrafico* grafico)
{
    setGrafico(grafico);
    Iniciar();
}

Jogo::~Jogo()
{
    listaEntidades.clear();
    delete P1;
    delete P2;
    delete T1;
    delete praia;
    delete barreira;
    delete mar;

    for(unsigned i = 0; i < peixes.size(); i++)
        delete peixes[i];
}

void Jogo::Iniciar()
{
    mar = new Cenario();
    mar->setV(1);
    barreira = new Cenario();
    praia = new Cenario();
    P1 = new Jogador(1);
    P2 = new Jogador(2);
    T1 = new Tanque();

    for(unsigned i = 0; i < 6; i++)
    {
        Peixe* p = new Peixe();
        p->setTexture(grafico->tPeixe);
        peixes.push_back(p);
    }

    mar->setTexture(grafico->tMar);
    barreira->setTexture(grafico->tBarreira);
    praia->setTexture(grafico->tPraia);
    P1->setTexture(grafico->tP1);
    P2->setTexture(grafico->tP2);
    T1->setTexture(grafico->tTanque);

    //Precisa estar na ordem que será desenhado
    listaEntidades.push_back(mar);
    listaEntidades.push_back(praia);
    listaEntidades.push_back(barreira);
    for(unsigned i = 0; i < peixes.size(); i++)
        listaEntidades.push_back(peixes[i]);
    listaEntidades.push_back(P1);
    listaEntidades.push_back(P2);
    listaEntidades.push_back(T1);

}

void Jogo::setGrafico(GerenciadorGrafico* grafico)
{
    this->grafico = grafico;
}

void Jogo::Desenha(RenderWindow &window)
{
    for(unsigned i = 0; i < listaEntidades.size(); i++)
        listaEntidades[i]->Desenha(window);
}

void Jogo::Movimento()
{
    for(unsigned i = 0; i < listaEntidades.size(); i++)
        listaEntidades[i]->Movimento();
    P1->Colide(P2);
}
