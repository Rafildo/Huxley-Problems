#include <stdio.h>

int main()
{
int n,dano,tempo,cont=0,regen,danoftempo=0,tempototal=0,vida=100;
scanf("%d",&n);
do
{
  scanf("%d",&dano);
  scanf("%d",&tempo);
  cont++;
  danoftempo+=dano;
  if (cont==n)
  {
    tempototal=tempo;
    break;
  }
} while (cont<n);
  scanf("%d",&regen);
  vida = vida-danoftempo+(regen*(tempototal-1));
  if (danoftempo<100)
  {
    printf("Inimigo Vivo\n");
  }
  else if (danoftempo-(regen*(tempototal-1))==100)
  {
    printf("Inimigo Morto\n");
  }
  else if(danoftempo-(regen*tempototal)<100)
  {
    printf("Inimigo Vivo\n"); 
  }
  else
  {
    printf("Inimigo Morto\n");
  }
  return 0;
  }
