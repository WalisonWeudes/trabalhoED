
#include <stdio.h>
#include "../../models/cliente.h"

#if !defined(EXIBIRFATURAMENTO)
#define EXIBIRFATURAMENTO

void exibirFaturamento(Cliente *cliente, int qtdClientes)
{
  double fat = 0;
  for (int i = 0; i < qtdClientes; i++)
  {
    for (int x = 0; x < cliente[i].qtdPedidos; x++)
    {
    
      fat += cliente[i].pedidos[x].valorDoPedido;
      
    }
  }
  printf("==============================================\n");
  printf("Faturamento total: %.2lf\n", fat);
  printf("==============================================\n");
}

#endif // EXIBIRTUDOCLIENTE
