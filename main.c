#define debug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "src/models/cliente.h"
#include "src/funcaoCliente/definicaoCliente/alocarCliente.h"
#include "src/funcaoCliente/definicaoCliente/preecherCliente.h"

#include "src/utils/alocarString.h"
#include "src/utils/varGlobal.h"

void funcaoCadrastrarCliente(Cliente **cliente)
{
    alocarCliente(cliente, qtdDeClientes);
    preecherCliente(*cliente, qtdDeClientes);
}

void funcaoExibirCliente(Cliente *cliente)
{
    
}

int main()
{
    Cliente *cliente = NULL;

    printf("0: Sair \n");
    printf("1: Cadrastrar Cliente \n");
    printf("2: Consultar Cliente \n");
    printf("3: Realizar Pedido \n");
    printf("4: Consultar Pedido \n");

    printf("Cadrastrando Cliente... \n");
    funcaoCadrastrarCliente(&cliente);
    printf("Cliente cadrastrado! \n");

    return 0;
}