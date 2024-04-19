#include <stdio.h>
#include <stdlib.h>

#if !defined(ALOCARITEM)
#define ALOCARITEM

void alocarItem(char ***item, int tam)
{
  *item = (char **) calloc(sizeof(char*), tam);
  if (!(*item))
  {
    printf("ERRO alocar item!!!!!");
    exit(EXIT_FAILURE);
  }
}

#endif // ALOCARITEM
