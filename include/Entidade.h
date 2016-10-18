#ifndef ENTIDADE_H
#define ENTIDADE_H

#include "GerenciadorGrafico.h"

class Entidade
{
    public:
        Entidade();
        virtual ~Entidade();

        void setX(float x);
        void setY(float y);
        void setH( const int H );
        void setL( const int L );

        virtual void setTexture(Texture &texture);

        float getX();
        float getY();
        const int getH();
        const int getL();

        Sprite getImagem();

        bool getColide();
        int getMassa();

        virtual void Desenha(RenderWindow &window);
        virtual void Movimento();
        bool Colide(Entidade* outra); //colisão de retangulos

    protected:
        float x;
        float y;
        int h;       // Altura da imagem.
        int l;       // Largura da imagem.

        Sprite imagem;
        bool colide;
        int massa; //entidade de menor massa será empurrada em caso de colisão

    private:
};

#endif // ENTIDADE_H
