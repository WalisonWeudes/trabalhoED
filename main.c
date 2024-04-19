#define debug

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "src/models/organizacao.h"

#include "src/funcaoOrganizacao/opcaoMain/adicionarOrganizacao.h"
#include "src/funcaoOrganizacao/opcaoMain/liberarOrganizacao.h"

int main()
{
    Organizacoes *organizacoes = NULL;

    srand((unsigned)time(NULL));

    printf("adicionando organizacao \n");
    adicionarOrganizao(&organizacoes);
    printf("organizacao adicionada \n");


    liberarOrganizacoes(organizacoes);
    return 0;
}