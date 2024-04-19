#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "models/cliente.h"
#include "src/funcaoCliente/alocarCliente.h"
#include "src/utils/alocarString.h"
int ID = 0;

void preencherPessoa(Pessoa pessoa)
{

    printf("Informe o nome da pessoa: ");
    alocarString(&pessoa.nome);
    printf("aqui");
    printf("Informe a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    pessoa.id = ID++;
}

void prencherPedido(Pedidos pedido)
{
    printf("Digite o valor do pedido: ");
    scanf("%f", &pedido.valorDoPedido);

    printf("Digite a quantidade de itens: ");
    scanf("%d", &pedido.qtdItens);

    pedido.Itens = (char **)calloc(sizeof(char *), pedido.qtdItens);

    for (int x = 0; x < pedido.qtdItens; x++)
    {
        printf("Digte o nome do pedido %d: ", x + 1);
        alocarString(&pedido.Itens[x]);
    }
}

void preecherCliente(Cliente *cliente, int quant)
{
    for (int i = 0; i < quant; i++)
    {
        alocarCliente(&cliente, quant);

        preencherPessoa(cliente[i].pessoa);
        prencherPedido(*cliente[i].pedidos);
    }
}

int main()
{
    Cliente *cliente = NULL;
    int qtdCliente = 1;

    preecherCliente(cliente, qtdCliente);

    free(cliente);

    return 0;
}