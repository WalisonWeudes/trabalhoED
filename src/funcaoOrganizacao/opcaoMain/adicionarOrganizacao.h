#include "../definicaoOrganizacao/alocarOrganizacao.h"
#include "../definicaoOrganizacao/prencherOrganizacao.h"

void adicionarOrganizao(Organizacoes **organizao)
{
  alocarOrganizacao(organizao);
  preencherOrganizacao(*organizao, qtdDeOrganizacao);
  qtdDeOrganizacao++;
}