#include <stdio.h>
#include <string.h>

#include "../../models/pessoa/pessoa.h"
#include "../../utils/alocarString.h"
#include "../../utils/getInt.h"
#include "../../utils/varGlobal.h"

#if !defined(PRENCHERPESSOA)
#define PRENCHERPESSOA

void preencherPessoa(Pessoa *pessoa)
{
    printf("Informe o nome da pessoa: ");
    alocarString(&pessoa->nome);
    printf("Informe a idade da pessoa: ");
    getInt(&pessoa->idade);
    pessoa->id = Id++;
}

#endif // PRENCHERPESSOA
