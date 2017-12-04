#include <stdio.h>

int main()
{
  int n,c,condi,i,primeiro,acc=0,cont=1;

  scanf("%d",&c);

  while(cont<=c)
  {
    scanf("%d",&n);
    if (n%2==0)
    {
        acc=0;
      condi=(n*n)-1;
      primeiro = (n*n)-(n-1);
      printf("caso %d: ",cont);
      for (i = primeiro; i < primeiro+n; i++)
      {
        if (i==(primeiro+n)-1)
        {
          printf("%d\n",primeiro+acc);
        }
        else
        {
          printf("%d ",primeiro+acc);
          acc+=2;
        }
      }
      cont++;
    }
    if (n%2!=0)
    {
        acc=0;
      condi=(n*n);
      primeiro = condi-(n-1);
      printf("caso %d: ",cont);
      for (i = primeiro; i < primeiro+n; i++)
      {
        if (i==(primeiro+n)-1)
        {
          printf("%d\n",primeiro+acc);
        }
        else
        {
          printf("%d ",primeiro+acc);
          acc+=2;
        }
      }
      cont++;
    }
  }
  return 0;
}
