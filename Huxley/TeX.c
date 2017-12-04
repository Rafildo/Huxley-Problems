#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
  char string[1000];
  char resp[1000];
  char replace = '*';
  char replace2 = '#';
  int parametro = 1;
  while(string[0]!='_')
  {
    gets (string);
    for (i = 0; i < strlen(string); ++i)
    {
      if (string[i]=='+')
      {
        if (parametro == 1)
        {
          string[i]=replace;
          parametro*= -1;
        }
        else if (parametro == -1)
        {
          string[i]=replace2;
          parametro*= -1;
        }
      }
    }
    if (string[0]=='_') break;
    printf("%s\n",string);
  }
  return 0;
}
