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
}

void Jogo::Inicializar(GerenciadorGrafico* grafico)
{
    M1 = new Mapa1();


}

void Jogo::Iniciar()
{
    P1 = new Jogador();
    P2 = new Jogador();
    P1->setTexture(grafico->tP1);
    P2->setTexture(grafico->tP1);
    listaEntidades.push_back(P1);
    listaEntidades.push_back(P2);

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
