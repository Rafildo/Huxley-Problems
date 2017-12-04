#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  int n,cont=1,i,j;
  scanf("%d",&n);
  int m[n][n];
  memset(m,0,sizeof(m));

  while(cont<=n)
  {
    for (i = cont-1;i<n; ++i)
    {
      for (j = cont-1;j<n; ++j)
      {
           m[i][j] = cont;
      }
    }
    cont++;
  }

  for (i = 0; i < n; ++i)
  {
    for ( j = 0; j <n; ++j)
    {
        if(j== n-1)
        {
             printf("%d",m[i][j]);
        }
        else
        {
             printf("%d ",m[i][j]);
        }
    }
     
    printf("\n");
  }
  return 0;
}
