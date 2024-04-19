#include <stdio.h>
#include <stdlib.h>
#include "../../models/organizacao.h"
#include "../../utils/varGlobal.h"
#include "../../utils/alocarString.h"

void preencherOrganizacao(Organizacoes *organizacoes, int i)
{
    organizacoes[i].id = i + 1;
    printf("Digite o nome da organizacao: ");
    alocarString(&(organizacoes[i].nome));
    organizacoes[i].faturamento = 0;
    organizacoes[i].tipo_Organizacao = rand() % 2;
    qtdDeOrganizacao++;
}