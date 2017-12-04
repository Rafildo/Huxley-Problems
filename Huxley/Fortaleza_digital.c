#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
  int n,i,j,k=0,cont=0,p=0;
  char matriz[1000][1000];
  char string[10000];
  char resp[1000];
  scanf("%d",&n);

  while(p<=n)
  {
    gets(string);
    if (sqrt(strlen(string))==ceil(sqrt(strlen(string))))
    {
        for (i = 0; i < sqrt(strlen(string)); ++i)
        {
          for (j = 0; j < sqrt(strlen(string)); ++j)
          {
            if (string[k]!='\0')
            {
              matriz[i][j]=string[k];
              k++;
            }
          }
        }
        i=0;
        j=0;
        k=0;
        while(cont<strlen(string))
        {
          while(1)
          {
            resp[k]=matriz[i][j];
            cont++;
            i++;
            k++;
            if (i==sqrt(strlen(string)))
            {
              i=0;
              j++;
            }
            if (cont==strlen(string)) break;
          }
        }
        printf("%s\n",resp);
        p++;
        k=0;
        cont=0;
        memset(matriz,0,10000);
        memset(resp,0,1000);
    }
    else
    {
      printf("INVALIDO\n");
      p++;
    }
  }

  return 0;
}
