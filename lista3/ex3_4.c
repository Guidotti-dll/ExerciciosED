#include <stdio.h>

typedef struct {
    int dia,mes,ano;
} Data;

typedef struct {
    int nMatricula;
    Data Nasc;
}Aluno;

void completou(void);
void naoCompletou(void);


void completou(void){

    printf("O aluno ja completou 18 anos.\n");

}
void naoCompletou(void){

    printf("O aluno não completou 18 anos.\n");

}


int main(void){

    Data hoje;
    Aluno al;

    printf("Digite a data de hoje( desta forma -> dia mês ano):");
    scanf("%d %d %d",&hoje.dia,&hoje.mes,&hoje.ano);

    printf("Digite o numero de matrícula do aluno:");
    scanf("%d",&al.nMatricula);

    printf("Digite o dia de nascimento do aluno:");
    scanf("%d",&al.Nasc.dia);

    while (al.Nasc.dia != 99)
    {
        printf("Digite o mês de nascimento do aluno:");
        scanf("%d",&al.Nasc.mes);

        printf("Digite o ano de nascimento do aluno:");
        scanf("%d",&al.Nasc.ano);


        if ((al.Nasc.ano + 18) <= hoje.ano)
        {
            if((al.Nasc.ano + 18) < hoje.ano)
            {
                completou();
            }
            else
            {
                if (al.Nasc.mes <= hoje.mes)
                {
                    if (al.Nasc.mes < hoje.mes)
                    {
                        completou();
                    }
                    else
                    {
                        if (al.Nasc.dia <= hoje.dia )
                        {
                            if (al.Nasc.dia< hoje.dia)
                            {
                                completou();
                            }
                            else
                            {
                                naoCompletou();
                            }
                            
                            
                        }
                        else
                            {
                                naoCompletou();
                            }
                        
                    }
                    
                    
                }
                else
                {
                    naoCompletou();
                }
                
                
            }
            
        }
        else
        {
            naoCompletou();
        }
        
    
    
    printf("Digite o numero de matrícula do aluno:");
    scanf("%d",&al.nMatricula);

    printf("Digite o dia de nascimento do aluno:");
    scanf("%d",&al.Nasc.dia);
    }
    

    return 0;
}