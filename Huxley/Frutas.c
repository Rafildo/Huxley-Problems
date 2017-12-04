#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i=0,ca=1,j=1,achou=0;
  double n,conta_frutas=1,dia[21];
  double valor,somakg=0,somaval=0;
  char frutas[500];

  scanf("%lf",&n);

  while(ca<=n)
  {
      i=1;
      conta_frutas=1;
      achou=0;
    scanf("%lf",&valor);
    somaval+=valor;
    scanf(" %[^\n]s",&frutas);
    while(1)
    {
      if (frutas[i] == ' ')
      {
          conta_frutas++;
          achou++;
        dia[ca]=conta_frutas;
      }
      if (frutas[i] == '\0')
      {
          if (achou==0)
                {
                    dia[ca]=1;
                }
        break;
      }
      i++;
    }
    ca++;
  }

  for (i = 1; i <= n; ++i)
  {
    somakg+=dia[i];
    printf("dia %d: %.0lf kg\n",i,dia[i]);
  }
  printf("%.2lf kg por dia\n",somakg/n);
  printf("R$ %.2lf por dia\n",somaval/n);
}
