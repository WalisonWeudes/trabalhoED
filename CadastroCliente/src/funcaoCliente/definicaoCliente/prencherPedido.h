#include <stdio.h>
#include "../../models/pessoa/pessoa.h"
#include "../../utils/alocarString.h"
#include "../../models/cliente.h"

#if !defined(PRENDERPEDIDO)
#define PRENDERPEDIDO

void prencherPedido(Pedidos *pedido)
{
    printf("Digite o valor do pedido: ");
    scanf("%f", &pedido->valorDoPedido);

    printf("Digite a quantidade de itens: ");
    scanf("%d", &pedido->qtdItens);

    pedido->Itens = (char **)calloc(sizeof(char *), pedido->qtdItens);

    for (int x = 0; x < pedido->qtdItens; x++)
    {
        printf("Digte o nome do pedido %d: ", x + 1);
        alocarString(&pedido->Itens[x]);
    }
}

void TEST_prencherPedido(Pedidos *pedido)
{
    pedido->valorDoPedido = rand() % 100;
    printf("Digite o valor do pedido: %f", pedido->valorDoPedido);

    pedido->qtdItens = rand() % 10;
    printf("Digite a quantidade de itens: %d", pedido->qtdItens);

    pedido->Itens = (char **)calloc(sizeof(char *), pedido->qtdItens);

    for (int x = 0; x < pedido->qtdItens; x++)
    {
        pedido->Itens[x] = NULL;
        pedido->Itens[x] = (char *)calloc(sizeof(char), strlen("Pera"));
        strcpy(pedido->Itens[x], "Pera");
        printf("Digte o nome do pedido %d: %s", x + 1, pedido->Itens[x]);
    }
}

#endif // PRENDERPEDIDO