#include <stdio.h>
#include <stdlib.h>
#include "../../models/organizacao.h"
#include "../../utils/varGlobal.h"

void exibirOrganizacoes(Organizacoes *organizacoes)
{
  for (int i = 0; i < qtdDeOrganizacao; i++)
  {
    printf("Organizacao %d\n", i + 1);
    printf("Nome: %s\n", organizacoes[i].nome);
    printf("ID: %d\n", organizacoes[i].id);
    printf("Faturamento: %.2f\n", organizacoes[i].faturamento);
    printf("Tipo de organizacao: %s\n", organizacoes[i].tipo_Organizacao == 0 ? "Privado" : "Publico");
  }
}