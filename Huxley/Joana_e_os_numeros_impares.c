#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  unsigned long int fator = 0,i=0,cont=1,k=0,m=0;
  unsigned long int entrada;
  unsigned long int * a;
  unsigned long int resposta;
  a=(unsigned long int *) malloc(1000000000);
  scanf("%lu",&entrada);
    for (i = 1; ; i+=2)
    {
        k++;
        a[m]=i;
        m++;
        if (k>=cont)
        {
          fator++;
          cont+=2;
          k=0;
        }
        if (fator==entrada)
        {
          break;
        }
    }
    for (i = m-1; ; --i)
    {
        resposta+=a[i];
        if (i==m-3 || i<0)
        {
          break;
        }
    }
    printf("%lu\n",resposta);
    
    return 0;
}
