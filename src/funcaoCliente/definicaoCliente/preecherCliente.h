#include <stdio.h>
#include "../../models/pessoa/pessoa.h"
#include "../../utils/alocarString.h"
#include "../../models/cliente.h"
#include "prencherPessoa.h"
#include "alocarPedido.h"
#include "prencherPedido.h"

void preecherCliente(Cliente *cliente, int i)
{
    i--;

    preencherPessoa(cliente[i].pessoa);

    printf("Digite a quantidade de pedidos: ");
    scanf("%d", &cliente[i].qtdPedidos);

    cliente[i].pedidos = NULL;
    alocarPedido(&cliente[i].pedidos, cliente[i].qtdPedidos);

    for (int x = 0; x < cliente[i].qtdPedidos; x++)
        prencherPedido(cliente[i].pedidos);
}

void TEST_preecherCliente(Cliente *cliente, int i)
{
    i--;

    TEST_prencherPessoa(cliente[i].pessoa);

    cliente[i].qtdPedidos = rand() % 10;
    printf("Quantidade de pedidos: %d\n", cliente[i].qtdPedidos);

    cliente[i].pedidos = NULL;
    alocarPedido(&cliente[i].pedidos, cliente[i].qtdPedidos);

    for (int x = 0; x < cliente[i].qtdPedidos; x++)
        TEST_prencherPedido(cliente[i].pedidos);
}