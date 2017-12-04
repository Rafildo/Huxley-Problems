#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n,i,p;

  int a[10000];
  int b[10000];
  int c[10000];

  scanf("%d",&n);

  memset(a,0,sizeof(a));
  memset(b,0,sizeof(b));
  memset(c,0,sizeof(c));

  for (i = 0; i < n; ++i)
  {
    scanf("%d",&p);
    a[p]=1;
  }
  for (i = 0; i < n; ++i)
  {
    scanf("%d",&p);
    b[p]=1;
  }
  for (i = 0; i < 10000; ++i)
  {
    if (b[i]>0 && a[i]>0)
    {
      c[i]=1;
    }
  }
  for (i = 0; i < 10000; ++i)
  {
    if (c[i]==1)
    {
      printf("%d\n",i);
    }
  }



}
