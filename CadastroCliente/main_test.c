#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "src/models/cliente.h"

#include "src/funcaoCliente/definicaoCliente/alocarCliente.h"
#include "src/funcaoCliente/definicaoCliente/alocarPedido.h"
#include "src/funcaoCliente/definicaoCliente/preecherCliente.h"
#include "src/funcaoCliente/definicaoCliente/prencherPessoa.h"
#include "src/funcaoCliente/definicaoCliente/prencherPedido.h"

#include "src/utils/varGlobal.h"

void TEST_funcaoCadrastrarCliente(Cliente **cliente)
{
    alocarCliente(cliente, ++qtdDeClientes);
    TEST_preecherCliente(*cliente, qtdDeClientes);
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
    TEST_funcaoCadrastrarCliente(&cliente);
    printf("Cliente cadrastrado! \n");

    return 0;
}