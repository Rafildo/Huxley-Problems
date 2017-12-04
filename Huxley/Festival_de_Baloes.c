#include <stdio.h>
#include <stdlib.h>
int movimento(char move)
{
  int v;
  if (move == 'S' || move == 'F' || move == 'V')
  {
    v = 10;
  }
  else if (move == 'D')
  {
    v = -10;
  }
  return v;

}
int main ()
{
  int n,cont=0,hori=0,verti=0,virado=0;
  char letra;
  scanf("%d",&n);
  while(cont<n)
  {
    getchar();
    letra = getchar();
    if (letra == 'D'  && verti==0)
    {
        verti=verti+0;
        cont++;
    }
    if ((letra == 'V' || letra == 'F') && verti==0)
    {
        hori=hori+0;
        cont++;
    }
    if (letra == 'V' && hori<2000 && verti!=0)
    {
        cont++;
        if (virado==0)
        {
                virado=1;
                hori=hori+movimento(letra);
                
        }
        else if (virado==1)
            {
                virado=0;
                hori=hori-movimento(letra);  
            }

    }
    if (letra == 'S' && verti<200 )
    {
      verti=verti+movimento(letra);
      cont++;
      
    }
    if (letra == 'F' && hori<2000 && verti!=0 && virado == 0)
    {
      hori=hori+movimento(letra);
      cont++;
      
    }
    if (letra == 'F' && hori<2000 && verti !=0 && virado == 1)
    {
      hori=hori-movimento(letra);
      cont++;
      
    }
    if (letra == 'D' && verti<200 && verti>=10)
    {
      verti=verti+movimento(letra);
      cont++;
      
    }
    if (letra == 'F' && hori==2000)
        {
            hori=hori+0;
            cont++;
        }
        if (letra == 'S' && verti == 200)
        {
            verti=verti+0;
            cont++;
        }

  }
  printf("%d %d\n",abs(verti),abs(hori));
  return 0;

}
