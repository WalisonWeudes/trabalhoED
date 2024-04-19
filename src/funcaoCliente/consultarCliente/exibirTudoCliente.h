
#include <stdio.h>
#include "../../models/cliente.h"

#if !defined(EXIBIRTUDOCLIENTE)
#define EXIBIRTUDOCLIENTE

void exibirTudoCliente(Cliente *cliente, int qtdClientes)
{
  for (int i = 0; i < qtdClientes; i++)
  {
    printf("Cliente %d\n", i + 1);
    printf("Nome: %s\n", cliente[i].pessoa.nome);
    printf("Idade: %d\n", cliente[i].pessoa.idade);
    printf("ID: %d\n", cliente[i].pessoa.id);
    printf("Quantidade de pedidos: %d\n", cliente[i].qtdPedidos);


    for (int x = 0; x < cliente[i].qtdPedidos; x++)
    {
      printf("Pedido %d\n", x + 1);
      for (int y = 0; y < cliente[i].pedidos[x].qtdItens; y++)
        printf("Nome do pedido [%d]: %s\n", y, cliente[i].pedidos[x].itens[y]);
      printf("Valor do pedido: %.2lf\n", cliente[i].pedidos[x].valorDoPedido);
      printf("ID do pedido: %d\n", cliente[i].pedidos[x].id);
    }
  }
}

#endif // EXIBIRTUDOCLIENTE
