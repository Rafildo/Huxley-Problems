#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  long int i;
  char texto[1000000];
  gets(texto);

  for (i = 0; i < strlen(texto); ++i)
  {
    if (texto[i]=='4')
    {
      if (texto[i-2]=='.' && texto[i-1]==' ')
      {
        texto[i]='A';
      }
      else if (i==0)
      {
        texto[i]='A';
      }
      else
      {
        texto[i] = 'a';
      }
    }
    if (texto[i]=='5')
    {
      if (texto[i-2]=='.' && texto[i-1]==' ')
      {
        texto[i]='E';
      }
      else if (i==0)
      {
        texto[i]='E';
      }
      else
      {
        texto[i] = 'e';
      }
    }
    if (texto[i]=='1')
    {
      if (texto[i-2]=='.' && texto[i-1]==' ')
      {
        texto[i]='I';
      }
      else if (i==0)
      {
        texto[i]='I';
      }
      else
      {
        texto[i] = 'i';
      }
    }
    if (texto[i]=='0')
    {
      if (texto[i-2]=='.' && texto[i-1]==' ')
      {
        texto[i]='O';
      }
      else if (i==0)
      {
        texto[i]='O';
      }
      else
      {
        texto[i] = 'o';
      }
    }
    if (texto[i]=='2')
    {
      if (texto[i-2]=='.' && texto[i-1]==' ')
      {
        texto[i]='U';
      }
      else if (i==0)
      {
        texto[i]='U';
      }
      else
      {
        texto[i] = 'u';
      }
    }
  }
  for (i = 0; i < strlen(texto); ++i)
  {
    if (i==0 && (texto[0]>='a' && texto[0]<='z'))
    {
      texto[0]-=32;
    }
    if (texto[i-2]=='.' && texto[i-1]==' ' && (texto[i]>='a' && texto[i]<='z'))
    {
      texto[i]-=32;
    }
  }
  puts(texto);
  return 0;
}
