# Desafio de Movimentação das Peças de Xadrez em C (Nível Novato)

Este projeto em C demonstra a simulação do movimento de três peças de xadrez (Torre, Bispo e Rainha) utilizando diferentes estruturas de repetição: `for`, `while`, e `do-while`. O objetivo principal é aplicar os conceitos básicos de loops em C para representar os movimentos característicos de cada peça no tabuleiro.

## O Que Foi Implementado

O programa simula os seguintes movimentos:

* **Torre:** Move-se cinco casas para a direita, utilizando um loop `for`.
* **Bispo:** Move-se cinco casas na diagonal para cima e à direita, utilizando um loop `while`. A saída para cada casa percorrida indica a combinação das duas direções ("Cima, Direita").
* **Rainha:** Move-se oito casas para a esquerda, utilizando um loop `do-while`.

Para cada casa percorrida, o programa imprime a direção do movimento no console.

## Requisitos Funcionais

* **Entrada de Dados:** O número de casas a serem movidas para cada peça é definido diretamente no código através de variáveis inteiras.
* **Lógica de Movimentação:** Cada peça tem sua lógica de movimento implementada utilizando uma estrutura de repetição específica.
* **Saída de Dados:** A direção do movimento para cada casa percorrida é impressa no console utilizando a função `printf`. Para o Bispo, a saída combina duas direções (ex: "Cima, Direita"). As saídas seguem o padrão: `Cima`, `Baixo`, `Esquerda`, `Direita`, `Cima Esquerda`, `Direita`.

## Requisitos Não Funcionais

* **Performance:** O código é eficiente e executa sem atrasos perceptíveis para a tarefa proposta.
* **Documentação:** O código está bem documentado com comentários explicando a lógica de cada parte.
* **Legibilidade:** O código é claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada. Apenas variáveis do tipo inteiro e `char[]` (para strings literais em `printf`) são utilizadas.

## Simplificações para o Nível Básico

* Não há validação de entrada do usuário.
* A lógica completa do jogo de xadrez não foi implementada; o foco é a simulação individual do movimento de cada peça.
* Apenas as estruturas de repetição `for`, `while`, e `do-while` são utilizadas, uma para cada peça.

## Como Compilar e Executar

Para compilar e executar o programa, siga os passos abaixo:

1.  **Salve o código:** Salve o código em um arquivo com a extensão `.c` (por exemplo, `movimento_xadrez.c`).
2.  **Abra o terminal ou prompt de comando:** Navegue até o diretório onde você salvou o arquivo.
3.  **Compile o código:** Utilize um compilador C (como o GCC) para compilar o código:
    ```bash
    gcc movimento_xadrez.c -o movimento_xadrez
    ```
4.  **Execute o programa:** Execute o arquivo executável gerado:
    ```bash
    ./movimento_xadrez
    ```

Você verá a saída no seu console mostrando a sequência de movimentos simulada para cada peça.

## Estrutura do Código

O código principal está no arquivo `movimento_xadrez.c` e contém a função `main` que or