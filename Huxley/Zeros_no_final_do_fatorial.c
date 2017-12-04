#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n,soma=0,divisor=5;
  scanf("%d",&n);

  while(n>1)
  {
    soma+=n/divisor;
    n=n/divisor;
    divisor=5;
    if (n<1) break;
  }
  printf("%d\n",soma);

}