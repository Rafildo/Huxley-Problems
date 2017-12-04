#include <stdio.h>

int main()
{
    int i,j;
  int A[4][4] = {0};
  int C[4][4] = {0};
  int O[4][4] = {0};
  int o,d,t,cbh=0,co=0;
  while(1)
  {
    scanf("%d%d%d",&o,&d,&t);
    if (o==0 && d==0 && t==0) break;
    
    if(t==1)
    {
      A[o-1][d-1]+=1;
    }
    if (t==2)
    {
      C[o-1][d-1]+=1;
    }
    if (t==3)
    {
      O[o-1][d-1]+=1;
    }
    if (o==1)
    {
      cbh++;
    }
    if ((t==3 && o==4) && (d==2 || d==4))
    {
      co++;
    }
  
  }
  printf("Automovel:\n");

  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 4; ++j)
    {
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  printf("Caminhao:\n");

  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 4; ++j)
    {
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  printf("Onibus:\n");

  for (i = 0; i < 4; ++i)
  {
    for (j = 0; j < 4; ++j)
    {
      printf("%d ",O[i][j]);
    }
    printf("\n");
  }
  printf("Origem Belo Horizonte: %d\n",cbh );
  printf("Onibus: Brasilia - Petropolis ou Barbacena: %d\n",co);
  return 0;
}