#include <stdio.h>
#include <string.h>
#include <math.h>

void mai (char c[])
{
        int i;
        for (i = 0; c[i]; ++i)
        {
                if (c[i]>= 'a' && c[i] <= 'z')
                {
                        c[i]-=32;
                }
        }
}

int main()
{
  int i,j;
  char o[30];
  while(1)
  {
    gets(o);
    if (strlen(o)>20)
    {
      for (i = 0; i <(strlen(o)/20)+1; ++i)
      {
        printf("Entrada invalida\n");
      }
      gets(o);
    }
    else break;
  }
    mai(o);
    for (i = 0; i < strlen(o); ++i)
    {
      for (j = 0; j < i+1; ++j)
      {
        printf("%c",o[i]);
      }
      printf("\n");
    }


  return 0;
}
