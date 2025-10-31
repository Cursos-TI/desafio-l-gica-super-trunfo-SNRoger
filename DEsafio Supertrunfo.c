#include <stdio.h>

// Desafio Super Trunfo - Comparação de Cartas

// Estrutura para representar uma carta
struct Carta {
    char estado;
    char codigo_cidade[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta, int numero) {
    printf("\n=== CADASTRO DA CARTA %d ===\n", numero);
    
    printf("Digite a letra do Estado (de A a H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta->codigo_cidade);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->nome_cidade);
        
    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta->area);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    
    // Calculando densidade populacional e PIB per capita
    if (carta->area > 0) {
        carta->densidade_populacional = (float)carta->populacao / carta->area;
    } else {
        carta->densidade_populacional = 0;
    }
    
    if (carta->populacao > 0) {
        carta->pib_per_capita = (carta->pib * 1000000000) / carta->populacao / 1000;
    } else {
        carta->pib_per_capita = 0;
    }
}

// Função para exibir uma carta
void exibirCarta(struct Carta carta, int numero) {
    printf("\n=== CARTA %d ===\n", numero);
    printf("Código da Cidade: %s\n", carta.codigo_cidade);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta.densidade_populacional);
    printf("PIB per capita: R$ %.2f mil\n", carta.pib_per_capita);
}

// Função para comparar cartas por população
void compararCartas(struct Carta carta1, struct Carta carta2) {
    printf("\n=== COMPARAÇÃO DAS CARTAS ===\n");
    printf("Atributo escolhido para comparação: POPULAÇÃO\n\n");
    
    printf("Carta 1 (%s): %d habitantes\n", carta1.nome_cidade, carta1.populacao);
    printf("Carta 2 (%s): %d habitantes\n", carta2.nome_cidade, carta2.populacao);
    
    printf("\n=== RESULTADO ===\n");
    
    if (carta1.populacao > carta2.populacao) {
        printf("🏆 CARTA VENCEDORA: CARTA 1 - %s\n", carta1.nome_cidade);
        printf("Motivo: Maior população (%d > %d habitantes)\n", 
               carta1.populacao, carta2.populacao);
    } else if (carta2.populacao > carta1.populacao) {
        printf("🏆 CARTA VENCEDORA: CARTA 2 - %s\n", carta2.nome_cidade);
        printf("Motivo: Maior população (%d > %d habitantes)\n", 
               carta2.populacao, carta1.populacao);
    } else {
        printf("🤝 EMPATE!\n");
        printf("Ambas as cartas têm a mesma população: %d habitantes\n", carta1.populacao);
    }
}

int main() {
    struct Carta carta1, carta2;
    
    // Exibindo cabeçalho do programa
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS ===\n");
    printf("Sistema de Cadastro e Comparação de Cartas de Cidades\n");
    
    // Cadastrando as duas cartas
    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);
    
    // Exibindo as cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);
    
    // Comparando as cartas
    compararCartas(carta1, carta2);
    
    printf("\nObrigado por jogar Super Trunfo!\n");
    
    return 0;
}