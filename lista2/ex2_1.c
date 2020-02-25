#include <stdio.h>
void duplaCrescente (int a ,int b , int *Ma , int *Me);


void duplaCrescente (int a ,int b , int *Ma , int *Me){

    if(a>b){
        *Ma = a;
        *Me = b;
    }
    else
    {
        *Ma = b;
        *Me = a;
    }
    

    
}

int main(void){

    int a,b,ma,me;

    printf("Digite dois valores:");
    scanf("%d %d",&a,&b);

    while (a!=b)
    {
        duplaCrescente(a,b,&ma,&me);

        printf("%d %d\n",me,ma);

        printf("Digite dois valores:");
        scanf("%d %d",&a,&b);

    }
    

    return 0;
}