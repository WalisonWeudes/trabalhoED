#include "pessoa/pessoa.h"

#if !defined(MODELCLIENTE)
#define MODELCLIENTE


typedef struct
{
    int id;
    int IdDoCliente;
    int IdDaOrganizacao;
    int IdDoFuncionario;
    int qtdItens;
    char **itens;
    double valorDoPedido;

} Pedidos;

typedef struct
{
    Pessoa pessoa;
    Pedidos *pedidos;

    double limiteCredito;
    int qtdPedidos;
} Cliente;


#endif // MODELCLIENTE

