#include <iostream>
//a famosa biblioteca, ela que nos garante que cada code à seguir seja compeendido 
class PacMan
//Para citar cada característica do personagem é preciso criar uma base, sendo o que poderá ser citada depois ou associada com algo
{
{
public:
//o public é para que as variáveis daqui possam ser mencionadas em outros lugares, sem problema algum. No caso, aqui está o do pacman
    std::string cor;
    int boca;
    int olhos;
//aqui estão as tais variáveis, as características que o Pac Man possui.
};

class Fantasminha
//Para citar cada característica do personagem é preciso criar uma base, sendo o que poderá ser citada depois ou associada com algo
{
public:
//o public é para que as variáveis daqui possam ser mencionadas em outros lugares, sem problema algum. No caso, aqui está o do fantasminha.
    std::string cor;
    int boca;
    int olhos;
};

int main()
//parte principal do código, aqui qeu a mágica acontecerá
{
    PacMan pacman;
    pacman.cor = "amarelo";
    pacman.boca = 1;
    pacman.olhos = 2;
//apenas um personagem, não há outras versões dele. Aqui está as características dele, mostrando cada coisa que ele tem.
    Fantasminha fantasma_vermelho;
    fantasma_vermelho.cor = "vermelho";
    fantasma_vermelho.boca = 1;
    fantasma_vermelho.olhos = 2;
//Existe vários fantasmas, as características são iguais mesmo, a diferença é que mostrará qual é qual é a cor. Ou seja, a base será a mesma, mas a cor mudará.
    Fantasminha fantasma_azul;
    fantasma_azul.cor = "azul";
    fantasma_azul.boca = 1;
    fantasma_azul.olhos = 2;

    Fantasminha fantasma_laranja;
    fantasma_laranja.cor = "laranja";
    fantasma_laranja.boca = 1;
    fantasma_laranja.olhos = 2;

    Fantasminha fantasma_rosa;
    fantasma_rosa.cor = "rosa";
    fantasma_rosa.boca = 1;
    fantasma_rosa.olhos = 2;

    return 0;
}
