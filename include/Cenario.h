#ifndef _CENARIO_H_
#define _CENARIO_H_

#include <SFML/Graphics.hpp>
#include "GerenciadorGrafico.h"
#include "Entidade.h"

class Cenario : public Entidade
{
    protected:
            short int x;
            short int y;      // Posições e velocidade.
            short int v;
            short int redutor_velocidade;
            // Variável que faz com que a imagem se mova menos de um pixel
            // por loop.
    public:
            Cenario();
            ~Cenario();
            void setv( const short int V );
            void setRV( const short int RV );

            void Desenha();
            /* Movimentação */
            void Movimento();

};

#endif
