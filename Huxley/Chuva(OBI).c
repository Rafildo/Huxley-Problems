#include <stdio.h>

int main()
{
  int n,i,conta_h1=0;
  scanf("%d",&n);
  int h[n];
  int aux[n];
  int big;
  memset(aux,0,n*sizeof(int));
  for (i = 0; i < n; ++i)
  {
    scanf("%d",&h[i]);
  }
  big=h[0];
  for (i = 1; i < n-1; ++i)
  {
    if (h[i]<big)
    {
      aux[i]=1;
    }
    if(h[i]>=big)
    {
      big=h[i];
    }
  }
  big=h[n-1];
  int conta=0;
  for (i = n-2; i > 0; --i)
  {
    if (h[i]<big)
    {
      if (aux[i]==1)
      {
          
        conta++;
        
      }
    }
    if(h[i]>=big)
      {
        big=h[i];
        if (aux[i]==1)
          {
            aux[i]=0;
          }
      }
  }
  for (i = 0; i < n; ++i)
  {
    if (aux[i]==1)
    {
      conta_h1++;
    }
  }
  printf("%d\n",conta_h1);
return 0;
}