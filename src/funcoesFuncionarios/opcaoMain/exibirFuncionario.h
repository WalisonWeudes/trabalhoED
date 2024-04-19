#include "../../models/funcionario.h"
#include "../../utils/varGlobal.h"
#include "../../funcoesFuncionarios/consultarFuncionario/exibirTudoFuncionarios.h"

void exibirTodosFuncionarios(Funcionario *funcionario){

   exibirTudoFuncionarios(funcionario, qtdDeFuncionarios);
}