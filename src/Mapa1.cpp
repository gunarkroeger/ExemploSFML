#include "Mapa1.h"
#include "Menu.h"

Mapa1::Mapa1()
{

}

Mapa1::~Mapa1()
{
}

void Mapa1::Inicializar(GerenciadorGrafico *grafico)
{
    setGrafico(grafico);
    inicio = true;
    Mar.setGrafico(grafico);
    Texture tMar;
    tMar.loadFromFile("Arquivos//Imagens//mar.bmp");
    Mar.setTexture(tMar);
    Mar.setX(0);
    Mar.setY(-1200);
    Mar.setv(1);
    Mar.setRV(0);

    Terra.setGrafico(grafico);
    Texture tTerra;
    tTerra.loadFromFile("Arquivos//Imagens//Barreira1.bmp");
    Terra.setTexture(tTerra);
    Terra.setX(0);
    Terra.setY(0);
    Terra.setv(0);
    Terra.setRV(0);

    T1.setGrafico(grafico);
    Texture tT1;
    tT1.loadFromFile("Arquivos//Imagens//Tanque1.bmp");
    T1.setTexture(tTerra);
    T1.setH(31);  // inicializa a altura da imagem/personagem.
    T1.setL(31);  // inicializa a largura da imagem/personagem.
    T1.setX(670); // Posi��o inicial em x.
    T1.setY(470); // Posi��o incial em y.
    T1.setvx(0);  // Velocidade incial do objeto em x.
    T1.setvy(1);  // Velocidade incial do objeto em y.
    T1.setsx(0);  // Posi��o x do sprite na imagem maior.
    T1.setsy(0);  // Posi��o y do sprite na imagem maior.

    Px1.setGrafico(grafico);
    Texture tPx1;
    tPx1.loadFromFile("Arquivos//Imagens//Aquatico1.bmp");
    Px1.setTexture(tPx1);
    Px1.setH(30);
    Px1.setL(30);
    Px1.setX(50);
    Px1.setY(50);  // Inicializa��o dos atributos do inimigo peixe.
    Px1.setvx(0);
    Px1.setvy(0);
    Px1.setsx(3);
    Px1.setsy(0);
    Px1.setA(0);   // Inicializa��o da vari�vel respons�vel pelo gerenciamento da anima��o do peixe.
    Px1.setLA(50); // Inicializa��o da vari�vel respons�vel pelo controle de velocidade da anima��o do peixe.
                   // reparar na Tela03 do jogo que a anima��o de cada peixe tem uma
                   // velocidade diferente. � esta vari�vel que controla isso.

    Px2.setTexture(tPx1);
    Px2.setH(30);
    Px2.setL(30);
    Px2.setX(210);
    Px2.setY(110);
    Px2.setvx(0);
    Px2.setvy(0);
    Px2.setsx(3);
    Px2.setsy(0);
    Px2.setA(0);
    Px2.setLA(100);

    Px3.setTexture(tPx1);
    Px3.setH(30);
    Px3.setL(30);
    Px3.setX(355);
    Px3.setY(178);
    Px3.setvx(0);
    Px3.setvy(0);
    Px3.setsx(3);
    Px3.setsy(0);
    Px3.setA(0);
    Px3.setLA(250);

    P1->setX(750); // Ajusta os valores na entrada da tela
    P2->setX(750);
    if (P1->getY() >= (506-P1->getH())) P1->setY(505 - P1->getH());
    else if (P1->getY() <= 95) P1->setY(96);
    if (P2->getY() >= (506-P2->getH())) P2->setY(505 - P2->getH());
    else if (P2->getY() <= 95) P2->setY(96);
    // calcula as posi��es para que os jogadores n�o entrem
    // na tela por uma parte inacess�vel
    //(por exemplo por cima de uma barreira.

    /* As fun��es foram colocardas nesse m�todo "Inicializar",
    porque, caso colocadas na construtora, causam um erro no programa.
    Esse erro ocorre porque a Biblioteca Gr�fica est� sendo inicializada
    na classe Principal, sendo assim, os objetos agregados nessa classe
    t�m suas construtoras 'lidas' antes da inicializa��o da biblioteca,
    portanto o programa n�o reconhece as fun��es e ocorre o erro.
    Desta forma, os objetos s�o inicializados depois da biblioteca gr�fica
    portanto, n�o h� problemas. */
}

void Mapa1::Entrar()
{
    Tela1();
}

