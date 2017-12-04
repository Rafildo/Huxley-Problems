#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100][100];

int maxp=0;

int getPoint(char place)
{
  if (place=='b') return 1;
  if (place=='p') return 5;
  if (place=='o') return 10;
  if (place=='d') return 50;
  return(0);
}
int fill(int x,int y,int l,int c,int pontos)
{
  if (maxp<pontos) maxp=pontos;

  if (x<0 || x>=l || y<0 || y>=c || a[x][y]=='#')
  {
    return 0;
  }
  pontos+=getPoint(a[x][y]);
  char prev = a[x][y];
  a[x][y] = '#';
  fill(x,y-1,l,c, pontos);
  fill(x+1,y,l,c, pontos);
    fill(x,y+1,l,c, pontos);
  fill(x-1,y,l,c, pontos);
  a[x][y]=prev;

  return 0;
}

int main()
{
  int l,c,i,j;
  scanf("%d %d",&l,&c);
  for (i = 0; i < l; ++i)
  {
    getchar();
    for ( j = 0; j < c; ++j)
    {
      scanf( "%c",&a[i][j]);
    }
  }

  fill(0,0,l,c,0);
  printf("%d\n",maxp);
}
