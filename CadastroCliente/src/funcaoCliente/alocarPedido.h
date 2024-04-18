#include "../../models/cliente.h"
#include <stdio.h>
#include <stdlib.h>

void alocarItem(char **item, int tam){

    *item = (char *)realloc(*item, sizeof(char) * tam);
    if (!(*item))
    {
        printf("ERRO!!!!!");
        exit(EXIT_FAILURE);
    }
}

void alocarPedido(Pedidos **pedidos, int tam)
{
    *pedidos = (Pedidos *)realloc(*pedidos, sizeof(Pedidos) * tam);
    if (!(*pedidos))
    {
        printf("ERRO!!!!!");
        exit(EXIT_FAILURE);
    }
}