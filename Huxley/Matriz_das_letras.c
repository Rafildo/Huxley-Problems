#include <stdio.h>
#include <math.h>

int main()
{

  int n,condi,i,j,ml,mc,nt,cont=0;
  char l;
  scanf("%d%d",&n,&condi);
  scanf(" %c",&l);
  char a[1000][1000];
  nt=(n*2)-1;
  ml=ceil((double)nt/2);
  mc=ceil((double)nt/2);

if (condi ==1)
{
  while(cont<n)
  {
      for (i = 0+cont; i < nt-cont; ++i)
    {
      for (j = 0+cont; j < nt-cont; ++j)
      {
        if (l+cont>'z')
        {
          l='a'-cont;
        }
        a[i][j]=l+cont;

      }
    }
      cont++;
  }
}
else if (condi==-1)
{
  for (i = 1; i < n; ++i)
  {
    l++;;
    if (l>'z')
    {
      l='a';
    }
  }
  int aux=0;
  while(cont<n)
  {
    {
        for (i = 0+cont; i < nt-cont; ++i)
      {
        for (j = 0+cont; j < nt-cont; ++j)
        {
            if (l-aux<'a')
            aux = - ('z'-l);
            a[i][j]=l-aux;
        
        }
      }
        cont++;
        aux++;
    }
  }

}
for (i = 0; i < nt; ++i)
  {
    for (j = 0; j < nt; ++j)
    {
      printf("%c",a[i][j]);
    }
    printf("\n");
  }
  //printf("%d\n%d\n",ml,mc);
}
