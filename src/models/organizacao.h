#include "funcionario.h"
#include "cliente.h"

typedef struct
{
    Funcionario *funcionario;
    Pedidos *pedidos;
    Tipo_Organizacao tipo_Organizacao;
    char *nome;
    int id;
    float faturamento;
} Organizacoes;

typedef enum
{
    PRIVADO,
    PUBLICO,
} Tipo_Organizacao;
