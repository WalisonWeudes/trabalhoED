#include "funcionario.h"
#include "cliente.h"

typedef struct
{
    Funcionario *funcionario;
    char *nome;
    int id;
    float faturamento;
    Pedidos *pedidos;
    Tipo_Organizacao tipo_Organizacao;
} Organizacoes;

typedef enum
{
    PRIVADO,
    PUBLICO,
} Tipo_Organizacao;
