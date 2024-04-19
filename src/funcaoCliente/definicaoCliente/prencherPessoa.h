#include <stdio.h>
#include <string.h>

#include "../../models/pessoa/pessoa.h"
#include "../../utils/alocarString.h"
#include "../../utils/varGlobal.h"

#if !defined(PRENCHERPESSOA)
#define PRENCHERPESSOA

void preencherPessoa(Pessoa pessoa)
{

    printf("Informe o nome da pessoa: ");
    alocarString(&pessoa.nome);
    printf("Informe a idade da pessoa: ");
    scanf("%d", &pessoa.idade);
    pessoa.id = ID++;
}

void TEST_prencherPessoa(Pessoa pessoa)
{

    strcpy(pessoa.nome, "Kaua Hen\0");
    printf("Informe o nome da pessoa: %s\n", pessoa.nome);
    pessoa.idade = rand() % 100 + 1;
    printf("Informe a idade da pessoa: %d\n", pessoa.idade);
    pessoa.id = ID++;
    printf("O id eh: %d\n", pessoa.id);
}

#endif // PRENCHERPESSOA

