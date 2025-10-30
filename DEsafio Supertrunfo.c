#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Definindo variáveis separadas para cada atributo da cidade
    char estado;
    char codigo_cidade[10];        // Código da cidade (ex: A01, B02, etc.)
    char nome_cidade[50];          // Nome da cidade
    int populacao;                 // População da cidade
    float area;                    // Área da cidade em km²
    float pib;                     // PIB da cidade em bilhões
    int pontos_turisticos;         // Número de pontos turísticos
    
    // Variáveis para os cálculos
    float densidade_populacional;  // Densidade populacional (hab/km²)
    float pib_per_capita;         // PIB per capita (em milhares de reais)
    
    // Exibindo cabeçalho do programa
    printf("=== SUPER TRUNFO - PAÍSES ===\n");
    printf("Sistema de Cadastro de Cartas de Cidades\n\n");
    
    // Cadastro das Cartas:
    // Solicitando ao usuário que insira as informações de cada cidade
    
    printf("Digite a letra do Estado (de A a H): ");
    scanf(" %c", &estado);

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo_cidade);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);
        
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Calculando densidade populacional e PIB per capita
    if (area > 0) {
        densidade_populacional = (float)populacao / area;
    } else {
        densidade_populacional = 0;
    }
    
    if (populacao > 0) {
        // PIB per capita em milhares de reais (PIB em bilhões / população * 1000)
        pib_per_capita = (pib * 1000000000) / populacao / 1000;
    } else {
        pib_per_capita = 0;
    }
    
    // Exibição dos Dados das Cartas:
        
    printf("\n=== CARTA CADASTRADA ===\n");
    printf("Código da Cidade: %s\n", codigo_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
    // Exibindo os cálculos
    printf("\n=== CÁLCULOS AUTOMÁTICOS ===\n");
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: R$ %.2f mil\n", pib_per_capita);
    
    printf("\nCarta cadastrada com sucesso!\n");
    
    return 0;
    }