#include "../definicaoCliente/alocarCliente.h"
#include "../definicaoCliente/preecherCliente.h"

void cadrastrarCliente(Cliente **cliente)
{
  alocarCliente(cliente, qtdDeClientes);
  preecherCliente(*cliente, qtdDeClientes);
  qtdDeClientes++;
}
