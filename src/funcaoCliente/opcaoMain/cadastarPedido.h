

void cadrastrarPedido(Cliente *cliente)
{
  int posicao;
  printf("informe o id do cliente: ");
  scanf("%d", &posicao);
  alocarPedido(&cliente[posicao].pedidos, cliente[posicao].qtdPedidos + 1);
  printf("Pedido %d\n", cliente[posicao].qtdPedidos);
  preencherPedido(cliente[posicao].pedidos, cliente[posicao].qtdPedidos);
  cliente[posicao].qtdPedidos++;
}