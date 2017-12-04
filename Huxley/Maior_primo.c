#include <stdio.h>
#include <math.h>
int primo(int n)
{
  int primo =1;
  int i;
  if (n!=1 && n!= 0)
  {
    for (i = 2; i <n ; ++i)
    {
      if (n%i==0) primo = 0;
    }
  }
  if (primo == 1)
  {
    primo = n;
  }

  return primo;
}
int main()
{
  int n,cont=0;
  int resp[100]= { 0 };
  resp[100] = resp[cont];
  while(n!=404)
  {
      scanf("%d",&n);
      if (n!=1)
      {
      primo(n);
      if (primo(n)!=0 && primo(n)>resp[cont])
        {
            cont++;
            resp[cont]=primo(n);
        }
        if (n==404)
        {
            if (resp[cont]!=0)
            {
                printf("%d",resp[cont]);
            }
            else
            {
                printf("SEM PRIMOS");
            }
        break;
        }
      }

  }

}
