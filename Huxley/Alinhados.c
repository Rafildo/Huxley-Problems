#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
  int n,i,p=0;
  do
  {
    scanf("%d",&n);
    int a[n],b[n],c[n];
    memset(c,0,sizeof(n-1));
    for (i = 0; i < n; ++i)
    {
      scanf("%d",&a[i]);
      scanf("%d",&b[i]);
    }
    i=0;
    while(i<n-1)
    {
      if (a[i+1]-a[i]==0)
      {
        c[i]==0;
      }
      else
      {
        c[i]=(b[i+1]-b[i])/(a[i+1]-a[i]);
        //printf("%d\n",c[i]);
      }
      i++;
    }
    for (i = 1; i < n-1; ++i)
    {
      if (c[i-1]!=c[i])
      {
          p=1;
        printf("NAO_ALINHADOS\n");
        break;
      }
        if (p==0 && i==n-2)
      {
          printf("ALINHADOS\n");
      }
    }
    p=0;

  }while(n!=0);

  return 0;
}
