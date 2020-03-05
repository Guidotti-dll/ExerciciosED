#include <stdio.h>

typedef struct 
{
    int dia,mes,ano;
} Data;

typedef struct 
{
    int nMatricula;
    Data Nasc;
}Aluno;


int main(void){

    Data data,vetorData[5];
    Aluno alunos[5];
    int cont=0;

    

    for (int i = 0; i < 5; i++)
    {
    
        printf("Digite o numero de matrícula do aluno:");
        scanf("%d",&alunos[i].nMatricula);

        printf("Digite o dia de nascimento do aluno:");
        scanf("%d",&alunos[i].Nasc.dia);

        printf("Digite o mês de nascimento do aluno:");
        scanf("%d",&alunos[i].Nasc.mes);

        printf("Digite o ano de nascimento do aluno:");
        scanf("%d",&alunos[i].Nasc.ano);

    }

    printf("Digite uma data(dia mês ano):");
    scanf("%d %d %d",&data.dia,&data.mes,&data.ano);

    for (int i = 0; i < 5; i++)
    {
        if (data.mes == alunos[i].Nasc.mes)
        {
            vetorData[cont].dia=alunos[i].Nasc.dia;
            vetorData[cont].mes=alunos[i].Nasc.mes;
            vetorData[cont].ano=alunos[i].Nasc.ano;
            cont++;
        }
        
    }

    for (int i = 0; i < cont; i++)
    {
        printf("%d/%d/%d\n",vetorData[i].dia,vetorData[i].mes,vetorData[i].ano);
    }
    
    
    
    
    return 0;
}