#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[02], estado2[02];  //Estado representado por uma letra(A a Z):
    char codigo1[05], codigo2[05];  // Código da carta, composto pela letra do estado + número:
    char nome1[50], nome2[50];  //Nome da cidade:
    int populacao1, populacao2;  //População da cidade:
    float area1, area2;  //Área   da cidade em km²:
    float pib1, pib2;     // PIB da cidade
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos
    
    // Cadastro da primeira Carta:

    printf("\nDetalhes das Cartas:\n");

    printf("Cadastro da Carta 01:\n");

    printf("Digite a letra do estado (A a H):\n");
    scanf(" %s1", estado1);

    printf("Digite o código da carta (letra do estado seguida de número, ex: A01):\n");
    scanf("%s4", codigo1);


    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", nome1);


    printf("Digite a população da cidade: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos1);
    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Detalhes da primeira Carta:

    printf("\nDetalhes da Carta01:\n");

    printf("Digite a letra do Estado (A a H): %s\n", estado1);
    printf("Digite o código da Carta: %s\n", codigo1);
    printf("Digite o Nome da Cidade: %s\n", nome1);
    printf("Digite a População da Cidade: %i habitantes\n", populacao1);
    printf("Digite a Área da Cidade: %.2f km²\n", area1);
    printf("Digite o PIB: R$ %.2f\n", pib1);
    printf("Digite o Número de pontos turísticos: %i\n", pontos_turisticos1);
    printf("---------------------------------\n");

    // Cadastro da segunda Carta:
    printf("\nCadastro da Carta 02:\n");

    printf("Digite a letra do estado (A a H): \n");
    scanf("%s1", estado2); 

    printf("Digite o código da carta (letra do estado seguida de número, ex: A01):\n");
    scanf("%s4", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i",&pontos_turisticos2);

    //Detalhes da segunda Carta:

    printf("\nDetalhes da Carta02:\n");

    printf("Digite a letra do Estado (A a H): %s\n", estado2);
    printf("Digite o código da Carta: %s\n", codigo2);
    printf("Digite o Nome da Cidade: %s\n", nome2);
    printf("Digite a População da Cidade: %d habitantes\n", populacao2);
    printf("Digite a Área da Cidade: %.2f km²\n", area2);
    printf("Digite o PIB: R$ %.2f\n", pib2);
    printf("Digite o Número de pontos turísticos: %i\n", pontos_turisticos2);
    printf("---------------------------------\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nExibindo Cartas Cadastradas:\n");
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %i habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %i\n", pontos_turisticos1);
    printf("---------------------------------\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %i\n", pontos_turisticos2);
    printf("---------------------------------\n");
    
    return 0;
}
