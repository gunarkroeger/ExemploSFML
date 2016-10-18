#include "Jogador.h"

Jogador::Jogador(): num(1)
{
    vx = 2;
    vy = 2;
    spriteNum = 3;
    massa = 100;
    colide = true;
    y = 150 * num;
}

Jogador::Jogador(const short int N) : num(N)
{
    vx = 2;
    vy = 2;
    spriteNum = 3;
    massa = 100;
    colide = true;
    y = 150 * num;
}

Jogador::~Jogador()
{

}

void Jogador::setTexture(Texture &texture)
{
    Entidade::setTexture(texture);
    this->imagem.setTextureRect(IntRect(6,3,64,176));

    sprites.push_back(IntRect(6,3,64,176));
    sprites.push_back(IntRect(88,3,64,176));
    sprites.push_back(IntRect(174,3,176,64));
    sprites.push_back(IntRect(174,80,176,64));
}

/* Gets */
const short int Jogador::getNum()
{
    return num;
}

/* Movimentação */
void Jogador::Movimento()
{
    float centerX = (x+l)/2;
    float centerY = (y+h)/2;
    if(num == 1)
    {
        if(Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            if(x > minX)
                x -= vx;
            spriteNum = 2;
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            if(x < maxX)
                x += vx;
            spriteNum = 3;
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            if(y > minY)
                y -= vy;
            spriteNum = 1;
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            if(y < maxY)
                y += vy;
            spriteNum = 0;
        }
    }

    if(num == 2)
    {
        if(Keyboard::isKeyPressed(sf::Keyboard::A)) {
            if(x > minX)
                x -= vx;
            spriteNum = 2;
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::D)) {
            if(x < maxX)
                x += vx;
            spriteNum = 3;
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if(y > minY)
                y -= vy;
            spriteNum = 1;
        }
        else if(Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if(y < maxY)
                y += vy;
            spriteNum = 0;
        }
    }

    l = sprites[spriteNum].width; //largura da sprite
    h = sprites[spriteNum].height; //altura da sprite
}
