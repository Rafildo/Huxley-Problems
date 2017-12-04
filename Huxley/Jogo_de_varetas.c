#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
  int i,n,resp=0;
  while(1)
  {
      resp=0;
    scanf("%d",&n);
    if (n==0) break;
    int array[n],quantidade[n];
    for (i = 0; i < n; ++i)
    {
      scanf("%d",&array[i]);
      scanf("%d",&quantidade[i]);
    }
    for (i = 0; i < n; ++i)
    {
      resp+=floor((quantidade[i]/2));
    }
    printf("%d\n",(int)floor(resp/2));
  }
}
