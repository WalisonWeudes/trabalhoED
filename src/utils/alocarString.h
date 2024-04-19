#include <stdio.h>
#include <stdlib.h>

#if !defined(AlocarString)
#define AlocarString

void alocarString(char **string)
{
    int tamanho = 0;
    char letra;
    *string = NULL;

    while (((letra = getchar()) != EOF) && letra != '\n')
    {
        *string = (char *)realloc(*string, (tamanho + 1) * sizeof(char));
        if (!*string)
        {
            printf("Erro ao alocar string\n");
            exit(1);
        }
        
        (*string)[tamanho] = letra;
        tamanho++;
    }

    *string = (char *)realloc(*string, (tamanho + 1) * sizeof(char));
    (*string)[tamanho] = '\0';
}

#endif
