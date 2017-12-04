#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n,i,qnt;
  char comando;
  scanf("%ld",&n);
  int a[n];
  for (i = 0; i < n; ++i)
  {
    scanf("%d",&a[i]);
  }
    int f[n];

  while(1)
  {
    scanf(" %c %d",&comando,&qnt);
    if (comando == 'D')
    {
        for (i = 0; i <n; ++i)
        {
          f[((((i+qnt)%n)+n)%n)]=a[i];
        }
    }
    if (comando == 'E')
    {
        for (i = 0; i <n; ++i)
      {
        f[((((i-qnt)%n)+n)%n)]=a[i];
      }
    }
    if (comando=='S')
    {
        break;
    }
    for (i = 0; i < n; ++i)
    {
      printf("%d ",f[i]);
      if (i==n-1)
      {
        printf("\n");
      }
    }
    for(i=0 ; i<n ;i++)
    {
        a[i]=f[i];
    }

  }

}
