#ifndef _JOGO_H_
#define _JOGO_H_

#include <vector>

using namespace std;

#include "Jogador.h"
#include "Tanque.h"
#include "Peixe.h"
#include "Cenario.h"
#include "GerenciadorGrafico.h"

class Jogo
{
private:
    Jogador* P1;  // Jogador 1;
    Jogador* P2;
    Tanque* T1;
    vector<Peixe*> peixes;
    Cenario* mar;
    Cenario* barreira;
    Cenario* praia;
    GerenciadorGrafico* grafico;

    void setGrafico(GerenciadorGrafico* grafico);
    vector<Entidade*> listaEntidades;

public:
    Jogo(GerenciadorGrafico* grafico);
    ~Jogo();

    void Iniciar();

    void Desenha(RenderWindow &window);
    void Movimento();

};

#endif
