#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int somat=4;

int triangulares(int n)
{
  int tri;
  if (n==1)
  {
    return 1;
  }
  if (n==2)
  {
    return 3;
  }
  else
  {
    tri=triangulares(n-1)+n;
    somat+=tri;
    return tri;
  }

}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d ",triangulares(n));
  if (n==1) somat=1;
  if (n==2) somat=4;
  printf("%d ",somat);

  if (triangulares(n)%2==0 && somat%2==0)
  {
    printf("P\n");
  }
  else if(triangulares(n)%2!=0 && somat%2!=0)
  {
    printf("I\n");
  }
  else
  {
    printf("N\n");
  }
return 0;
}




