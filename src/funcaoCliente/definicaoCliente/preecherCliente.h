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
    printf("Quanto de credito o cliente possui: ");
    scanf("%lf", &cliente[i].limiteCredito);
    cliente[i].qtdPedidos = 0;
    cliente[i].pedidos = NULL;
}
