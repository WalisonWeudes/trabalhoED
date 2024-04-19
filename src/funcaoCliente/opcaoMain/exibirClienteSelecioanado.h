#include "../consultarCliente/exibirCselecionado.h"

void exibirClienteSelecionado(Cliente *cliente)
{
    printf("Informe o ID do cliente que deseja exibir: ");
    int id;
    scanf("%d", &id);
    exibirCselecionado(cliente, id);
}
