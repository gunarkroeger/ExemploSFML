#ifndef ENTIDADE_H
#define ENTIDADE_H

#include "GerenciadorGrafico.h"

enum Direcao{L,R,U,D};

class Entidade
{
    public:
        Entidade();
        virtual ~Entidade();

        void setX(int x);
        void setY(int y);
        void setGrafico(GerenciadorGrafico* grafico);
        virtual void setTexture(Texture &texture);

        int getX();
        int getY();
        GerenciadorGrafico* getGrafico();
        Sprite getImagem();

        virtual void Desenha(RenderWindow &window);
        virtual void Movimento();
    protected:
        int x;
        int y;
        GerenciadorGrafico* grafico;
        Sprite imagem;

    private:
};

#endif // ENTIDADE_H
