#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

//Variáveis utilizadas no programa, separada por carta
    //(é necessário colocar variaveis calculadas em uma unidade de medida "padrão", para o cálculo ser compativel e o resultado ter quantidade de caracteres)

        // Variáveis da cidade (São Paulo)
        char nome_estado_1 = "São Paulo";
        int populacao_1 = 12325000;
        int pontos_turisticos_1 = 50;
        float area_1 = 1521.0;
        float pib_1 = 699.0;
        char codigo_carta_1 = "A01";
        char nome_cidade_1 = "São Paulo";
        // Variaveis calculadas
        float densidade_pop_1 = populacao_1 / area_1;
        float pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
        float inverso_densidade_1 = area_1 / populacao_1;
        float super_poder_1 = 
                            (populacao_1 / 1000000.0) +         // dividido pela grande de milhões
                            (area_1 / 1000.0) +                 // dividido pela milhar
                            (pib_1) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_1) +             // número simples
                            (pib_per_capita_1 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_1 * 1000.0);     // amplificado o inverso da densidade
        
        //Variáveis da cidade (Rio de Janeiro)
        char nome_estado_2 = "Rio de Janeiro";
        int populacao_2 = 6748000;
        int pontos_turisticos_2 = 30;
        float area_2 = 1200.0;
        float pib_2 = 300.0;
        char codigo_carta_2 = "B01";
        char nome_cidade_2 = "Rio de Janeiro";
        // Variáveis calculadas
        float densidade_pop_2 = populacao_2 / area_2;
        float pib_per_capita_2 = (pib_2 * 1000000000.0) / populacao_2;
        float inverso_densidade_2 = area_2/ populacao_2;
        float super_poder_2 =
                            (populacao_2 / 1000000.0) +         // dividido pela grande de milhões
                            (area_2 / 1000.0) +                 // dividido pela milhar
                            (pib_2) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_2) +             // número simples
                            (pib_per_capita_2 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_2 * 1000.0);     // amplificado o inverso da densidade

        //Variáveis da cidade (Curitiba)
        char nome_estado_3  = "Paraná";
        int populacao_3 = 1950000;
        int pontos_turisticos_3 = 15;
        float area_3 = 434.0;
        float pib_3 = 125.0;
        char codigo_carta_ = "C01";
        char nome_cidade_3 = "Curitiba";
        // Variáveis calculadas
        float densidade_pop_3 = populacao_3 / area_3;
        float pib_per_capita_3 = (pib_3 * 1000000000.0) / populacao_3;
        float inverso_densidade_3 = area_3 / populacao_3;
        float super_poder_3 =
                            (populacao_3 / 1000000.0) +         // dividido pela grande de milhões
                            (area_3 / 1000.0) +                 // dividido pela milhar
                            (pib_3) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_3) +             // número simples
                            (pib_per_capita_3 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_3 * 1000.0);     // amplificado o inverso da densidade

        // Variáveis da cidade (Belo Horizonte)
        char nome_estado_4  = "Minas Gerais";
        int populacao_4 = 2530000;
        int pontos_turisticos_4 = 14;
        float area_4 = 331.0;
        float pib_4 = 120.0;
        char codigo_carta_ = "D01";
        char nome_cidade_4 = "Belo Horizonte";
        // Variáveis calculadas
        float densidade_pop_4 = populacao_4 / area_4;
        float pib_per_capita_4 = (pib_4 * 1000000000.0) / populacao_4;
        float inverso_densidade_4 = area_4 / populacao_4;
        float super_poder_4 =
                            (populacao_4 / 1000000.0) +         // dividido pela grande de milhões
                            (area_4 / 1000.0) +                 // dividido pela milhar
                            (pib_4) +                           // PIB já em grandeza resumida
                            (pontos_turisticos_4) +             // número simples
                            (pib_per_capita_4 / 10000.0) +      // dividido pela dezena de milhar
                            (inverso_densidade_4 * 1000.0);     // amplificado o inverso da densidade





























}