#include <stdio.h>
#include <string.h>

// Define uma estrutura para representar uma carta do Super Trunfo
struct CartaSuperTrunfo {
    char estado;
    char codigo_carta[4]; // Ex: A01, B03. O tamanho é 4 para o caracter nulo '\0'
    char nome_cidade[50]; // Tamanho suficiente para a maioria dos nomes de cidade
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // Declaração de duas variáveis do tipo struct CartaSuperTrunfo
    struct CartaSuperTrunfo carta1, carta2;

    // --- Leitura dos dados da Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");

    // Lendo o estado (um único caractere)
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    // Lendo o código da carta (string)
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", carta1.codigo_carta);

    // Lendo o nome da cidade (string)
    printf("Nome da Cidade: ");
    scanf(" %s", carta1.nome_cidade);

    // Lendo a população (inteiro)
    printf("Populacao: ");
    scanf(" %d", &carta1.populacao);

    // Lendo a área (número com ponto flutuante)
    printf("Área (em km²): ");
    scanf(" %f", &carta1.area);

    // Lendo o PIB (número com ponto flutuante)
    printf("PIB: ");
    scanf(" %f", &carta1.pib);

    // Lendo o número de pontos turísticos (inteiro)
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta1.pontos_turisticos);


    // --- Leitura dos dados da Carta 2 ---
    printf("\n--- Insira os dados da Carta 2 ---\n");

    // Lendo o estado
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    // Lendo o código da carta
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", carta2.codigo_carta);

    // Lendo o nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %s", carta2.nome_cidade);

    // Lendo a população
    printf("Populacao: ");
    scanf(" %d", &carta2.populacao);

    // Lendo a área
    printf("Área (em km²): ");
    scanf(" %f", &carta2.area);

    // Lendo o PIB
    printf("PIB: ");
    scanf(" %f", &carta2.pib);

    // Lendo o número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta2.pontos_turisticos);


    // --- Exibição dos dados cadastrados ---
    printf("\n=====================================\n");
    printf("         Dados das Cartas            \n");
    printf("=====================================\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo_carta);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
