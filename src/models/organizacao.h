#include "funcionario.h"
#include "cliente.h"

#if !defined(MODELORGANIZACAO)
#define MODELORGANIZACAO

typedef enum
{
    PRIVADO,
    PUBLICO,
} Tipo_Organizacao;

typedef struct
{
    Funcionario *funcionario;
    Pedidos *pedidos;
    Tipo_Organizacao tipo_Organizacao;
    char *nome;
    int id;
    float faturamento;
} Organizacoes;

#endif // MODELORGANIZACAO
