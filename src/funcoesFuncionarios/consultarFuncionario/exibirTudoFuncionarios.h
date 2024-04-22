#include <stdio.h>

#include "../../models/funcionario.h"

void exibirTudoFuncionarios(Funcionario *funcionario, int qtdDeFuncionarios)
{
    printf("Exibindo todos os funcionarios....\n");
    for (int i = 0; i < qtdDeFuncionarios; i++)
    {
        printf("Nome: %s\n", funcionario[i].pessoa.nome);
        printf("Idade: %d\n", funcionario[i].pessoa.idade);
        printf("Cargo: ");
        if (funcionario[i].tipo == VENDEDOR)
        {
            printf("Vendedor\n");
        }
        else if (funcionario[i].tipo == GERENTE)
        {
            printf("Gerente\n");
        }
        else
        {
            printf("Supervisor\n");
        }
        printf("Salario: %.2lf\n", funcionario[i].salario);
        printf("ID: %d\n", funcionario[i].pessoa.id);
    }
}