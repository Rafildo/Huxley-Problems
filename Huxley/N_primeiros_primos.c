#include <stdio.h>

int main ()
{
  int i,r=0, j, primo;
  int x;
  scanf("%d",&x);
  int cont = x;

  for(j=2;  ; j++)
  {
      primo=1 ;

    for(i=2; i<=(int)sqrt(j); i++)
    {
      if (j%i==0)
    {
        primo =0;
        break;

    }
    }

if(primo){
      printf ("%d\n",j);
    cont--;
}
if(cont==0) break;

  }

return 0;
}