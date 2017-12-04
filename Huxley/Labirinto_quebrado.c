#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100][100];

int fill(int x,int y,int l,int c)
{
  if (x<0 || x>=c || y<0 || y>=l)
  {
    return 0;
  }
  if (a[y][x]== 'F')
  {
    return 1;
  }
  if (a[y][x] != '.')
  {
    return 0;
  }
  a[y][x] = 'p';
  if (fill(x,y-1,l,c))
  {
    return 1;
  }
  if (fill(x+1,y,l,c))
  {
    return 1;
  }
  if (fill(x,y+1,l,c))
  {
    return 1;
  }
  if (fill(x-1,y,l,c))
  {
    return 1;
  }
  a[y][x] = 'n';

  return 0;
}

int main()
{
  int l,c,i,j;
  scanf("%d %d",&l,&c);
  for (i = 0; i < l; ++i)
  {
    for ( j = 0; j < c; ++j)
    {
      scanf( " %c",&a[i][j]);
    }
    getchar();
  }
  a[l-1][c-1]='F';

  if (fill(0,0,l,c))
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}
