#include "../../models/cliente.h"
#include <stdio.h>
#include <stdlib.h>

#if !defined(ALOCARPEDIDO)
#define ALOCARPEDIDO

void alocarPedido(Pedidos **pedidos, int qtd)
{
    *pedidos = (Pedidos *)realloc(*pedidos, sizeof(Pedidos) * qtd);
    if (!(*pedidos))
    {
        printf("ERRO alocar pedido!!!!!");
        exit(EXIT_FAILURE);
    }
}

#endif // ALOCARPEDIDO

