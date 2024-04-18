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
    char **Itens;
    float valorDoPedido;

} Pedidos;

typedef struct
{
    Pessoa pessoa;
    Pedidos *pedidos;

    float limiteCredito;
    int qtdPedidos;
} Cliente;


#endif // MODELCLIENTE

