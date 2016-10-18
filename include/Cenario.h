#ifndef _CENARIO_H_
#define _CENARIO_H_

#include <SFML/Graphics.hpp>
#include "GerenciadorGrafico.h"
#include "Entidade.h"

class Cenario : public Entidade
{
    protected:
            float v;
            // Vari�vel que faz com que a imagem se mova menos de um pixel
            // por loop.
    public:
            Cenario();
            ~Cenario();
            void setV(const float v);

            /* Movimenta��o */
            void Movimento();

};

#endif
