#include <stdio.h>
#include "../../models/pessoa/pessoa.h"
#include "../../models/cliente.h"

#include "../../utils/alocarString.h"
#include "../../utils/getDouble.h"
#include "../../utils/getInt.h"

#include "alocarItem.h"

#if !defined(PRENDERPEDIDO)
#define PRENDERPEDIDO

void preencherPedido(Pedidos *pedido, int i)
{
    printf("Digite o valor do pedido: ");
    getDouble(&pedido[i].valorDoPedido);

    printf("Digite a quantidade de itens: ");
    getInt(&pedido[i].qtdItens);

    pedido[i].id = Id++;
    alocarItem(&pedido[i].itens, pedido[i].qtdItens);
    for (int x = 0; x < pedido[i].qtdItens; x++)
    {
        printf("Digte o nome do pedido %d: ", x + 1);
        alocarString(&pedido[i].itens[x]);
    }
}

#endif // PRENDERPEDIDO