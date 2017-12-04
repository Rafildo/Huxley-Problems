#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void min(char* frase)
{
  int i;
  for (i = 0; i < strlen(frase); ++i)
  {
    if (frase[i]>='A' && frase[i]<='Z')
    {
      frase[i]-=32;
    }
  }
}

int main()
{
  int n,i,j=0,p=0,maior,imax;
  int alfab[300]={0};
  char string[500],letra;
  scanf("%d ",&n);
  while(1)
  {
    gets(string);
    min(string);
    for (i = 0; i < strlen(string); ++i)
    {
      alfab[(int)string[i]]++;
    }
    p++;
    if (p==n)
    {
      maior=alfab[0];
      imax=0;
      for (i = 0; i < 256; ++i)
      {
        if (alfab[i]>maior)
        {
          maior=alfab[i];
          imax=i;
        }
      }
      scanf("%c",&letra);
      printf("%c ",imax);
      printf("%d ",maior);
      printf("%d\n",alfab[letra]);
      break;
    }
  }
  return 0;
}
