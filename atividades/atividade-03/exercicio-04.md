# Atividades de Programação em **Linguagem C** com Declarações Condicionais

### 1. Atividade com `if`:
- **Descrição**: Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou zero. Use a declaração `if`.
- **Dica**: Use a função `scanf` para ler o número e compare-o com zero.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
```

```yaml
Digite um número inteiro: 15
O número é positivo.

Digite um número inteiro: -35
O número é negativo.

Digite um número inteiro: 0
O número é zero.
```

2. Atividade com if else:
Descrição: Crie um programa que determine se um ano é bissexto ou não. Um ano é bissexto se for divisível por 4, exceto quando é divisível por 100 (a menos que também seja divisível por 400).
Dica: Use a declaração if else para verificar as condições.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    } else {
        printf("%d não é um ano bissexto.\n", ano);
    }

    return 0;
}
```

```yaml
Digite um ano: 1983 
1983 não é um ano bissexto.

Digite um ano: 1984
1984 é um ano bissexto.

Digite um ano: 2000
2000 é um ano bissexto.
```

3. Atividade com switch:
Descrição: Implemente um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente (1 = domingo, 2 = segunda-feira, etc.).
Dica: Use a estrutura switch para associar os números aos dias da semana.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido. Digite um número de 1 a 7.\n");
    }

    return 0;
}
```

```yaml
Digite um número de 1 a 7: 1
Domingo

Digite um número de 1 a 7: 7
Sábado

Digite um número de 1 a 7: 5
Quinta-feira
```

4. Atividade com Operador Ternário:
Descrição: Escreva um programa que leia dois números inteiros e exiba o maior deles usando o operador ternário.
Dica: Use a expressão (a > b) ? a : b para encontrar o maior número.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int a, b, maior;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    maior = (a > b) ? a : b;

    printf("O maior número é: %d\n", maior);

    return 0;
}
```

```yaml
Digite dois números inteiros: 1 5
O maior número é: 5

Digite dois números inteiros: 6 32  
O maior número é: 32

Digite dois números inteiros: -1 10
O maior número é: 10
```