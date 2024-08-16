# Exercícios de Programação em **Linguagem C**: Variáveis, Tipos de Dados e Operadores

### 1. Calculadora Simples
- **Descrição**: Crie um programa que leia dois números inteiros do usuário e exiba a soma, subtração, multiplicação e divisão desses números.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Multiplicação: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Divisão: %.2f\n", (float)num1 / num2);
    } else {
        printf("Divisão: Não é possível dividir por zero.\n");
    }

    return 0;
}
```

```yaml
Digite o primeiro número: 2
Digite o segundo número: 5
Soma: 7
Subtração: -3
Multiplicação: 10
Divisão: 0.40

Digite o primeiro número: 8
Digite o segundo número: 18
Soma: 26
Subtração: -10
Multiplicação: 144
Divisão: 0.44
```

### 2. Conversão de Temperatura
- **Descrição**: Escreva um programa que converta uma temperatura em graus Celsius para Fahrenheit**. O usuário deve inserir a temperatura em Celsius.

**Resposta**:

```c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

    return 0;
}
```

```yaml
Digite a temperatura em graus Celsius: 32
A temperatura em Fahrenheit é: 89.60

Digite a temperatura em graus Celsius: 22
A temperatura em Fahrenheit é: 71.60
```

### 3. Verificação de Número Par
- **Descrição**: Peça ao usuário para digitar um número inteiro. Verifique se o número é par ou ímpar e exiba a mensagem correspondente.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}
```

```yaml
Digite um número inteiro: 15  
O número 15 é ímpar.

Digite um número inteiro: 18
O número 18 é par.
```

### 4. Cálculo de Média Ponderada
- **Descrição**: Leia três notas (pesos 2, 3 e 5) e calcule a média ponderada. Exiba a média resultante.

**Resposta**:

```c
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    printf("A média ponderada é: %.2f\n", media);

    return 0;
}
```

```yaml
Digite a primeira nota (peso 2): 3    
Digite a segunda nota (peso 3): 8
Digite a terceira nota (peso 5): 6
A média ponderada é: 6.00

Digite a primeira nota (peso 2): 7
Digite a segunda nota (peso 3): 7
Digite a terceira nota (peso 5): 7
A média ponderada é: 7.00
```

### 5. Troca de Valores
- **Descrição**: Leia dois números inteiros e troque seus valores sem usar uma variável temporária.

**Resposta**:

```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    // Troca dos valores sem variável temporária
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Após a troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
}
```

```yaml
Digite o valor de A: 15  
Digite o valor de B: 18
Após a troca:
A = 18
B = 15

Digite o valor de A: 8
Digite o valor de B: 27
Após a troca:
A = 27
B = 8
```