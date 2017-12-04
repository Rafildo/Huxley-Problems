#include <stdio.h>

int ordena(int vec[], int tamanho)
{
  int i, j , aux , min, cont=0;
  for (i = 0; i < (tamanho-1); i++)
  {
    min=i;
    for (j = i+1; j <tamanho ; j++)
    {
      if (vec[j]<vec[min])
      {
        min=j;
      }
    }
    if (vec[i]!=vec[min])
    {
      aux=vec[i];
      vec[i]=vec[min];
      vec[min]=aux;
      cont++;
    }
  }
  return cont;
}
int main()
{
  int i,j,m,n,soma=0;
  scanf("%d %d",&m,&n);
  int a[m][n];
  int b[m];
  int c[n];
  for (i = 0; i < m; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      scanf("%d",&a[i][j]);
      c[j] = a[0][j];
    }
    b[i]=a[i][0];
  }

  soma += ordena(c,n) + ordena(b,m);
  printf("%d",soma);


  return 0;
}
