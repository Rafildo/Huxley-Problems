#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n,i,tempototal=0;
  scanf("%d",&n);
  int tempo[n];
  for (i = 0; i < n; ++i)
  {
    scanf("%d",&tempo[i]);
  }
  for (i = 0; i < n; ++i)
  {
    if (i+1<n)
    {
      if (tempo[i+1]-tempo[i]<10)
      {
        tempototal+=(tempo[i+1]-tempo[i]);
      }
      if (tempo[i+1]-tempo[i]>=10)
      {
        tempototal+=10;
      }
    }
  }
  printf("%d\n",tempototal+10);
  return 0;
}
