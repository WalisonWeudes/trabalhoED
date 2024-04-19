#define debug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "src/funcaoCliente/opcaoMain/cadrastrarCliente.h"
#include "src/funcaoCliente/opcaoMain/exibirTodosClientes.h"
#include "src/funcaoCliente/opcaoMain/cadastarPedido.h"
#include "src/funcaoCliente/opcaoMain/liberarClientes.h"

int main()
{
    srand((unsigned)time(NULL));

    Cliente *cliente = NULL;

    printf("0: Sair \n");
    printf("1: Cadrastrar Cliente \n");
    printf("2: Realizar Pedido \n");
    printf("3: Consultar Cliente \n");
    printf("4: Cadrastrar funcionario \n");

    printf("Cadrastrando Cliente... \n");
    cadrastrarCliente(&cliente);
    cadrastrarCliente(&cliente);
    printf("Cliente cadrastrado! \n");

    printf("Adicionando Pedido... \n");
    cadrastrarPedido(cliente, 0);
    printf("Pedido adicionado! \n");

    printf("Exibindo Cliente\n");
    exibirTodosCliente(cliente);
    printf("Pronto!\n");

    liberarClientes(cliente);
    return 0;
}