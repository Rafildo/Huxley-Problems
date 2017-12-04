#include <stdio.h>

int main(void)
{
  int n,i,j,maior=-500;
  scanf("%d",&n);
  float a[n];
  for (i = 0; i < n; ++i)
  {
    scanf( "%f",&a[i]);
  }
  int in[10]={0};
  for (i = 0; i < n; ++i)
  {
    if (a[i]<=1)
    {
      in[0]++;
    }
    if (a[i]>1 && a[i]<=2)
    {
      in[1]++;
    }
    if (a[i]>2 && a[i]<=3)
    {
      in[2]++;
    }
    if (a[i]>3 && a[i]<=4)
    {
      in[3]++;
    }
    if (a[i]>4 && a[i]<=5)
    {
      in[4]++;
    }
    if (a[i]>5 && a[i]<=6)
    {
      in[5]++;
    }
    if (a[i]>6 && a[i]<=7)
    {
      in[6]++;
    }
    if (a[i]>7 && a[i]<=8)
    {
      in[7]++;
    }
    if (a[i]>8 && a[i]<=9)
    {
      in[8]++;
    }
    if (a[i]>9 && a[i]<=10)
    {
      in[9]++;
    }
  }
  i=9;
  printf("^\n");
  while(i>=0)
  {
    printf("|");
    for (j = 0; j < in[i]; ++j)
    {
      printf("*");
    }
    printf("\n");
    --i;
  }
  for (i = 9; i >= 0; --i)
  {
    if (in[i]>=maior)
    {
      maior=in[i];
    }
  }
  printf("+");
  for (i = 0; i < maior; ++i)
  {
    printf("-");
  }
  printf(">");

  return 0;
}
