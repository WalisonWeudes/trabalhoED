#include <stdio.h>
#include <stdlib.h>

#include "../../models/organizacao.h"

void alocarOrganizacao(Organizacoes **organizacao, int tam)
{
    *organizacao = (Organizacoes *)realloc(*organizacao, sizeof(Organizacoes) * tam);
    if (!(*organizacao))
    {
        printf("ERRO!!!!!");
        exit(EXIT_FAILURE);
    }
}
