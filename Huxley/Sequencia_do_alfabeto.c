#include <stdio.h>
#include <string.h>

int main()
{
  int a[5],i,j,aux;
  char l1;
  char l2;
  char l3;
  char l4;
  char l5;
  scanf("%c %c %c %c %c",&l1,&l2,&l3,&l4,&l5);
    a[0]= l1;
    a[1]= l2;
    a[2]= l3;
    a[3]= l4;
    a[4]= l5;
    for (i = 0; i < 5; ++i)
    {
      for (j = i+1; j < 5; ++j)
      {
        if (a[i]>a[j])
        {
          aux=a[i];
          a[i]=a[j];
          a[j]=aux;
        }
      }
    }
    if (a[4]-a[0] == 4)
    {
      printf("sim\n");
    }
    else
    {
      printf("nao\n");
    }
return 0;
}
