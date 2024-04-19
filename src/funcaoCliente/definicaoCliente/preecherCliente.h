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

    preencherPessoa(&cliente->pessoa);

    printf("Digite a quantidade de pedidos o cliente possui: ");
    getInt(&cliente[i].qtdPedidos);

    cliente[i].pedidos = NULL;
    alocarPedido(&cliente[i].pedidos, cliente[i].qtdPedidos);

    for (int x = 0; x < cliente[i].qtdPedidos; x++)
        prencherPedido(cliente[i].pedidos);
}
