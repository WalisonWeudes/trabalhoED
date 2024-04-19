#include <stdio.h>
#include <stdlib.h>
#include "../../funcoesFuncionarios/definicaoFuncionario/preecherFuncionario.h"
#include "../../funcoesFuncionarios/definicaoFuncionario/alocarFuncionario.h"
void cadastrarFuncionario(Funcionario **funcionario)
{
    alocarFuncionario(funcionario, qtdDeFuncionarios + 1);
    preencherFuncionario(*funcionario, qtdDeFuncionarios);
    printf("Cadastrando funcionario....\n");
    qtdDeFuncionarios++;
}
