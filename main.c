// #define debug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#include "src/models/organizacao.h"

#include "src/funcaoOrganizacao/opcaoMain/adicionarOrganizacao.h"
#include "src/funcaoOrganizacao/opcaoMain/liberarOrganizacao.h"

#include "src/funcoesFuncionarios/opcaoMain/cadastrarFuncionario.h"
#include "src/funcoesFuncionarios/opcaoMain/exibirFuncionario.h"

#include "src/funcaoCliente/opcaoMain/cadrastrarCliente.h"
#include "src/funcaoCliente/opcaoMain/exibirTodosClientes.h"
#include "src/funcaoCliente/opcaoMain/exibirClienteSelecioanado.h"
#include "src/funcaoCliente/opcaoMain/cadastarPedido.h"

int main()
{
    int op;
    srand((unsigned)time(NULL));
    printf("Bem vindo ao sistema de gerenciamento de vendas,precione qualquer tecla para iniciar!\n");
    getchar();
    // Defina a organizacao
    Organizacoes *organizacoes = NULL;
    adicionarOrganizao(&organizacoes);
    printf("Organizacao cadastrada com sucesso!\n");
    printf("Nome da organizacao: %s\n", organizacoes[0].nome);
    do
    {

        printf("\n=============MENU=====================");
        printf("\ninforme uma das opcoes:");
        printf("\n1-cadastrar cliente");
        printf("\n2-consultar clientes");
        printf("\n3-cadastrar funcionario");
        printf("\n4-consultar funcionarios");
        printf("\n5-realizar pedido");
        printf("\n6-consultar todos os pedidos");
        printf("\n0-sair\n");
        printf("=====================================\n");
        scanf("%d", &op);
        //system("cls");

        switch (op)
        {
        case 1:

            cadrastrarCliente(&organizacoes[0].cliente);
            exibirTodosCliente(organizacoes[0].cliente);

            break;
        case 2:
            exibirClienteSelecionado(organizacoes[0].cliente);
            break;
        case 3:
            cadastrarFuncionario(&organizacoes[0].funcionario);
            break;
        case 4:
            exibirTodosFuncionarios(organizacoes[0].funcionario);
            break;
        case 5:

            cadrastrarPedido(organizacoes[0].cliente);
            break;
        case 6:
            exibirTodosCliente(organizacoes[0].cliente);
            break;

        default:
            break;
        }

    } while (op != 0);

    liberarOrganizacoes(organizacoes);
    return 0;
}