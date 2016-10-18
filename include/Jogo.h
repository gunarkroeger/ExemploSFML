#ifndef _JOGO_H_
#define _JOGO_H_

#include "Mapa1.h"
#include <vector>

using namespace std;

class Jogo
{
    private:
           Menu* M;
           Jogador* P1;  // Jogador 1;
           Jogador* P2;
           Tanque* T1;
           Cenario* mar;
           Cenario* barreira;
           Cenario* praia;
           Mapa1 *M1;   //   Mapa 1;
           GerenciadorGrafico* grafico;

           void setGrafico(GerenciadorGrafico* grafico);

    public:
           Jogo(GerenciadorGrafico* grafico);
           ~Jogo();

           void Inicializar(GerenciadorGrafico* grafico);
           void Iniciar();

           /* Sets */
           void setJogadores(Jogador* P, Jogador* PP);
           void setMenu( Menu* ME);
           void Desenha(RenderWindow &window);
           void Movimento();

           vector<Entidade*> listaEntidades;
};

#endif
