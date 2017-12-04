#include <stdio.h>
int mdc (int a,int b)
{
  int r = a%b;
  while(r!=0)
  {
  a=b;
  b=r;
  r=a%b;
  }
  return b;
}

int main()
{
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
    if (mdc(A,B)==C || C%mdc(A,B)==0)
    {
      printf("S\n");
    }
    else
    {
      printf("N\n");
    }
return 0;
}