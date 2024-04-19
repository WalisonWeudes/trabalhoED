#define debug

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
#include "src/funcaoCliente/opcaoMain/cadastarPedido.h"

int main()
{
    srand((unsigned)time(NULL));

    // Defina a organizacao
    Organizacoes *organizacoes = NULL;
    adicionarOrganizao(&organizacoes);

    // Definindo um funcionario para a organizacao
    cadastrarFuncionario(&organizacoes[0].funcionario);
    exibirTodosFuncionarios(organizacoes[0].funcionario);

    // Definindo um cliente para a organizacao
    cadrastrarCliente(&organizacoes[0].cliente);
    
    // ** ALERTA ** //
    // Antes de chamar a função cadrastrarPedido, é necessário saber qual cliente deseja o pedido
    int oClienteNumero = 0;
    cadrastrarPedido(organizacoes[0].cliente, organizacoes[0].cliente[oClienteNumero].qtdPedidos);
    cadrastrarPedido(organizacoes[0].cliente, organizacoes[0].cliente[oClienteNumero].qtdPedidos);
    exibirTodosCliente(organizacoes[0].cliente);

    // Liberando a organizacao
    liberarOrganizacoes(organizacoes);
    return 0;
}