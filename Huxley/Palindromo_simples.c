#include <stdio.h>
#include <stdlib.h>

int main()
{

  int conta=0,contb=0,contc=0,i;
  
  char p[6];
  
  for (i = 0; i < 5; ++i)
  {
      scanf(" %c",&p[i]);
  }

  for (i = 0; i < 5; ++i)
  {

    if (p[i]=='a')
    {
      conta++;
    }
    if (p[i]=='b')
    {
      contb++;
    }
    if (p[i]=='c')
    {
      contc++;
    }
  }

  if (conta==contb==2 || conta==5 || contb==5 || contc == 5)
  {
    printf("sim\n");
  }
  else if (conta==contc==2)
  {
    printf("sim\n");
  }
  else if (contb==contc==2)
  {
    printf("sim\n");
  }
  else if (conta==contb+1 || conta==contc+1 || contb==conta+1 || contb==contc+1 || contc==conta+1 || contc==contb+1)
  {
    printf("sim\n");
  }
  else
  {
    printf("nao\n");
  }
}
