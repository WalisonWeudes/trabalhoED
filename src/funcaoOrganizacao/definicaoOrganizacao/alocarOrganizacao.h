#include <stdio.h>
#include <stdlib.h>
#include "../../models/organizacao.h"
#include "../../utils/varGlobal.h"

void alocarOrganizacao(Organizacoes **organizacoes)
{
    *organizacoes = (Organizacoes *)realloc(*organizacoes, qtdDeOrganizacao * sizeof(Organizacoes));
    if (!*organizacoes)
    {
        printf("Erro ao alocar organizacoes\n");
        exit(1);
    }
}