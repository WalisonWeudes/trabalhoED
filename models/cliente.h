#include "pessoa/pessoa.h"

typedef struct
{
    int id;
    char **Itens;
    int qtdItens;
    float valorDoPedido;
    int IdDoCliente;
    int IdDaOrganizacao;
    int IdDoFuncionario;
    
} Pedidos;

typedef struct
{
    float limiteCredito;
    Pedidos *pedidos;
    Pessoa pessoa;
} Cliente;
