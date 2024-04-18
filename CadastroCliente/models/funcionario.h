#include "pessoa/pessoa.h"

typedef struct
{
    Pessoa pessoa;
    TipoFuncionario tipo;
    float salario;
} Funcionario;

typedef enum
{

    GERENTE,
    SUPERVISOR,
    VENDEDOR,
} TipoFuncionario;