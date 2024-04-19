#include <stdio.h>
#include <stdlib.h>
#include "../../models/organizacao.h"
#include "../../utils/varGlobal.h"


void liberarOrganizacoes(Organizacoes *organizacoes)
{
    for (int i = 0; i < qtdDeOrganizacao; i++)
    {
        free(organizacoes[i].nome);
    }
    free(organizacoes);
}