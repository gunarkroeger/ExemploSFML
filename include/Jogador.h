#ifndef _JOGADOR_H_
#define _JOGADOR_H_

#include "Personagem.h"

class Jogador : public Personagem
{
private:
    const short int num;
    // Varável que informa qual é o número do jogador
    // jogador 1, jogador 2 etc...

public:
    Jogador();
    Jogador(const short int N);
    ~Jogador();


    virtual void setTexture(Texture &texture);
    /* Gets */
    const short int getNum();

    /* Movimentação */
    void Movimento();

    /* Colisão */
    static const int maxX = 450;
    static const int maxY = 350;
    static const int minX = 60;
    static const int minY = 60;

};

#endif
