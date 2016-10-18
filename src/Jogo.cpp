#include "Jogo.h"

Jogo::Jogo(GerenciadorGrafico* grafico)
{
    setGrafico(grafico);
    Iniciar();
}

Jogo::~Jogo()
{
   // delete M1;
    listaEntidades.clear();
    delete P1;
    delete P2;
    delete T1;
}

void Jogo::Inicializar(GerenciadorGrafico* grafico)
{
    M1 = new Mapa1();


}

void Jogo::Iniciar()
{
    mar = new Cenario();
    barreira = new Cenario();
    praia = new Cenario();
    praia->setX(0);
    P1 = new Jogador(1);
    P2 = new Jogador(2);
    T1 = new Tanque();

    mar->setTexture(grafico->tMar);
    barreira->setTexture(grafico->tBarreira);
    praia->setTexture(grafico->tPraia);
    P1->setTexture(grafico->tP1);
    P2->setTexture(grafico->tP2);
    T1->setTexture(grafico->tTanque);

    listaEntidades.push_back(mar);
    listaEntidades.push_back(praia);
    listaEntidades.push_back(barreira);
    listaEntidades.push_back(P1);
    listaEntidades.push_back(P2);
    listaEntidades.push_back(T1);

    //M1->setJogadores(P1, P2); // Associa os jogadores ao Mapa.
    //M1->setMenu(M);           // Associa o Menu ao mapa.
    //M1->Inicializar(grafico);
    //M1->Entrar();             // 'entra' na área do mapa. (inicia o mapa)

}


/* Sets */
void Jogo::setJogadores(Jogador* P, Jogador* PP)
{
    P1 = P;
    P2 = PP;
}

void Jogo::setMenu(Menu* ME)
{
    M = ME;
}

void Jogo::setGrafico(GerenciadorGrafico* grafico)
{
    this->grafico = grafico;
}

void Jogo::Desenha(RenderWindow &window)
{
    for(unsigned i = 0; i < listaEntidades.size(); i++)
    {
        listaEntidades[i]->Desenha(window);
    }
}

void Jogo::Movimento()
{
    for(unsigned i = 0; i < listaEntidades.size(); i++)
    {
        listaEntidades[i]->Movimento();
    }
}
