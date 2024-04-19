#include <stdio.h>
#include <stdlib.h>

#include "../../models/funcionario.h"
#include  "../../utils/alocarString.h"
#include "../../utils/getDouble.h"


#ifndef PREENCHER_FUNCIONARIO_H
#define PREENCHER_FUNCIONARIO_H
void preencherFuncionario(Funcionario *funcionario, int i)
{
    printf("Informe o nome do funcionario: ");
    alocarString(&funcionario[i].pessoa.nome);
    printf("Informe a idade do funcionario: ");
    getInt(&funcionario[i].pessoa.idade);
    printf("Informe o cargo do funcionario: ");
    printf("O funcionario foi contratado como vendedor\n");
    funcionario[i].tipo = VENDEDOR;
    printf("Informe o salario do funcionario: ");
    getDouble(&funcionario[i].salario);
    funcionario[i].pessoa.id = Id++;
}
#endif