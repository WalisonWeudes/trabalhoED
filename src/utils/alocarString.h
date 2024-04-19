#include <stdio.h>
#include <stdlib.h>
#include "varGlobal.h"

#if !defined(AlocarString)
#define AlocarString

void alocarString(char **string)
{

#ifndef debug
    fflush(stdin);

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

    *string = (char *)realloc(*string, (tamanho + 2) * sizeof(char));
    (*string)[tamanho] = '\0';
#endif

#ifdef debug
    *string = NULL;
    qtdSting++;
    int tamanho = snprintf(NULL, 0, "String %d", qtdSting);
    *string = (char *)realloc(*string, (tamanho + 1) * sizeof(char));
    printf("String %d\n", qtdSting);
    sprintf(*string, "String %d", qtdSting);
#endif
}

#endif
