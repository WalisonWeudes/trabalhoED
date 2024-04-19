#include "../../models/funcionario.h"
#include "../../utils/varGlobal.h"

#include <stdlib.h>

void liberarFuncionarios(Funcionario *funcionarios)
{
    for (int x = 0; x < qtdDeFuncionarios; x++)
    {
        free(funcionarios[x].pessoa.nome);
        free(funcionarios);
    }
}
