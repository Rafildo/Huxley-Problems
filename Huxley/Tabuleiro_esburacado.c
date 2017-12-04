#include <stdio.h>
int main()
{
  int n,v;
  int x=4,y=3,cont=0;
  scanf("%d",&n);
  while (cont<n)
  {
    scanf("%d",&v);
    switch (v)
    {
      case 1 :
      x+=1;
      y+=2;
      cont++;
      break;

      case 2 :
      x+=2;
      y+=1;
      cont++;
      break;

      case 3 :
      x+=2;
      y-=1;
      cont++;
      break;

      case 4 :
      x+=1;
      y-=2;
      cont++;
      break;

      case 5 :
      x-=1;
      y-=2;
      cont++;
      break;

      case 6 :
      x-=2;
      y-=1;
      cont++;
      break;

      case 7 :
      x-=2;
      y+=1;
      cont++;
      break;

      case 8 :
      x-=1;
      y+=2;
      cont++;
      break;
    }
    if ((x==1 && y==3) || (x==2 && y==3) || (x==2 && y==5) || (x==5 && y==4)|| (cont==n))
    {
        printf("%d",cont);
      break;
    }
  }
  return 0;

}
