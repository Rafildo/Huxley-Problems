
#include <stdio.h>
#include <string.h>

float geral(int l,int c)
{
  int i=0,j=0;
  float somat=0,somal1=0,somal2=0,somac1=0,somac2=0,somad1=0,somad2=0,resultado,cont=1;
  float a[l][c];
    if(l==c)
    {
        for ( i = 0; i < l; ++i)
  {
    for (j = 0; j < c; ++j)
    {
      a[i][j]=cont++;
    }
  }
  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      somat+=a[i][j];
    }
  }
  for (i = 0; i < c; ++i)
  {
    somal1+=a[0][i];
  }
  for (i = 0; i < c; ++i)
  {
      if(l<c)
        {
         somal2+=a[c-l][i];
        }
        else
        {
            somal2+=a[c-1][i];
        }
  }
  for (j = 0; j < c; ++j)
  {
    somac1+=a[j][0];
  }
  for (j = 0; j < c; ++j)
  {
    somac2+=a[j][c-1];
  }
  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      if (i==j)
      {
        somad1+=a[i][j];
      }
    }
  }
  for (i = l-1; i >= 0; --i)
  {
    for (j = c-1; j >= 0; --j)
    {
        if (l!=c)
            {
                    if (j==i+1)
                {
                    somad2+=a[i][j];
                }
            }
      if (l==c)
            {
                if (i==j)
      {
        somad2+=a[i][j];
      }

            }
    }
  }
      resultado=(somat-(somad1+somad2) + (somac1*somac2) - (somal1*somal2))/(l*c);
    }
  if(l<c)
    {
        for ( i = 0; i < l; ++i)
  {
    for (j = 0; j < c; ++j)
    {
      a[i][j]=cont++;
    }
  }
  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      somat+=a[i][j];
    }
  }
  for (i = 0; i < c; ++i)
  {
    somal1+=a[0][i];
  }
  for (i = 0; i < c; ++i)
  {

    somal2+=a[l-1][i];
  }
  for (j = 0; j < l; ++j)
  {
    somac1+=a[j][0];
  }
  for (j = 0; j < l; ++j)
  {
    somac2+=a[j][c-1];
  }

  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      if (i==j)
      {
        somad1+=a[i][j];
      }
    }
  }
  for (i = l-1; i >= 0; --i)
  {
    for (j = c-1; j >= 0; --j)
    {
                    if (j==i+c-l)
                {
                    somad2+=a[i][j];
                }
    }
  }
  if (l==1 && c!=1)
     {
         somal2=somal1;
         somad2=a[0][c-1];
     }

    resultado=(somat-(somad1+somad2) + (somac1*somac2) - (somal1*somal2))/(l*c);
    }
    if(l>c)
    {
        for (i = 0; i < l; ++i)
  {
    for (j = 0; j < c; ++j)
    {
      a[i][j]=cont++;
    }
  }
  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      somat+=a[i][j];
    }
  }
  for (i = 0; i < c; ++i)
  {
    somal1+=a[0][i];
  }
  
  for (i = 0; i < c; ++i)
  {
         somal2+=a[l-1][i];
  }
  
  for (j = 0; j < l; ++j)
  {
    somac1+=a[j][0];
  }
  
  for (j = 0; j < l; ++j)
  {
    somac2+=a[j][c-1];
  }
  
  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      if (i==j)
      {
        somad1+=a[i][j];
      }
    }
  }
  for (i = l-1; i >= 0; --i)
  {
    for (j = c-1; j >= 0; --j)
    {
                    if (i==j+l-c)
                {
                    somad2+=a[i][j];
                }
    }
  }
  if (l!=1 && c==1)
     {
         somad2=a[l-1][0];
     }
      resultado=(somat-(somad1+somad2) + (somac1*somac2) - (somal1*somal2))/(l*c);
    }
return resultado;
}


int main()
{
  int linhas,colunas;
  while(1)
  {
    scanf("%d%d",&linhas,&colunas);
    if (linhas ==0 && colunas ==0) break;
    if (linhas ==0 || colunas ==0)
        {
            printf("0.00\n");
        }
    else
    {
      printf("%.2f\n",geral(linhas,colunas));
    }

  }
  return 0;
}