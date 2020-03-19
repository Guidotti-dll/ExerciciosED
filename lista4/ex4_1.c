#include <stdio.h>

typedef struct 
{
    float raioCirculo,coordenadaCentroX,coordenadaCentroY;

}Circulo ;

void criaCirculo(Circulo *circuloCriado , float coordenadaX, float coordenadaY, float raio);
float areaCirculo(Circulo *circuloCriado);

void criaCirculo(Circulo *circuloCriado,float coordenadaX, float coordenadaY, float raio){
    circuloCriado->coordenadaCentroX = coordenadaX;
    circuloCriado->coordenadaCentroY = coordenadaY;
    circuloCriado->raioCirculo = raio;
}





int main(void){
    Circulo *vetorCirculo[2];
    float coordenadaX,coordenadaY, raio;

    for (int index = 0; index < 2; index++){
        printf("Digite a posição do centro do circulo no eixo X , no eixo Y e o seu raio:");
        scanf("%f %f %f",&coordenadaX,&coordenadaY,&raio);
        criaCirculo(&vetorCirculo[index],coordenadaX,coordenadaY,raio);
    }
    

    return 0;
}