#include "../definicaoCliente/alocarCliente.h"
#include "../definicaoCliente/preecherCliente.h"

void cadrastrarCliente(Cliente **cliente)
{
  alocarCliente(cliente, qtdDeClientes + 1);
  preecherCliente(*cliente, qtdDeClientes);
  qtdDeClientes++;
}
