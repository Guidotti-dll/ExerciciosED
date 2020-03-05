#include <stdio.h>

typedef struct {
    int camisa,gols;
} Jogador;

typedef struct {
    int ano;
    Jogador vetorJogador[5];
} Equipe;

void leEquipe(Equipe *equipe);
Jogador leJogador(void);
void marcouGol(int camisaBuscada , Equipe *equipe);
Jogador obtemGoleador(Equipe *equipe);
void escreveJogador(Jogador jogador);

void leEquipe(Equipe *equipe){
    printf("Digite o ano de criação do time:");
    scanf("%d",&equipe->ano);
    for (int i = 0; i < 5; i++)
    {
        equipe->vetorJogador[i]=leJogador();
    }
}

Jogador leJogador(void){
    Jogador player;
    printf("Digite a camisa do jogador:");
    scanf("%d",&player.camisa);
    printf("Digie o numero de gols:");
    scanf("%d",&player.gols);
    return player;
}

void marcouGol(int camisaBuscada , Equipe *equipe){
    int camisaExiste=0;
    
    for (int i = 0; i < 5; i++){
        if(camisaBuscada == equipe->vetorJogador[i].camisa){
            equipe->vetorJogador[i].gols++;
        }
    }
}

Jogador obtemGoleador(Equipe *equipe){
    int goleador=0,indice;

    for (int  i = 0; i < 5; i++)
    {
        if (equipe->vetorJogador[i].gols > goleador)
        {
            goleador=equipe->vetorJogador[i].gols;
            indice = i;
        }
        
    }

    return equipe->vetorJogador[indice];
    
}

void escreveJogador(Jogador jogador){
    printf("Camisa:%d Gols:%d\n",jogador.camisa,jogador.gols);
}

int main(void){
    Equipe equipe;
    int camisaBuscada;
    Jogador goleador;

    leEquipe(&equipe);

    printf("Digite a camisa do jogador que marcou o gol:");
    scanf("%d",&camisaBuscada);
    
    while (camisaBuscada!=99){
        marcouGol(camisaBuscada , &equipe);
        printf("Digite a camisa do jogador que marcou o gol:");
        scanf("%d",&camisaBuscada);
    }

    goleador = obtemGoleador(&equipe);

    escreveJogador(goleador);
    


    return 0;
}