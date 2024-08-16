### 1. Atividade com Array Unidimensional:
- **Descrição**: Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um array. Em seguida, exiba a soma desses números.
- **Dica**: Use um loop `for` para ler os números e outro loop para calcular a soma.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    // Leitura dos números
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Cálculo da soma
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
```

```yaml
Digite 5 números inteiros:
Número 1: 5
Número 2: 6
Número 3: 1
Número 4: 8
Número 5: 8
A soma dos números é: 28

Digite 5 números inteiros:
Número 1: 2
Número 2: 5
Número 3: 9
Número 4: 20   
Número 5: -29
A soma dos números é: 7
```

## 2. Atividade com Array Multidimensional (Matriz):
**Descrição**: Crie um programa que leia uma matriz 3x3 (ou seja, uma matriz com 3 linhas e 3 colunas) e exiba a soma dos elementos da diagonal principal.
**Dica**: Use um loop for aninhado para ler os elementos da matriz e calcule a soma dos elementos da diagonal principal.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int matriz[3][3];
    int somaDiagonal = 0;

    // Leitura da matriz 3x3
    printf("Digite os elementos de uma matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    for (int i = 0; i < 3; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", somaDiagonal);

    return 0;
}
```

```yaml
Digite os elementos de uma matriz 3x3:
Elemento [0][0]: 5
Elemento [0][1]: 6
Elemento [0][2]: 4
Elemento [1][0]: 7
Elemento [1][1]: 8
Elemento [1][2]: 9
Elemento [2][0]: 1
Elemento [2][1]: 2
Elemento [2][2]: 0
A soma dos elementos da diagonal principal é: 13

Digite os elementos de uma matriz 3x3:
Elemento [0][0]: 2 
Elemento [0][1]: 5
Elemento [0][2]: 6
Elemento [1][0]: 4
Elemento [1][1]: 2
Elemento [1][2]: 9
Elemento [2][0]: 7
Elemento [2][1]: 8
Elemento [2][2]: 2
A soma dos elementos da diagonal principal é: 6
```