/*
    Os loops principais agora rodam na classe Mapa1,
pois esta classe � a que coordena a localiza��o
dos jogadores no mapa.
    Esta classe possui os m�todos Tela, que s�o os loops
de cada tela do mapa. Quando os jogadores ultrapassam os limites
da tela (saem da tela) o loop passa a rodar no m�todo correspondente
� tela para onde eles foram. Por exemplo, se os jogadores est�o na
tela inicial do jogo est�o na Tela1 e o loop rodar� no m�todo Tela1(),
quando os jogadores saem da tela pela direita, se transportam para a
segunda tela (Tela2) e o loop passar� a rodar no m�todo Tela2(). Caso
estejam na 2 e sairem pela esquerda voltar�o � 1 e o loop voltar� a rodar
em Tela1().
*/
void Mapa1::Tela1()
{
    Texture tBarreira1;
    tBarreira1.loadFromFile("Arquivos//Imagens//Barreira1.bmp");
    Terra.setTexture(tBarreira1);

    inicio = false;

    while (1) //loop principal.
    {


        //P1->testecolisao(P2,91,1000,92,502); // Testa a colis�o do Jogador 1 com a tela e com o jogador 2.
        //P2->testecolisao(P1,91,1000,92,502); // Testa a colis�o do Jogador 2 com a tela e com o jogador 1.
        //Mar.Movimento();   // Aciona o movimento do cen�rio.
        //P1->Movimento(); // Aciona o movimento do personagem.
        //P2->Movimento();

        //if ((P1->getX() >= 810)&&(P2->getX() >= 810))  // Se ambos os jogadores sairem da tela pela direita...
        //{
        //    P1->setX(0);  // Seta as novas posi��es do personagem na pr�xima tela.
        //    P2->setX(0);
        //    Tela2();      // Vai para a tela2.
        //    break;
        //}

        /*if (key[KEY_ESC]) // Se esc for pressionado...
        {
            if (Sair())   // Aciona a tela do menu de sa�da.
            {
                break;
            }
        }

        blit(buffer, screen, 0, 0, 0, 0, 800, 600); // Desenha o buffer na tela.
        clear( buffer ); // Limpa o buffer;*/

    }
}

void Mapa1::Tela2()
{

    Texture tBarreira1;
    tBarreira1.loadFromFile("Arquivos//Imagens//Praia1.bmp");
    Terra.setTexture(tBarreira1);

    while (1) //loop principal.
    {


        P1->testecolisao(P2,-200,600,-200,600); // Testa a colis�o do Jogador 1 com a tela e com o jogador 2.
        P2->testecolisao(P1,-200,600,-200,600); // Testa a colis�o do Jogador 2 com a tela e com o jogador 1.
        Mar.Movimento();   // Aciona o movimento do cen�rio.
        P1->Movimento();  // Aciona o movimento do personagem.
        P2->Movimento();
        T1.Movimento();   // Aciona o movimento do inimigo (Tanque)

        if ((P1->getX() <= -190)&&(P2->getX() <= -190)) // Se ambos os jogadores sairem da tela pela esquerda...
        {
            Tela1(); // Vai para a tela 1.
            break;
        }
        else if ((P1->getY() <= -190)&&(P2->getY() <= -190)) // Se ambos os jogadores sairem da tela por cima...
        {
            P1->setY(600); // Seta as novas posi��es dos personagens na proxima tela.
            P2->setY(600);
            Tela3();       // Vai para a tela 3.
            break;
        }

        /*if (key[KEY_ESC])
        {
            if (Sair())
            {
                break;

            }
        }

        blit(buffer, screen, 0, 0, 0, 0, 800, 600); // Desenha o buffer na tela.
        clear( buffer ); // Limpa o buffer;

    }
    rest(100); // Rest para evitar que o programa reconhe�a que o bot�o de
               // voltar foi pressionado v�rias vezes e acabe saindo do
               // Mapa1 inteiro.*/
    }
}

void Mapa1::Tela3()
{
    Texture tBarreira1;
    tBarreira1.loadFromFile("Arquivos//Imagens//Praia1.bmp");
    Terra.setTexture(tBarreira1);

    while (1) //loop principal.
    {


        P1->testecolisao(P2,0,600,0,900); // Testa a colis�o do Jogador 1 com a tela e com o jogador 2.
        P2->testecolisao(P1,0,600,0,900); // Testa a colis�o do Jogador 2 com a tela e com o jogador 1.
        Mar.Movimento();   // Aciona o movimento do cen�rio.
        P1->Movimento();   // Aciona o movimento do personagem.
        P2->Movimento();
        Px1.Movimento();   // Aciona o movimento do inimigo (Peixe)
        Px2.Movimento();
        Px3.Movimento();

        if ((P1->getY() >= 630)&&(P2->getY() >= 630))
        {
            P1->setY(0 - P1->getH());
            P2->setY(0 - P2->getH());
            Tela2();
            break;
        }
/*
        if (key[KEY_ESC])
        {
            if (Sair())
            {
                break;

            }
        }

        blit(buffer, screen, 0, 0, 0, 0, 800, 600); // Desenha o buffer na tela.
        clear( buffer ); // Limpa o buffer;

    }
    rest(100); // Rest para evitar que o programa reconhe�a que o bot�o de
               // voltar foi pressionado v�rias vezes e acabe saindo do
               // Mapa1 inteiro.*/
    }
}

bool Mapa1::Sair()
{
    if (M->Sair())
    {
        inicio = true;
        P1->setH(177);
        P1->setL(65);
        P1->setX(250);
        P1->setY(250);
        P1->setvx(1);
        P1->setvy(1);
        P1->setsx(11);   // Reseta os atributos dos jogadores
        P1->setsy(5);    // isso evita bugs que ocorreriam caso
        P2->setH(177);   // o usuario clique novamente em 'Jogar'
        P2->setL(65);    // (no menu) iniciando uma nova partida
        P2->setX(450);   // sem reiniciar o jogo.
        P2->setY(250);
        P2->setvx(1);
        P2->setvy(1);
        P2->setsx(11);
        P2->setsy(5);
        M->Raiz();
        return true;    // Sai do while e sai do jogo.
    }
    else return false;  // Volta para o Jogo.
}

/* Sets */
void Mapa1::setJogadores(Jogador* P, Jogador* PP)
{
    P1 = P;
    P2 = PP;
}


void Mapa1::setMenu(Menu* ME)
{
    M = ME;
}

void Mapa1::setGrafico(GerenciadorGrafico* grafico)
{
    this->grafico = grafico;
}
