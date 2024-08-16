# Programa em C: Avaliação de Pontuação em Jogo de Sinuca

## Descrição:
Escreva um programa que leia a pontuação obtida por um jogador em um jogo de Sinuca e classifique-a com base nos seguintes critérios:
- 0 -| 10  -> Insuficiente
- 10 -| 40  -> Regular
- 40 -| 70  -> Bom
- 70 -| 90  -> Ótimo
- 90 -| 100 -> Excelente  

O valor a ser avaliado será armazenado em uma variável inteira chamada `x`. Use o comando `if-else if` para imprimir a mensagem correspondente ao valor de `x`.

## Implementação:

```c
#include <stdio.h>

int main() {
    int x;

    // Leitura da pontuação do jogador
    printf("Digite a pontuação obtida pelo jogador (0 a 100): ");
    scanf("%d", &x);

    // Avaliação da pontuação usando if-else if
    if (x >= 0 && x < 10) {
        printf("Insuficiente\n");
    } else if (x >= 10 && x < 40) {
        printf("Regular\n");
    } else if (x >= 40 && x < 70) {
        printf("Bom\n");
    } else if (x >= 70 && x < 90) {
        printf("Ótimo\n");
    } else if (x >= 90 && x <= 100) {
        printf("Excelente\n");
    } else {
        printf("Pontuação inválida! Por favor, insira um valor entre 0 e 100.\n");
    }

    return 0;
}
```

```yaml
Digite a pontuação obtida pelo jogador (0 a 100): 12
Regular

Digite a pontuação obtida pelo jogador (0 a 100): 99
Excelente

Digite a pontuação obtida pelo jogador (0 a 100): 48
Bom

Digite a pontuação obtida pelo jogador (0 a 100): 89
Ótimo

Digite a pontuação obtida pelo jogador (0 a 100): 7
Insuficiente

Digite a pontuação obtida pelo jogador (0 a 100): 2222
Pontuação inválida! Por favor, insira um valor entre 0 e 100.
```

