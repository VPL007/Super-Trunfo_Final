#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para obter o valor de um atributo de uma carta
float obterValor(int atributo, int carta,
                 int populacao_1, int populacao_2,
                 float area_1, float area_2,
                 float pib_1, float pib_2,
                 int pontos_turisticos_1, int pontos_turisticos_2,
                 float densidade_pop_1, float densidade_pop_2,
                 float pib_per_capita_1, float pib_per_capita_2,
                 float super_poder_1, float super_poder_2) {
    switch (atributo) {
        case 1: return (carta == 1) ? populacao_1 : populacao_2;
        case 2: return (carta == 1) ? area_1 : area_2;
        case 3: return (carta == 1) ? pib_1 : pib_2;
        case 4: return (carta == 1) ? pontos_turisticos_1 : pontos_turisticos_2;
        case 5: return (carta == 1) ? densidade_pop_1 : densidade_pop_2;
        case 6: return (carta == 1) ? pib_per_capita_1 : pib_per_capita_2;
        case 7: return (carta == 1) ? super_poder_1 : super_poder_2;
        default: return 0;
    }
}

int main() {
    // ---------- Dados das cartas ----------
    char nome_estado_1[] = "São Paulo";
    char nome_cidade_1[] = "São Paulo";
    char codigo_carta_1[] = "A01";
    int populacao_1 = 12325000;
    float area_1 = 1521.11;
    float pib_1 = 699.28;
    int pontos_turisticos_1 = 15;

    char nome_estado_2[] = "Rio de Janeiro";
    char nome_cidade_2[] = "Rio de Janeiro";
    char codigo_carta_2[] = "A02";
    int populacao_2 = 6775561;
    float area_2 = 1182.3;
    float pib_2 = 364.05;
    int pontos_turisticos_2 = 20;

    // Calculados
    float densidade_pop_1 = populacao_1 / area_1;
    float densidade_pop_2 = populacao_2 / area_2;
    float pib_per_capita_1 = (pib_1 * 1000000) / populacao_1;
    float pib_per_capita_2 = (pib_2 * 1000000) / populacao_2;
    float super_poder_1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + (1 / densidade_pop_1) + pib_per_capita_1;
    float super_poder_2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + (1 / densidade_pop_2) + pib_per_capita_2;

    // ---------- Variáveis do jogo ----------
    char opcao;
    int sair = 0;

    while (!sair) {
        printf("\n=== SUPER TRUNFO ===\n");
        printf("Menu:\n");
        printf("I - Iniciar Jogo\n");
        printf("R - Regras\n");
        printf("C - Cartas cadastradas\n");
        printf("S - Sair\n");
        printf("Escolha a opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'R':
            case 'r':
                printf("\n=== REGRAS DO JOGO ===\n");
                printf("1. Escolha a sua carta.\n");
                printf("2. Escolha dois atributos para comparar.\n");
                printf("3. O computador usará a outra carta automaticamente.\n");
                printf("4. Serão exibidos os resultados de cada atributo e a soma.\n");
                break;

            case 'C':
            case 'c':
                printf("\n=== CARTAS CADASTRADAS ===\n");
                printf("Carta 1: %s (%s) - %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n\n",
                       nome_cidade_1, nome_estado_1, codigo_carta_1, populacao_1, area_1, pib_1, pontos_turisticos_1, densidade_pop_1, pib_per_capita_1, super_poder_1);
                printf("Carta 2: %s (%s) - %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nPontos turísticos: %d\nDensidade: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n\n",
                       nome_cidade_2, nome_estado_2, codigo_carta_2, populacao_2, area_2, pib_2, pontos_turisticos_2, densidade_pop_2, pib_per_capita_2, super_poder_2);
                break;

            case 'I':
            case 'i': {
                // Escolha da carta
                char escolha_carta;
                int carta_jogador, carta_computador;
                printf("\nEscolha sua carta:\nA - São Paulo\nB - Rio de Janeiro\n");
                scanf(" %c", &escolha_carta);

                if (escolha_carta == 'A' || escolha_carta == 'a') {
                    carta_jogador = 1;
                    carta_computador = 2;
                } else {
                    carta_jogador = 2;
                    carta_computador = 1;
                }

                // Escolha de atributos
                int atributo1, atributo2;
                float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
                float soma1, soma2;

                printf("\nAtributos disponíveis:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - PIB per capita\n7 - Super Poder\n");

                printf("Escolha o primeiro atributo (1-7): ");
                scanf("%d", &atributo1);

                do {
                    printf("Escolha o segundo atributo (1-7, diferente do primeiro): ");
                    scanf("%d", &atributo2);
                    if (atributo2 == atributo1)
                        printf("⚠️ Atributo repetido! Escolha outro.\n");
                } while (atributo2 == atributo1);

                // Obter valores
                valor1_carta1 = obterValor(atributo1, carta_jogador,
                    populacao_1, populacao_2, area_1, area_2, pib_1, pib_2,
                    pontos_turisticos_1, pontos_turisticos_2,
                    densidade_pop_1, densidade_pop_2,
                    pib_per_capita_1, pib_per_capita_2,
                    super_poder_1, super_poder_2);

                valor1_carta2 = obterValor(atributo1, carta_computador,
                    populacao_1, populacao_2, area_1, area_2, pib_1, pib_2,
                    pontos_turisticos_1, pontos_turisticos_2,
                    densidade_pop_1, densidade_pop_2,
                    pib_per_capita_1, pib_per_capita_2,
                    super_poder_1, super_poder_2);

                valor2_carta1 = obterValor(atributo2, carta_jogador,
                    populacao_1, populacao_2, area_1, area_2, pib_1, pib_2,
                    pontos_turisticos_1, pontos_turisticos_2,
                    densidade_pop_1, densidade_pop_2,
                    pib_per_capita_1, pib_per_capita_2,
                    super_poder_1, super_poder_2);

                valor2_carta2 = obterValor(atributo2, carta_computador,
                    populacao_1, populacao_2, area_1, area_2, pib_1, pib_2,
                    pontos_turisticos_1, pontos_turisticos_2,
                    densidade_pop_1, densidade_pop_2,
                    pib_per_capita_1, pib_per_capita_2,
                    super_poder_1, super_poder_2);

                // Comparação
                printf("\n--- RESULTADO DAS COMPARAÇÕES ---\n");

                for (int i = 1; i <= 2; i++) {
                    int atributo = (i == 1) ? atributo1 : atributo2;
                    float v1 = (i == 1) ? valor1_carta1 : valor2_carta1;
                    float v2 = (i == 1) ? valor1_carta2 : valor2_carta2;
                    char* nome1 = (carta_jogador == 1) ? nome_cidade_1 : nome_cidade_2;
                    char* nome2 = (carta_computador == 1) ? nome_cidade_1 : nome_cidade_2;

                    printf("\nAtributo %d: ", atributo);
                    if (atributo == 5) { // densidade menor vence
                        if (v1 < v2) printf("%s venceu! (%.2f vs %.2f)\n", nome1, v1, v2);
                        else if (v2 < v1) printf("%s venceu! (%.2f vs %.2f)\n", nome2, v2, v1);
                        else printf("Empate! (%.2f = %.2f)\n", v1, v2);
                    } else {
                        if (v1 > v2) printf("%s venceu! (%.2f vs %.2f)\n", nome1, v1, v2);
                        else if (v2 > v1) printf("%s venceu! (%.2f vs %.2f)\n", nome2, v2, v1);
                        else printf("Empate! (%.2f = %.2f)\n", v1, v2);
                    }
                }

                soma1 = valor1_carta1 + valor2_carta1;
                soma2 = valor1_carta2 + valor2_carta2;

                printf("\nSoma total dos atributos:\n%s: %.2f\n%s: %.2f\n",
                       (carta_jogador == 1) ? nome_cidade_1 : nome_cidade_2, soma1,
                       (carta_computador == 1) ? nome_cidade_1 : nome_cidade_2, soma2);

                if (soma1 > soma2)
                    printf("\n🏆 %s venceu a rodada!\n", (carta_jogador == 1) ? nome_cidade_1 : nome_cidade_2);
                else if (soma2 > soma1)
                    printf("\n🏆 %s venceu a rodada!\n", (carta_computador == 1) ? nome_cidade_1 : nome_cidade_2);
                else
                    printf("\n🤝 Empate!\n");

                break;
            }

            case 'S':
            case 's':
                sair = 1;
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
