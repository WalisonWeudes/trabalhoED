void alocarCliente(Cliente **cliente, int tam)
{
    *cliente = (Cliente *)realloc(*cliente, sizeof(Cliente) * tam);
    if (!(*cliente))
    {
        printf("ERRO!!!!!");
        exit(EXIT_FAILURE);
    }
}
