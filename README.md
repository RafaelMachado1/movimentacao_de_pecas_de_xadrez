# Desafio de Movimentação das Peças de Xadrez em C (Nível Aventureiro)

Este projeto em C expande o desafio anterior, adicionando a lógica para simular o movimento do Cavalo no tabuleiro de xadrez. A principal característica do movimento do Cavalo é o "L", que é implementado aqui utilizando loops aninhados (`for` e `while`).

## O Que Foi Implementado

O programa agora simula os seguintes movimentos:

* **Torre:** Move-se cinco casas para a direita (utilizando um loop `for`).
* **Bispo:** Move-se cinco casas na diagonal para cima e à direita (utilizando um loop `while`).
* **Rainha:** Move-se oito casas para a esquerda (utilizando um loop `do-while`).
* **Cavalo:** Move-se duas casas para baixo e uma casa para a esquerda (utilizando um loop `for` aninhado com um loop `while`).

Para cada casa percorrida, o programa imprime a direção do movimento no console. O movimento do Cavalo é separado dos movimentos anteriores com uma linha em branco na saída.

## Requisitos Funcionais

1.  **Entrada de Dados:** Os valores para o número de casas a serem movidas para cada peça são definidos diretamente no código como variáveis inteiras. Para o Cavalo, são definidas duas casas para baixo e uma para a esquerda.
2.  **Lógica de Movimentação:**
    * A Torre, o Bispo e a Rainha mantêm suas lógicas de movimento do nível básico.
    * O Cavalo implementa a lógica específica do movimento em "L" utilizando um loop `for` externo e loops `while` internos para controlar os passos verticais e horizontais.
3.  **Saída de Dados:**
    * Para a Torre, Bispo e Rainha, a saída permanece a mesma (direção de cada casa percorrida).
    * Para o Cavalo, a saída imprime a sequência de direções: "Baixo", "Baixo", "Esquerda".
    * O movimento do Cavalo é precedido por uma linha em branco na saída para separação visual.

## Requisitos Não Funcionais

1.  **Performance:** O código é eficiente e executa sem atrasos perceptíveis para a tarefa proposta.
2.  **Documentação:** O código está bem documentado com comentários claros, explicando a lógica do movimento do Cavalo e a utilização dos loops aninhados.
3.  **Legibilidade:** O código é claro, organizado, fácil de entender, com nomes de variáveis descritivos e indentação adequada. Apenas variáveis do tipo inteiro e `char[]` (para strings literais em `printf`) são utilizadas.

## Simplificações para o Nível Intermediário

* Não há validação de entrada do usuário.
* A lógica completa do jogo de xadrez não foi implementada; o foco é a simulação individual do movimento do Cavalo solicitado.
* Assume-se que o Cavalo sempre começa em uma posição inicial definida no código (implícitamente, através da sequência de movimentos).

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

Você verá a saída no seu console mostrando a sequência de movimentos simulada para a Torre, Bispo, Rainha e, separadamente, para o Cavalo.

## Estrutura do Código

O arquivo principal é `movimento_xadrez.c` e contém a função `main` que organiza a simulação dos movimentos de todas as peças:

* **Movimento da Torre (loop `for`):** Simula o movimento horizontal para a direita.
* **Movimento do Bispo (loop `while`):** Simula o movimento diagonal para cima e à direita.
* **Movimento da Rainha (loop `do-while`):** Simula o movimento horizontal para a esquerda.
* **Movimento do Cavalo (loop `for` aninhado com `while`):** Simula o movimento em "L" de duas casas para baixo e uma para a esquerda. O loop `for` externo controla as etapas do movimento, e os loops `while` internos garantem a correta sequência de passos verticais e horizontais.

## Observações

Este desafio demonstra o uso de loops aninhados em C para simular um movimento mais complexo, como o do Cavalo no xadrez. O código mantém a simplicidade para focar no conceito de aninhamento de loops e na lógica específica do movimento do Cavalo.