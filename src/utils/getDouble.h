#include <stdio.h>

#if !defined(GETDOUBLE)
#define GETDOUBLE

void getDouble(double *value)
{
#ifndef debug
  scanf("%lf", value);
#endif

#ifdef debug
  *value = rand() & 100;
  printf("%lf\n", *value);
#endif
}

#endif // GETDOUBLE
