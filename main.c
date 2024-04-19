#define debug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "src/models/cliente.h"

#include "src/funcaoCliente/definicaoCliente/alocarCliente.h"
#include "src/funcaoCliente/definicaoCliente/preecherCliente.h"

#include "src/funcaoCliente/consultarCliente/exibirTudoCliente.h"

#include "src/utils/alocarString.h"
#include "src/utils/varGlobal.h"

void funcaoCadrastrarCliente(Cliente **cliente)
{
    alocarCliente(cliente, qtdDeClientes);
    preecherCliente(*cliente, qtdDeClientes);
    qtdDeClientes++;
}

void funcaoExibirCliente(Cliente *cliente)
{
    exibirTudoCliente(cliente, qtdDeClientes);
}

void liberarCliente(Cliente *cliente)
{
    for (int i = 0; i < qtdDeClientes; i++)
    {
        free(cliente[i].pessoa.nome);

        for (int x = 0; x < cliente[i].qtdPedidos; x++)
            free(cliente[i].pedidos[x].itens);

        free(cliente[i].pedidos);
    }

    

    free(cliente);
}

int main()
{
    srand((unsigned) time(NULL));
    Cliente *cliente = NULL;

    printf("0: Sair \n");
    printf("1: Cadrastrar Cliente \n");
    printf("2: Consultar Cliente \n");
    printf("3: Realizar Pedido \n");
    printf("4: Consultar Pedido \n");

    printf("Cadrastrando Cliente... \n");
    funcaoCadrastrarCliente(&cliente);
    printf("Cliente cadrastrado! \n");

    printf("Exibindo Cliente\n");
    funcaoExibirCliente(cliente);
    printf("Pronto!\n");

    liberarCliente(cliente);
    return 0;
}