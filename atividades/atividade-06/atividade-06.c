#include <stdio.h>

typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

Produto produtos[100]; // Array to store products
int numProdutos = 0; // Number of products stored

void mostrarMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: __\n");
    printf("----------------------------------------------------------------------\n");
}

void entradaProduto() {
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produtos[numProdutos].codigo);
    printf("Descrição: ");
    scanf("%49s", produtos[numProdutos].descricao);
    printf("Valor Unitário: ");
    scanf("%f", &produtos[numProdutos].valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produtos[numProdutos].qtdEstoque);
    produtos[numProdutos].valorEstoque = produtos[numProdutos].valorUnitario * produtos[numProdutos].qtdEstoque;
    printf("Valor Estoque: %.2f\n", produtos[numProdutos].valorEstoque);
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        numProdutos++;
    }
}

void listarProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Lista de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Valor Unitário: %.2f\n", produtos[i].valorUnitario);
        printf("Qtd Estoque: %d\n", produtos[i].qtdEstoque);
        printf("Valor Estoque: %.2f\n\n", produtos[i].valorEstoque);
    }
}

float valorTotalEstoque() {
    float total = 0.0;
    for (int i = 0; i < numProdutos; i++) {
        total += produtos[i].valorEstoque;
    }
    return total;
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                // float total = valorTotalEstoque();
                printf("Valor Total do Estoque: %.2f\n", valorTotalEstoque());
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}