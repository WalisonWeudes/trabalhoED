#include <stdio.h>
#include "../../models/pessoa/pessoa.h"
#include "../../models/cliente.h"

#include "../../utils/alocarString.h"
#include "../../utils/getDouble.h"
#include "../../utils/getInt.h"

#if !defined(PRENDERPEDIDO)
#define PRENDERPEDIDO

void prencherPedido(Pedidos *pedido)
{
    printf("Digite o valor do pedido: ");
    getDouble(&pedido->valorDoPedido);

    printf("Digite a quantidade de itens: ");
    getInt(&pedido->qtdItens);

    pedido->id = Id++;

    pedido->itens = (char **)calloc(sizeof(char *), pedido->qtdItens);
    for (int x = 0; x < pedido->qtdItens; x++)
    {
        printf("Digte o nome do pedido %d: ", x + 1);
        alocarString(&pedido->itens[x]);
    }
}

#endif // PRENDERPEDIDO