#ifndef _GERENCIADORGRAFICO_H_
#define _GERENCIADORGRAFICO_H_

#include <SFML/Graphics.hpp>
using namespace sf;

class GerenciadorGrafico
{
    private:
            //RenderWindow window;
    public:
           GerenciadorGrafico();
           ~GerenciadorGrafico();
           void Desenha(Sprite &sprite);
           void init();
           void deinit();


            Texture tP1;
            Texture tP2;
            Texture tMar;
            Texture tPraia;
            Texture tTanque;
            Texture tPeixe;
            Texture tBarreira;
};

#endif
