#include "pessoa/pessoa.h"
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

typedef enum
{
    GERENTE,
    SUPERVISOR,
    VENDEDOR,
} TipoFuncionario;

typedef struct
{
    Pessoa pessoa;
    TipoFuncionario tipo;
    double salario;
} Funcionario;

#endif