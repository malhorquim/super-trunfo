🃏 Super Trunfo — Desafio Final

Este programa é a versão final do Super Trunfo em C, onde duas cartas de cidades são comparadas com base em dois atributos diferentes, escolhidos pelo jogador.
Ele utiliza estruturas de decisão (if, else, switch), operador ternário, e menus dinâmicos para tornar a lógica mais sofisticada e interativa.

⚙️ Como compilar o programa

No terminal (prompt de comando ou shell Linux), navegue até a pasta onde o arquivo supertrunfos.c está salvo e execute:

gcc supertrunfos.c -o supertrunfos


Isso criará um executável chamado supertrunfos.

▶️ Como executar

Após a compilação, execute o programa com:

./supertrunfos

🧩 Como funciona o jogo

O programa solicita que você cadastre duas cartas, informando:

Estado (A-H)

Código da carta (ex: A01, B02...)

Nome da cidade

População

Área (em km²)

PIB (em bilhões de reais)

Número de pontos turísticos

O sistema calcula automaticamente:

Densidade demográfica (população ÷ área)

PIB per capita (PIB ÷ população)

Após cadastrar as duas cartas, você escolherá dois atributos para comparar.

📋 Atributos disponíveis para comparação
Nº	Atributo	Tipo de comparação
1	População	Maior valor vence
2	Área	Maior valor vence
3	PIB	Maior valor vence
4	Pontos Turísticos	Maior valor vence
5	Densidade Demográfica	Menor valor vence ⚠️
6	PIB per Capita	Maior valor vence
🕹️ Exemplo de uso do menu
=== ESCOLHA DOS ATRIBUTOS ===
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
6 - PIB per Capita
Escolha o primeiro atributo: 3

Escolha o segundo atributo (diferente do primeiro):
1 - População
2 - Área
4 - Pontos Turísticos
5 - Densidade Demográfica
6 - PIB per Capita
Sua escolha: 5


Neste exemplo:

O jogador escolheu PIB e Densidade Demográfica.

A comparação será feita com base nesses dois valores.

A carta vencedora é determinada pela soma total dos dois atributos (lembrando que na densidade vence o menor valor).

🧮 Exemplo de saída do programa
Comparando SãoPaulo (estado A) x Rio (estado B)

Atributo 1: PIB
SãoPaulo: 3000.00 x Rio: 1500.00
→ SãoPaulo venceu

Atributo 2: Densidade Demográfica
SãoPaulo: 50.00 x Rio: 35.00
→ Rio venceu (menor densidade)

SOMA DOS ATRIBUTOS:
SãoPaulo: 3050.00 | Rio: 1535.00

Resultado Final: 🏆 SãoPaulo venceu! 🏆

💡 Observações

O programa não permite escolher o mesmo atributo duas vezes.

O sistema trata entradas inválidas, exibindo mensagens de erro e solicitando nova entrada.

Em caso de empate na soma final, a mensagem “Empate!” é exibida.

👨‍💻 Tecnologias e conceitos utilizados

Linguagem C

Estruturas condicionais (if, else, switch)

Operador ternário (condição ? valor1 : valor2)

Cálculos e comparações numéricas

Menus dinâmicos e validação de entrada
