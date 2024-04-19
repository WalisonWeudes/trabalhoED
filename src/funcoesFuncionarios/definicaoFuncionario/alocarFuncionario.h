#include "../../models/funcionario.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef ALOCAR_FUNCIONARIO_H
#define ALOCAR_FUNCIONARIO_H

void alocarFuncionario(Funcionario **funcionario, int tam)
{
    *funcionario = (Funcionario *)realloc(*funcionario, sizeof(Funcionario) * tam);
    if (!(*funcionario))
    {
        printf("ERRO!!!!!");
        exit(EXIT_FAILURE);
    }
}
#endif