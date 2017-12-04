#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int i=0,j=0,p;
  char t[90];
  gets(t);
  p=strlen(t);
  while(i<p)
  {
    if (t[i] == ' ' && t[i+1] == ' ')
    {
      for ( j = i+1 ; j < p; ++j)
      {
        t[j]=t[j+1];
      }
      p=p-1;
    }
    else
    {
      ++i;
    }
  }

  puts(t);

  return 0;
}
