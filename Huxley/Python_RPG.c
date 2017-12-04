#include <stdio.h>
#include <string.h>

struct bestiario{

char nome [500];
char f[500];
char a[500];
char i[500];
char s[500];
char carac[500];
char hab[500];
};

int main(void)
{
  int i;
  char string[1000];
  gets(string);
  char* token;
  token=strtok(string," ");
  struct bestiario m;
  while(token!=NULL)
  {
    strcpy(m.nome,token);
    printf("Criatura: %s\n",m.nome);
    token=strtok(NULL,", ");
    printf("Status:\n");
    strcpy(m.f,token);
    printf(" Forca: %s\n",m.f);
    token=strtok(NULL,", ");
    strcpy(m.a,token);
    printf(" Agilidade: %s\n",m.a);
    token=strtok(NULL,", ");
    strcpy(m.i,token);
    printf(" Intigencia: %s\n",m.i);
    token=strtok(NULL,", ");
    strcpy(m.s,token);
    printf(" Sabedoria: %s\n",m.s);
    token=strtok(NULL," ");
    printf("\n");
    strcpy(m.carac,token);
    for (i = 0; i < strlen(m.carac); ++i)
    {
      if (m.carac[i]==',')
      {
        m.carac[i]=' ';
      }
    }
    printf("Caracteristicas:\n%s \n",m.carac);
    token=strtok(NULL," ");
    printf("\n");
    strcpy(m.hab,token);
    for (i = 0; i < strlen(m.hab); ++i)
    {
      if (m.hab[i]==',')
      {
        m.hab[i]=' ';
      }
    }
    printf("Habilidades:\n%s \n",m.hab);
    printf("\n");
    token=strtok(NULL," ");
  }
}

