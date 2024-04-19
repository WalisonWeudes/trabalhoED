#define debug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "src/funcaoCliente/opcaoMain/cadrastrarCliente.h"
#include "src/funcaoCliente/opcaoMain/exibirTodosClientes.h"
#include "src/funcaoCliente/opcaoMain/cadastarPedido.h"
#include "src/funcaoCliente/opcaoMain/liberarClientes.h"
#include "src/models/funcionario.h"
#include "src/funcoesFuncionarios/definicaoFuncionario/preecherFuncionario.h"
#include "src/funcoesFuncionarios/definicaoFuncionario/alocarFuncionario.h"
#include "src/funcoesFuncionarios/opcaoMain/cadastrarFuncionario.h"
#include "src/funcoesFuncionarios/opcaoMain/exibirFuncionario.h"

void orgazizacao()
{
    

}


int main()
{
    srand((unsigned)time(NULL));

    Funcionario *funcionario = NULL;

    printf("1-Exibir Funcionarios\n");

    printf("2-Exibir clientes\n");

    printf("3-exibir pedidos\n");

    printf("4-Exivir faturamento\n");


    return 0;
}