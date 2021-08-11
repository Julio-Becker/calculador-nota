#include <stdio.h>
int main(void)
{
    float prova1, prova2, trabalho, media;
    printf("Olá, bom dia! Hoje você verá meu trabalho\n");
    printf("Este é meu calculador de médias\n");
    printf("\nPrimeiro, digite a nota da prova 1: ");
    scanf("%f", &prova1);
    printf("\nDigite a nota da prova 2: ");
    scanf("%f", &prova2);
    printf("\nDigite a nota de trabalho: ");
    scanf("%f", &trabalho);
    media = prova1 + prova2 + trabalho;
    media = media / 3;
    printf("\nSua nota é: %.2f", media);
    return (0);
}
