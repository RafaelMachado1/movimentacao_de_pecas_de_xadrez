# Desafio de Movimentação das Peças de Xadrez em C (Nível Mestre)

Este projeto em C demonstra técnicas avançadas para simular o movimento de peças de xadrez, incluindo recursividade e loops complexos.

## O Que Foi Implementado

O programa simula os seguintes movimentos:

* **Torre:** Move-se cinco casas para a direita, utilizando uma função recursiva (`moverTorreRecursivo`).
* **Bispo:** Move-se cinco casas na diagonal para cima e à direita, utilizando uma função recursiva (`moverBispoRecursivo`) e também implementado com loops aninhados.
* **Rainha:** Move-se oito casas para a esquerda, utilizando uma função recursiva (`moverRainhaRecursivo`).
* **Cavalo:** Move-se duas casas para cima e uma casa para a direita, utilizando loops aninhados complexos com múltiplas condições.

A direção de cada casa percorrida é impressa no console, com uma linha em branco separando o movimento de cada peça.

## Requisitos Funcionais

1.  **Entrada de Dados:** O número de casas a serem movidas para a recursão e as condições dos loops para o Cavalo são definidos como variáveis inteiras no código.
2.  **Recursividade (Torre, Bispo e Rainha):**
    * A função `moverTorreRecursivo` simula o movimento da Torre para a direita.
    * A função `moverBispoRecursivo` simula o movimento do Bispo na diagonal para cima e à direita.
    * A função `moverRainhaRecursivo` simula o movimento da Rainha para a esquerda.
3.  **Loops Complexos (Cavalo):** Loops aninhados são utilizados para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita). O loop externo controla o movimento vertical ("Cima"), e o loop interno, condicionado à conclusão do movimento vertical, controla o movimento horizontal ("Direita").
4.  **Loops Aninhados (Bispo):** O movimento do Bispo também é implementado usando um loop `for` externo para o movimento vertical e um loop `for` interno (embora neste caso, o interno itere apenas uma vez para simplicidade, demonstrando a estrutura aninhada).
5.  **Saída de Dados:** A direção de cada movimento é impressa no console utilizando `printf`, seguindo o padrão ("Cima", "Baixo", "Esquerda", "Direita", "Cima, Direita"). Cada peça tem sua saída separada por uma linha em branco.

## Requisitos Não Funcionais

1.  **Performance:** O código é eficiente para o escopo do desafio. As funções recursivas são simples e não causam estouro de pilha para o número de movimentos definidos.
2.  **Documentação:** O código está bem documentado com comentários explicando a lógica da recursividade e o funcionamento dos loops complexos.
3.  **Legibilidade:** O código é claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada. Apenas variáveis do tipo inteiro são utilizadas para controlar o número de casas.

## Simplificações para o Nível Avançado

* Não há validação de entrada do usuário.
* A implementação se limita aos movimentos específicos solicitados para cada peça.

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

Você verá a saída no seu console mostrando a sequência de movimentos simulada para a Torre (recursivo), Bispo (recursivo com loops), Rainha (recursivo) e Cavalo (loops complexos).

## Estrutura do Código

O arquivo principal é `movimento_xadrez.c` e contém as seguintes funções:

* `moverTorreRecursivo(int casas)`: Função recursiva para o movimento da Torre.
* `moverBispoRecursivo(int casas)`: Função recursiva para o movimento do Bispo.
* `main()`: Função principal que chama as funções de movimento para cada peça e utiliza loops complexos para o Cavalo.

A lógica para o Cavalo no `main()` utiliza um loop `for` externo para controlar o movimento vertical ("Cima") e um loop `for` interno que é executado somente após a conclusão dos movimentos verticais para realizar o movimento horizontal ("Direita").

## Observações

Este desafio explora o uso de recursão como uma alternativa aos loops para movimentos lineares e diagonais, e demonstra a criação de loops aninhados com condições específicas para simular o movimento não linear do Cavalo. A implementação do Bispo demonstra ambas as abordagens (recursão e loops aninhados).