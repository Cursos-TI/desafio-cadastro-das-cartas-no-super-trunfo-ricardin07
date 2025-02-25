#include <stdio.h>
int main() {

    // variáveis que são usadas
    char estado_1, estado_2, codigo_1[5], codigo_2[5], cidades_1[50], cidades_2[50];
    int turisticos_1, turisticos_2, populacao_1, populacao_2;
    float area_1, area_2, pib_1, pib_2;

    printf("Digite uma letra representando seu estado (A ou B): \n");
    scanf(" %c", &estado_1);  // O espaço antes de %c ajuda a evitar que quebras de linha sejam lidas

    printf("Digite o código da carta (01 a 02): \n");
    scanf("%4s", codigo_1);  // Corrigido para ler o código da carta corretamente

    printf("Nome da cidade: \n");
    scanf(" %49[^\n]", cidades_1);  // O espaço antes de %49[^\n] para garantir que o nome da cidade seja lido corretamente

    printf("Me fale seus pontos turísticos: \n");
    scanf("%d", &turisticos_1);  // Corrigido para ser int, já que são pontos turísticos inteiros

    printf("Me fale sua área: \n");
    scanf("%f", &area_1);

    printf("Me informe o PIB da sua região: \n");
    scanf("%f", &pib_1);

    printf("Me informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao_1);  // Corrigido para ser int, já que a população é um número inteiro

    printf("\nEstado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidades_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f \n", area_1);
    printf("PIB: %.2f Bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", turisticos_1);

    return 0;
}