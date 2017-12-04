#include <stdio.h>
#include <string.h>
#define MAX 300
int indice=0;
int resp[MAX];
void verifica (int linha,int coluna,int n)
{
  if (n==1)
  {
      resp[indice]=0;
      indice++;
    return 0 ;
  }

  else if (linha>=n/2 && coluna>=n/2)
  {
      resp[indice]=4;
      indice++;
    verifica(linha-(n/2),coluna-(n/2),n/2);
  }
  else if (linha>=n/2 && coluna <n/2)
  {
    resp[indice]=3;
    indice++;
    verifica((linha-n/2),coluna,n/2);
  }
  else if (linha<n/2 && coluna>=n/2)
  {
    resp[indice]=1;
    indice++;
    verifica(linha,(coluna-n/2),n/2);
  }
  else if(linha<n/2 && coluna <n/2)
  {
    resp[indice]=2;
    indice++;
    verifica(linha,coluna,n/2);
  }

}

int main()
{
  int n,i,j,linha,coluna;
  scanf("%d\n",&n);
  char a[MAX][MAX]={0};
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      scanf("%c",&a[i][j]);
      if (a[i][j] == '*')
      {
          verifica(i,j,n);
      }
    }
    getchar();
  }
  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      if (a[i][j] == '-')
      {
        a[i][j] = 0;
      }
      if (a[i][j] == '*')
      {
        a[i][j] = 1;
      }
    }
  }

  for (i=0;i<indice;i++)
  {
      printf("%d",resp[i]);
  }

}
