#include <stdio.h>
void classificaCrescente (int *a, int *b);


void classificaCrescente (int *a, int *b){
    int aux;

    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    
    
}

int main(void){

    int n1,n2;

    printf("Digite dois valores:");
    scanf("%d %d",&n1,&n2);

    while (n1!=n2)
    {
        classificaCrescente(&n1,&n2);

        printf("%d %d\n",n1,n2);

        printf("Digite dois valores:");
        scanf("%d %d",&n1,&n2);

    }
    

    return 0;
}