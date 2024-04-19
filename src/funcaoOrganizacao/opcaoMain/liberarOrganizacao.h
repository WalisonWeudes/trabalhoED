#include <stdio.h>
#include <stdlib.h>
#include "../../models/organizacao.h"
#include "../../utils/varGlobal.h"

#include "../../funcoesFuncionarios/opcaoMain/liberarFuncionarios.h"
#include "../../funcaoCliente/opcaoMain/liberarClientes.h"

void liberarOrganizacoes(Organizacoes *organizacoes)
{
    for (int x = 0; x < qtdDeOrganizacao; x++)
    {
        liberarFuncionarios(organizacoes[x].funcionario);
        liberarClientes(organizacoes[x].cliente);
        free(organizacoes[x].nome);
    }
    free(organizacoes);
}