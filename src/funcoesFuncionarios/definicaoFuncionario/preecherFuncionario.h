#include <stdio.h>
#include <stdlib.h>

#include "../../models/funcionario.h"
#include "../../utils/alocarString.h"
#include "../../utils/getDouble.h"
#include "../../utils/getInt.h"

#ifndef PREENCHER_FUNCIONARIO_H
#define PREENCHER_FUNCIONARIO_H
void preencherFuncionario(Funcionario *funcionario, int i)
{
    int op;
    printf("Informe o nome do funcionario: ");
    alocarString(&funcionario[i].pessoa.nome);
    printf("Informe a idade do funcionario: ");
    getInt(&funcionario[i].pessoa.idade);
    printf("Informe o cargo do funcionario:\n");
    printf("1- GERENTE\n2- VENDEDOR\n3-SUPERVISOR\n");
    scanf("%d", &op);
    if (op == 1)
    {

        funcionario[i].tipo = GERENTE;
        printf("Gerente cadastrado com sucesso!\n");
    }
    else if (op == 2)
    {

        funcionario[i].tipo = VENDEDOR;
        printf("Vendedor cadastrado com sucesso!\n");
    }
    else
    {

        funcionario[i].tipo = SUPERVISOR;
        printf("Supervisor cadastrado com sucesso!\n");
    }
    printf("Informe o salario do funcionario: ");
    getDouble(&funcionario[i].salario);
    funcionario[i].pessoa.id = Id++;
}
#endif