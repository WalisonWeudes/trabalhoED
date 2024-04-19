#include "../../models/cliente.h"
#include <stdio.h>
#include <stdlib.h>

#if !defined(ALOCARPEDIDO)
#define ALOCARPEDIDO

void alocarPedido(Pedidos **pedidos, int tam)
{
    *pedidos = (Pedidos *)calloc(sizeof(Pedidos), tam);
    if (!(*pedidos))
    {
        printf("ERRO alocar pedido!!!!!");
        exit(EXIT_FAILURE);
    }
    printf("Pedido Alocado!");
}

#endif // ALOCARPEDIDO

#if !defined(ALOCARITEM)
#define ALOCARITEM

void alocarItem(char **item, int tam)
{

    *item = (char *)calloc(sizeof(char), tam);
    if (!(*item))
    {
        printf("ERRO alocar item!!!!!");
        exit(EXIT_FAILURE);
    }
}

#endif // ALOCARITEM
