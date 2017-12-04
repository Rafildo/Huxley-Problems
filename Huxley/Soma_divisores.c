#include <stdio.h>

int soma(int x)
{
  int s = 0;
  int i;
  for(i=1;i<=x;i++)
  {
      if(x % i == 0)
      {
          s = s + i;
      }
  }

  return s;
}

int main()
{
    int r,temp=0,a,b,c,d,e,num;
    int i,nc,j,maior=-999999;
    
  for (i=0; i<5; ++i)
  {
    scanf("%d",&temp);
    r=temp;
      if(soma(temp)>maior)
      {
        maior=soma(temp);
        num=temp;
      }
  }
  printf("%d\n",num);
    return 0;
}
