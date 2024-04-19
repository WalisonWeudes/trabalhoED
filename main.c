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

int main()
{
    srand((unsigned)time(NULL));

    Funcionario *funcionario = NULL;

    printf("0: Sair \n");
    printf("1: Cadrastrar Cliente \n");
    printf("2: Realizar Pedido \n");
    printf("3: Consultar Cliente \n");
    printf("4: Cadrastrar funcionario \n");

    printf("cadastrando funcionario....\n");
    cadastrarFuncionario(&funcionario);
    return 0;
}