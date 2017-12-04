#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  char l;
  char* nome[10];
  int i,j;
  for (i = 0; i < 10; ++i)
  {
    nome[i]=(char*) malloc(11);
    scanf("%s",nome[i]);
  }
  scanf(" %c",&l);
  if (l>='A' && l<='Z')
  {
    l+=32;
  }

  for (i = 0; i < 10; ++i)
  {
    for (j = 0; j < strlen(nome[i]); ++j)
    {
      if (nome[i][j]==l || nome[i][j]==l-32)
      {
        printf("%s\n",nome[i]);
      }
    }
  }
}
