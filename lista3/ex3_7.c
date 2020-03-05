#include <stdio.h>

typedef struct {
    int camisa,gols;
} Jogador;

Jogador leJogador(void);
void escreveJogador(Jogador jogador);
int ehGoleador(Jogador testeJogador);

Jogador leJogador(void){
    Jogador player;
    printf("Digite a camisa do jogador:");
    scanf("%d",&player.camisa);
    printf("Digie o numero de gols:");
    scanf("%d",&player.gols);
    return player;
}

int ehGoleador(Jogador testeJogador){
    if(testeJogador.gols > 5){
        return 1;
    }
    else{
        return 0;
    }
}

void escreveJogador(Jogador jogador){
    printf("Camisa:%d Gols:%d\n",jogador.camisa,jogador.gols);
}



int main(void){
    Jogador jogador;
    int goleador;

    jogador = leJogador();
    goleador = ehGoleador(jogador);
    if (goleador == 1){
        printf("É goleador!!!\n");
    }
    else{
        printf("Não é goleador!!\n");
    }
    escreveJogador(jogador);
    return 0;
}

