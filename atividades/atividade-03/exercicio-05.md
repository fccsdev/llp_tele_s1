# Atividades de Programação em **Linguagem C** com Loops e Comandos `break` e `continue`

### 1. Atividade com `while`:
- **Descrição**: Escreva um programa que exiba os números pares de 1 a 10 usando um loop `while`.
- **Dica**: Use o operador de módulo (`%`) para verificar se um número é par.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int num = 1;

    printf("Números pares de 1 a 10:\n");

    while (num <= 10) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }

    printf("\n");
    return 0;
}
```

```yaml
Números pares de 1 a 10:
2 4 6 8 10 
```

### 2. Atividade com do while:
**Descrição**: Crie um programa que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite -1 para sair.
**Dica**: Use um loop do while para repetir a solicitação.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int numeroSecreto = 42; // Você pode alterar o número secreto
    int tentativa;

    do {
        printf("Adivinhe um número entre 1 e 100 (ou digite -1 para sair): ");
        scanf("%d", &tentativa);

        if (tentativa == -1) {
            printf("Você escolheu sair. Até mais!\n");
            break;
        } else if (tentativa == numeroSecreto) {
            printf("Parabéns! Você acertou o número.\n");
        } else {
            printf("Tente novamente!\n");
        }
    } while (tentativa != numeroSecreto);

    return 0;
}
```

```yaml
Adivinhe um número entre 1 e 100 (ou digite -1 para sair): 15
Tente novamente!
Adivinhe um número entre 1 e 100 (ou digite -1 para sair): 26
Tente novamente!
Adivinhe um número entre 1 e 100 (ou digite -1 para sair): 8
Tente novamente!
Adivinhe um número entre 1 e 100 (ou digite -1 para sair): 99
Tente novamente!
Adivinhe um número entre 1 e 100 (ou digite -1 para sair): 42
Parabéns! Você acertou o número.



Adivinhe um número entre 1 e 100 (ou digite -1 para sair): -1
Você escolheu sair. Até mais!
```

### 3. Atividade com for:
**Descrição**: Escreva um programa que calcule a soma dos primeiros 10 números inteiros positivos usando um loop for.
**Dica**: Use uma variável acumuladora para calcular a soma.
Resposta:

```c
#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i;
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}
```

```yaml
A soma dos primeiros 10 números inteiros positivos é: 55
```