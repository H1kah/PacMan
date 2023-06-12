#include <iostream>
//a famosa biblioteca, ela que nos garante que cada code à seguir seja compeendido 
class PacMan
//Para citar cada característica do personagem é preciso criar uma base, sendo o que poderá ser citada depois ou associada com algo
{
{
public:
//o public é para que as variáveis daqui possam ser mencionadas em outros lugares, sem problema algum.
    std::string cor;
    int boca;
    int olhos;
};

class Fantasminha
{
public:
    std::string cor;
    int boca;
    int olhos;
};

int main()
{
    PacMan pacman;
    pacman.cor = "amarelo";
    pacman.boca = 1;
    pacman.olhos = 2;

    Fantasminha fantasma_vermelho;
    fantasma_vermelho.cor = "vermelho";
    fantasma_vermelho.boca = 1;
    fantasma_vermelho.olhos = 2;

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