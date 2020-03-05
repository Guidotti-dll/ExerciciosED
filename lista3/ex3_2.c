#include <stdio.h>

typedef struct {
    int hora,minuto,segundo;
} Horario;

void mostraHorario1(Horario horario1);
void MostraHorario2(Horario horario2);


void mostraHorario1(Horario horario1){
    printf("%d:%d:%d\n",horario1.hora,horario1.minuto,horario1.segundo);
}

void mostraHorario2(Horario horario2){
    printf("%d:%d:%d\n",horario2.hora,horario2.minuto,horario2.segundo);
}

int main (void){
    Horario horario1,horario2;

    
    printf("Digite o primeiro horario(utilize espaço entre cada parte):");
    scanf("%d %d %d",&horario1.hora,&horario1.minuto,&horario1.segundo);


    printf("Digite o segundo horario(utilize espaço entre cada parte):");
    scanf("%d %d %d",&horario2.hora,&horario2.minuto,&horario2.segundo);


    if (horario1.hora==horario2.hora && horario1.minuto == horario2.minuto && horario1.segundo == horario2.segundo){
        printf("Horários iguais\n");
        }
    else{
        if (horario1.hora>horario2.hora){
            mostraHorario2(horario2);
        }
        else{
            if (horario1.hora<horario2.hora){
                mostraHorario1(horario1);
            }
            else{
                if (horario1.minuto>horario2.minuto){
                    mostraHorario2(horario2);
                }
                else{
                    if (horario1.minuto<horario2.minuto){
                        mostraHorario1(horario1);
                    }
                    else{
                        if (horario1.segundo>horario2.segundo){
                            mostraHorario2(horario2);
                        }
                        else{
                            if (horario1.segundo<horario2.segundo){
                                mostraHorario1(horario1);
                            }
                        }
                    }
                }
            }
        }
    } 
}