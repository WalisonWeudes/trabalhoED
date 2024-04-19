#include <stdio.h>
#include "../../models/pessoa/pessoa.h"
#include "../../utils/alocarString.h"
#include "../../models/cliente.h"
#include "prencherPessoa.h"
#include "alocarPedido.h"
#include "prencherPedido.h"

void preecherCliente(Cliente *cliente, int i)
{

    preencherPessoa(&(cliente[i].pessoa));

    printf("Digite a quantidade de pedidos que o cliente possui: ");
    getInt(&cliente[i].qtdPedidos);

    cliente[i].pedidos = (Pedidos *)malloc(cliente[i].qtdPedidos * sizeof(Pedidos));
    if (cliente[i].pedidos == NULL)
    {
        printf("Erro ao alocar memória para os pedidos do cliente.\n");
        return;
    }

    for (int x = 0; x < cliente[i].qtdPedidos; x++)
    {
        printf("Preenchendo detalhes do pedido %d:\n", x + 1);
        prencherPedido(&cliente[i].pedidos[x]);
    }
}
