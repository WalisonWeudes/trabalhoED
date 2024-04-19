
#include "../../models/cliente.h"

void alocarCliente(Cliente **cliente, int tam)
{
    *cliente = (Cliente *)realloc(*cliente, sizeof(Cliente) * tam);
    if (!(*cliente))
    {
        printf("ERRO e alocar cliente!!!!!");
        exit(EXIT_FAILURE);
    }
}
