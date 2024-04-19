#include "../../models/cliente.h"
#include "../../utils/varGlobal.h"

#include <stdlib.h>

void liberarCliente(Cliente *cliente)
{
  for (int i = 0; i < qtdDeClientes; i++)
  {
    free(cliente[i].pessoa.nome);
    for (int x = 0; x < cliente[i].qtdPedidos; x++)
    {
      for (int y = 0; y < cliente[i].pedidos[x].qtdItens; y++)
      {
        free(cliente[i].pedidos[x].itens[y]);
      }
      free(cliente[i].pedidos[x].itens);
    }
    free(cliente[i].pedidos);
  }
  free(cliente);
}