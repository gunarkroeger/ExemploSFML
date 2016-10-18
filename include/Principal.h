#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "Jogo.h"
#include "GerenciadorGrafico.h"

class Principal
{
    public:
        Principal();
        virtual ~Principal();

        void Executar();
        void Desenha(RenderWindow &window);
        void Movimento();

    protected:

    private:
        Jogo* J;
        GerenciadorGrafico grafico;
};

#endif // PRINCIPAL_H
