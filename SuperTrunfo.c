#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao;

    // ----------- CARTA 1: SÃO PAULO -----------
    char nome_estado_1[] = "São Paulo";
    char nome_cidade_1[] = "São Paulo";
    char codigo_carta_1[] = "A01";
    int populacao_1 = 12325000;
    float area_1 = 1521.11;
    float pib_1 = 699.28;
    int pontos_turisticos_1 = 50;

    float densidade_populacional_1 = populacao_1 / area_1;
    float inverso_densidade_1 = area_1 / populacao_1;
    float pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    float super_poder_1 = 
                            (populacao_1 / 1000000.0) +         // dividido pela grande de milhões
                            (area_1 / 1000.0) +                 // dividido pela milhar
                            (pib_1) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_1) +             // número simples
                            (pib_per_capita_1 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_1 * 1000.0);     // amplificado o inverso da densidade

    // ----------- CARTA 2: RIO DE JANEIRO -----------
    char nome_estado_2[] = "Rio de Janeiro";
    char nome_cidade_2[] = "Rio de Janeiro";
    char codigo_carta_2[] = "B01";
    int populacao_2 = 6775561;
    float area_2 = 1200.27;
    float pib_2 = 364.1;
    int pontos_turisticos_2 = 20;

    float densidade_populacional_2 = populacao_2 / area_2;
    float inverso_densidade_2 = area_2/ populacao_2;
    float pib_per_capita_2 = (pib_2 * 1000000000.0) / populacao_2;
    float super_poder_2 = 
                            (populacao_2 / 1000000.0) +         // dividido pela grande de milhões
                            (area_2 / 1000.0) +                 // dividido pela milhar
                            (pib_2) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_2) +             // número simples
                            (pib_per_capita_2 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_2 * 1000.0);     // amplificado o inverso da densidade

    // ----------- MENU PRINCIPAL -----------
    printf("\n==================================================\n");
    printf("  BEM VINDO AO SUPER TRUNFO!!! VAMOS COMEÇAR?\n");
    printf("====================================================\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {

    case 1:
        printf("\nCartas carregadas:\n");
        printf("Carta 1: %s (%s)\n", nome_cidade_1, codigo_carta_1);
        printf("Carta 2: %s (%s)\n\n", nome_cidade_2, codigo_carta_2);

        // ---------- MENU DE ATRIBUTOS ----------
        printf("====== MENU DE COMPARAÇÃO ======\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");

        int comparacao1, comparacao2;
        float soma1 = 0, soma2 = 0;

        // PRIMEIRO ATRIBUTO
        printf("\nEscolha o primeiro atributo: ");
        scanf("%d", &comparacao1);

        // SEGUNDO ATRIBUTO
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &comparacao2);
        while (comparacao2 == comparacao1) {
            printf("⚠️ Atributo já escolhido! Escolha outro: ");
            scanf("%d", &comparacao2);
        }

        // ---------- COMPARAÇÃO 1 ----------
        switch (comparacao1) {
        case 1: soma1 += populacao_1; soma2 += populacao_2; break;
        case 2: soma1 += area_1; soma2 += area_2; break;
        case 3: soma1 += pib_1; soma2 += pib_2; break;
        case 4: soma1 += pontos_turisticos_1; soma2 += pontos_turisticos_2; break;
        case 5: soma1 += (1.0 / densidade_populacional_1);
                soma2 += (1.0 / densidade_populacional_2); break;
        case 6: soma1 += pib_per_capita_1; soma2 += pib_per_capita_2; break;
        case 7: soma1 += super_poder_1; soma2 += super_poder_2; break;
        default: printf("Opção inválida!\n"); break;
        }

        // ---------- COMPARAÇÃO 2 ----------
        switch (comparacao2) {
        case 1: soma1 += populacao_1; soma2 += populacao_2; break;
        case 2: soma1 += area_1; soma2 += area_2; break;
        case 3: soma1 += pib_1; soma2 += pib_2; break;
        case 4: soma1 += pontos_turisticos_1; soma2 += pontos_turisticos_2; break;
        case 5: soma1 += (1.0 / densidade_populacional_1);
                soma2 += (1.0 / densidade_populacional_2); break;
        case 6: soma1 += pib_per_capita_1; soma2 += pib_per_capita_2; break;
        case 7: soma1 += super_poder_1; soma2 += super_poder_2; break;
        default: printf("Opção inválida!\n"); break;
        }

        // ---------- RESULTADOS ----------
        printf("\n=== RESULTADOS ===\n");
        printf("Cidade 1: %s → Soma dos atributos: %.2f\n", nome_cidade_1, soma1);
        printf("Cidade 2: %s → Soma dos atributos: %.2f\n", nome_cidade_2, soma2);

        if (soma1 > soma2)
            printf("\n✅ %s venceu!\n", nome_cidade_1);
        else if (soma2 > soma1)
            printf("\n✅ %s venceu!\n", nome_cidade_2);
        else
            printf("\n🤝 Empate!\n");

        break;

    case 2:
        printf("\n====== REGRAS DO JOGO ======\n");
        printf("\n");
        printf("O jogo Super Trunfo é muito simples:\n");
        printf("1º Escolha a sua carta.\n");
        printf("2º Escolha o atributo que deseja comparar.\n");
        printf("3º Vai aparecer na tela o resultado do jogo (quem venceu ou se deu empate)\n\n");
        printf("OBS: Certifique-se de escolher atributos válidos,\n");
        printf("\n");
        break;

    case 3:
        printf("\nSaindo do jogo... Até logo!\n");
        break;

    default:
        printf("\nOpção inválida!\n");
        break;
    }

    return 0;
}