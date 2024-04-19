#include <stdio.h>
#include <stdlib.h>

#if !defined(GETINT)
#define GETINT

void getInt(int *value)
{
  fflush(stdin);

#ifndef debug
  scanf("%d", value);
#endif

#ifdef debug
  *value = rand() % 10;
  printf("%d\n", *value);
#endif
}

#endif // GETINT
