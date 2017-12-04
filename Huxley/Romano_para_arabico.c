#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char romano[7]="IVXLCDM";
int decimal[7]={1,5,10,50,100,500,1000};

//enum aa{I=1,V=5,X=10,L=50,C=100,D=500,M=1000};

int converter(char string)
{
  int i;
  for (i = 0; i < 7; ++i)
  {
    if(romano[i]==string) return i;
  }
  return -1;
}

int arabico(char* string)
{
  int n=0,i,j;
  i=strlen(string)-1;
  n+=decimal[converter(string[i])];
  j=i;
  i--;
  while(i>=0)
  {
    if (converter(string[i])>=converter(string[j]))
    {
      n+=decimal[converter(string[i])];
    }
    else
    {
      n-=decimal[converter(string[i])];
    }
    i--;
    j--;
  }
  return n;
}
int main()
{
  char s[100];
  scanf("%s",s);
  arabico(s);
  int n=arabico(s);
  int r=n%5;
  printf("%d",n);
  return 0;
}
