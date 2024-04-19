

void cadrastrarPedido(Cliente *cliente, int posicao)
{
  alocarPedido(&cliente[posicao].pedidos, cliente[posicao].qtdPedidos + 1);
  printf("Pedido %d\n", cliente[posicao].qtdPedidos);
  preencherPedido(cliente[posicao].pedidos, cliente[posicao].qtdPedidos);
  cliente[posicao].qtdPedidos++;
}