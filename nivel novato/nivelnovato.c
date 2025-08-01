#include <stdint.h>

int main(){

    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    printf("Digite seu estado: \n");
    scanf("%s, &estado");

    printf("Digite seu codigo: \n");
    scanf("%s, codigo");

    printf("Digite sua cidade: \n");
    scanf("%s, cidade");

    printf("Digite sua populacao: \n");
    scanf("%f, &populacao");

    printf("Digite sua area: \n");
    scanf("%f, &area");

    printf("Digite seu PIB: \n");
    scanf("%f, &PIB");

    printf("Digite seus pontos turisticos: \n");
    scanf("%f, &pontos turisticos");

    printf("Estado: %s\n, Estado");
    printf("Codigo: %s\n, Codigo");
    printf("Cidade: %s\n, Cidade");
    printf("Populacao: %f\n, Populacao");
    printf("Area: %f\n, Area");
    printf("PIB: %f\n, PIB");
    printf("Pontos Turisticos: %f\n, Pontos Turisticos");



return 0;

}