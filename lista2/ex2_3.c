#include <stdio.h>

void duplaClassificada(int cod, int N1, int N2 , int *V1,int *V2);


void duplaClassificada(int cod, int N1, int N2 , int *V1 , int *V2){
    if (cod == 0)
    {
        if (N1 > N2)
        {
            *V1 = N2;
            *V2 = N1;
        }
        else
        {
            *V1 = N1;
            *V2 = N2;
        }
    }
    if (cod == 1)
    {
        if (N1 > N2)
        {
            *V1 = N1;
            *V2 = N2;
        }
        else
        {
            *V1 = N2;
            *V2 = N1;
        }
        
    }
    
}

int main (void){
    int cod,n1,n2,V1,V2;

    printf("Digite dois valores:");
    scanf("%d %d",&n1,&n2);

    if ((n1+n2)%2 == 0)
    {
        cod=0;
    }
    else
    {
        cod=1;
    }
    
    

    while (n1 != n2)
    {
        duplaClassificada(cod,n1,n2,&V1,&V2);

        printf("%d %d\n",V1,V2);

        printf("Digite dois valores:");
        scanf("%d %d",&n1,&n2);

        if ((n1+n2)%2 == 0)
        {
            cod=0;
        }
        else
        {
            cod=1;
        }
    }
    
    return 0;
}