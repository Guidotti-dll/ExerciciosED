#include <stdio.h>

int calcDivisao(int n1, int n2 , float *result);

int calcDivisao(int n1, int n2 , float *result)
{

    if(n2!=0)
    {
        *result = (float) n1 / n2;
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int main (void){
    int n1,n2,N,cod;
    float r;


    printf("Digite um valor para N:");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Digite dois valores:");
        scanf("%d %d",&n1,&n2);

        cod = calcDivisao(n1,n2,&r);

        if (cod == 0)
        {
            printf("%.2f\n",r);
        }
        if (cod == 1)
        {
            printf("Divisão por zero\n");
        }
        
        
    }
    



}

