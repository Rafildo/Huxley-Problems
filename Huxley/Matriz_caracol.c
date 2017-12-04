#include <stdio.h>
//SOMA MATRIZ
int main()
{
  int n,l=0,c=0,cont;
  int dir=1;
  scanf("%d",&n);
  int a[n][n];
  for (l = 0; l < n; ++l)
  {
    for (c = 0; c < n; ++c)
    {
      a[l][c]=-9999;
    }
  }
  l=0;
  c=0;
  for (cont = 0; cont < n*(n+1);cont++)
  {
    if (dir == 1)
    {
      if (a[l][c] == -9999)

                scanf("%d",&a[l][c]);
                l++;


      if (a[l][c] != -9999 || a[l][c] > n)
      {
        l--;
        c++;
        dir = 2;
      }

    }
    else if (dir == 2)
    {
      if (a[l][c] == -9999)

                scanf("%d",&a[l][c]);
                c++;


      if (a[l][c] != -9999 || a[l][c]>n)
      {
        c--;
        l--;
        dir = 3;
      }
    }
    else if (dir == 3)
    {
      if (a[l][c] == -9999)

                scanf("%d",&a[l][c]);
                l--;

      if (a[l][c] != -9999 || a[l][c]>n)
      {
        l++;
        c--;
        dir = 4;
      }
    }
    else if (dir == 4)
    {
      if(a[l][c] == -9999)

                scanf("%d",&a[l][c]);
                c--;


      if (a[l][c]!= -9999 || a[l][c]>n)
      {
        c++;
        l++;
        dir = 1;
      }
    }
  }

    for (l = 0; l < n; ++l)
  {
    for (c = 0; c < n; ++c)
    {
      printf("%d\n",a[l][c]);
    }
    //printf("\n");
  }
  return 0;
}
