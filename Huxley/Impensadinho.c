#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n_ambrosio,p,cont=0,condi=0;
 scanf("%d",&n_ambrosio);
 int MAIOR=-9999;
 int MENOR=99;

 while(1)
 {
  scanf("%d",&p);
  if (cont==0)
  {
    if (p<n_ambrosio)
    {
      printf("Escolha um numero entre %d e 100!\n",p);
      MENOR=p;
      cont++;
    }
    if (p>n_ambrosio)
    {
       
          printf("Escolha um numero entre 0 e %d!\n",p);
          MAIOR=p;
          MENOR=0;
          cont++;
    }
  }
  if (cont!=0)
  {
    if (p>n_ambrosio && abs(p-n_ambrosio) < abs(MAIOR-n_ambrosio))
    {
      MAIOR=p;
    }
    if (p<n_ambrosio && abs(p-n_ambrosio)<abs(MENOR-n_ambrosio))
    {
      MENOR=p;
    }

    if (p==n_ambrosio)
    {
      printf("Voce bebe!\n");
      break;
    }
    if (p==n_ambrosio+1)
    {
      condi++;
    }
    if (p==n_ambrosio-1)
    {
      condi++;
    }
    if (condi == 2)
    {
      printf("Ambrosio bebe!\n");
      break;
    }
    if (MENOR!=MAIOR && MAIOR != -9999 && MENOR !=99)
    {
        if(MENOR!=0 && MAIOR!=(n_ambrosio+1))
       printf("Escolha um numero entre %d e %d!\n",MENOR,MAIOR);
    }
  }
}
return 0;
}
