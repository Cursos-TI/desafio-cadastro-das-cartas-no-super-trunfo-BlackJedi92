#include <stdio.h>
#include <string.h>
#define MAX_NOME 100 // Constante não utilizada na struct, mas mantida

// Define uma estrutura para representar uma carta do Super Trunfo
struct CartaSuperTrunfo {
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função para limpar o buffer de entrada (stdin)
void limpar_buffer() {
    int c;
    // Descarta caracteres até encontrar uma nova linha ('\n') ou o final do arquivo (EOF)
    while ((c = getchar()) != '\n' && c != EOF) {
        // corpo vazio
    }
}

// Função auxiliar para ler strings de forma segura com fgets e remover o '\n'
void ler_string_segura(char *str, int max_len) {
    if (fgets(str, max_len, stdin) == NULL) {
        // Tratar erro na leitura, se necessário
        return;
    }
    // Remove o '\n' que o fgets adiciona ao final da string (se houver)
    str[strcspn(str, "\n")] = '\0';
}

// Função para ler os dados de uma carta
void ler_carta(struct CartaSuperTrunfo *carta, int numero) {
    printf("\n--- Insira os dados da Carta %d ---\n", numero);

    // Lendo o estado (um único caractere)
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    limpar_buffer(); // Limpa o buffer após o scanf

    // Lendo o código da carta (string) - Usando fgets
    printf("Codigo da Carta (ex: A01): ");
    // O tamanho do array é 4, mas usamos um a menos para segurança
    ler_string_segura(carta->codigo_carta, sizeof(carta->codigo_carta));

    // Lendo o nome da cidade (string) - Usando fgets
    printf("Nome da Cidade (pode ter espaços): ");
    // O tamanho do array é 50
    ler_string_segura(carta->nome_cidade, sizeof(carta->nome_cidade));

    // Lendo a população (inteiro)
    printf("Populacao: ");
    scanf(" %d", &carta->populacao);
    limpar_buffer(); // Limpa o buffer após o scanf

    // Lendo a área (número com ponto flutuante)
    printf("Área (em km²): ");
    scanf(" %f", &carta->area);
    limpar_buffer(); // Limpa o buffer após o scanf

    // Lendo o PIB (número com ponto flutuante)
    printf("PIB (em Bilhões de R$): ");
    scanf(" %f", &carta->pib);
    limpar_buffer(); // Limpa o buffer após o scanf

    // Lendo o número de pontos turísticos (inteiro)
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta->pontos_turisticos);
    limpar_buffer(); // Limpa o buffer após o scanf
}


int main() {
    struct CartaSuperTrunfo carta1, carta2;

    // --- Leitura dos dados das Cartas ---
    ler_carta(&carta1, 1);
    ler_carta(&carta2, 2);

    // --- Cálculos ---
    
    // Garantindo que a área/população não são zero para evitar divisão por zero
    float densidade1 = (carta1.area != 0) ? carta1.populacao / carta1.area : 0.0f;
    float densidade2 = (carta2.area != 0) ? carta2.populacao / carta2.area : 0.0f;

    float pib_per_capita1 = (carta1.populacao != 0) ? (carta1.pib * 1e9) / carta1.populacao : 0.0f;
    float pib_per_capita2 = (carta2.populacao != 0) ? (carta2.pib * 1e9) / carta2.populacao : 0.0f;
    
    printf("\n--- Resultados dos Cálculos ---\n");
    printf("\nDensidade Populacional da Carta 1: %.2f habitantes/km²\n", densidade1);
    printf("Densidade Populacional da Carta 2: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita da Carta 1: %.2f reais\n", pib_per_capita1);
    printf("PIB per capita da Carta 2: %.2f reais\n", pib_per_capita2);


    // --- Exibição dos dados cadastrados ---
    printf("\n=====================================\n");
    printf("             Dados das Cartas          \n");
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
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo_carta);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
