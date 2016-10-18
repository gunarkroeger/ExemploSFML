#ifndef ENTIDADE_H
#define ENTIDADE_H

#include "GerenciadorGrafico.h"

class Entidade
{
    public:
        Entidade();
        virtual ~Entidade();

        void setX(int x);
        void setY(int y);
        void setGrafico(GerenciadorGrafico* grafico);
        void setTexture(Texture &texture);

        int getX();
        int getY();
        GerenciadorGrafico* getGrafico();
        Sprite getImagem();
        void Desenha(RenderWindow &window);
    protected:
        int x;
        int y;
        GerenciadorGrafico* grafico;
        Sprite imagem;

    private:
};

#endif // ENTIDADE_H
