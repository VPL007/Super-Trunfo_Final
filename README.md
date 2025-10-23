🃏 Super Trunfo – Cidades Brasileiras

Jogo em linguagem C baseado no clássico Super Trunfo, adaptado para cartas de cidades brasileiras.
O jogador escolhe dois atributos diferentes para comparar entre as cidades, e a que tiver a maior soma dos valores vence a rodada!


🧩 Funcionalidades:
Comparação de duas cartas (São Paulo × Rio de Janeiro)
Escolha de dois atributos distintos via menus interativos
Tratamento de empate
Regra especial: menor densidade demográfica vence
Uso de switch-case e operador ternário


🎮 Como Jogar

Ao executar o programa, será exibido o menu principal:
1. Iniciar jogo → Inicia a comparação entre São Paulo e Rio de Janeiro
2. Regras do jogo → Mostra as instruções
3. Sair → Encerra o programa

📊 Atributos Disponíveis para Comparação
Nº	Atributo	Tipo de Comparação	Observação
1.	População	- Maior valor vence	
2.	Área (km²) - Maior valor vence	
3.	PIB (em bilhões) -	Maior valor vence	
4.	Pontos turísticos -	Maior valor vence	
5.	Densidade populacional -	Menor valor vence	(Regra especial)
6.	PIB per capita -	Maior valor vence	
7.	Super Poder -	Maior valor vence	(Soma de valores adaptadospara a mesma grandeza)

Declaração das variáveis das duas cartas

Cálculo automático de densidade e PIB per capita

Menu principal com switch

Submenus interativos para escolha dos atributos

Comparação com tratamento especial para densidade

Impressão do vencedor (ou empate)

💡 Dica: Compilando em IDEs

Se estiver usando Dev-C++, Code::Blocks ou VS Code:

Crie um novo projeto de console em C.

Cole o código completo no arquivo principal (main.c ou super_trunfo.c).

Compile e execute com F9 (Dev-C++) ou Build → Run (Code::Blocks).

🧑‍💻 Autor

Dr. Stark
Projeto desenvolvido como exercício prático de lógica de programação em C, abordando:
switch, operadores ternários, controle de fluxo e manipulação de variáveis numéricas.

🏁 Licença

Este projeto é de uso educacional e pode ser livremente modificado e distribuído.
