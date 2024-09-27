            #include <stdio.h>
            #include <string.h>

            #define MAX_PRODUTOS 100

            typedef struct {
                int codigo;
                char descricao[50];
                float valorUnitario;
                int quantidadeEstoque;
            } Produto;

            Produto produtos[MAX_PRODUTOS];
            int numProdutos = 0;

            void cadastrarProduto() {
                printf("Cadastrar Produto:\n");
                printf("Codigo: ");
                scanf("%d", &produtos[numProdutos].codigo);
                printf("Descricao: ");
                scanf("%s", produtos[numProdutos].descricao);
                printf("Valor Unitario: ");
                scanf("%f", &produtos[numProdutos].valorUnitario);
                printf("Quantidade Estoque: ");
                scanf("%d", &produtos[numProdutos].quantidadeEstoque);
                numProdutos++;
            }

            void consultarProdutoAlteracao() {
                int codigo;
                printf("Consultar Produto para Alteracao:\n");
                printf("Codigo do produto: ");
                scanf("%d", &codigo);
                for (int i = 0; i < numProdutos; i++) {
                    if (produtos[i].codigo == codigo) {
                        printf("Descricao: %s\n", produtos[i].descricao);
                        printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
                        printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
                        printf("Alterar dados? (s/n): ");
                        char resposta[2];
                        scanf("%s", resposta);
                        if (resposta[0] == 's') {
                            printf("Novo valor unitario: ");
                            scanf("%f", &produtos[i].valorUnitario);
                            printf("Nova quantidade estoque: ");
                            scanf("%d", &produtos[i].quantidadeEstoque);
                        }
                        return;
                    }
                }
                printf("Produto nao encontrado!\n");
            }

            void listarProdutos() {
                printf("Listar todos os produtos:\n");
                for (int i = 0; i < numProdutos; i++) {
                    printf("Codigo: %d\n", produtos[i].codigo);
                    printf("Descricao: %s\n", produtos[i].descricao);
                    printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
                    printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
                    printf("Valor do estoque: %.2f\n", produtos[i].valorUnitario * produtos[i].quantidadeEstoque);
                }
            }

            void excluirProduto() {
                int codigo;
                printf("Exclusao do Produto:\n");
                printf("Codigo do produto: ");
                scanf("%d", &codigo);
                for (int i = 0; i < numProdutos; i++) {
                    if (produtos[i].codigo == codigo) {
                        printf("Produto encontrado!\n");
                        printf("Descricao: %s\n", produtos[i].descricao);
                        printf("Valor Unitario: %.2f\n", produtos[i].valorUnitario);
                        printf("Quantidade Estoque: %d\n", produtos[i].quantidadeEstoque);
                        printf("Excluir produto? (s/n): ");
                        char resposta[2];
                        scanf("%s", resposta);
                        if (resposta[0] == 's') {
                            for (int j = i; j < numProdutos - 1; j++) {
                                produtos[j] = produtos[j + 1];
                            }
                            numProdutos--;
                            printf("Produto excluido com sucesso!\n");
                        }
                        return;
                    }
                }
                printf("Produto nao encontrado!\n");
            }

            int main() {
                int opcao;
                while (1) {
                    printf("Menu:\n");
                    printf("1. Cadastrar Produto\n");
                    printf("2. Consultar Produto para Alteracao\n");
                    printf("3. Listar todos os produtos\n");
                    printf("4. Exclusao do Produto\n");
                    printf("5. Sair\n");
                    printf("Opcao: ");
                    scanf("%d", &opcao);
                    switch (opcao) {
                        case 1:
                            cadastrarProduto();
                            break;
                        case 2:
                            consultarProdutoAlteracao();
                            break;
                        case 3:
                            listarProdutos();
                            break;
                        case 4:
                            excluirProduto();
                            break;
                        case 5:
                            return 0;
                        default:
                            printf("Opcao invalida!\n");
                    }
                }
                return 0;
            }