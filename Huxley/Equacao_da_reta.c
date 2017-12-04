#include <stdio.h>

int main()
{
  double x1,y1,x2,y2;
  scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
  double coeficiente,x,y,c;
  coeficiente = (y2-y1)/(x2-x1);
  x=-coeficiente;
  c=(-coeficiente*x1)+y1;
  y=1;
  if (x2==x1)
  { 
    c=-x1;
    x=1;
    y=0;
    printf("(%.2lfx) + (%.2lfy) + (%.2lf) = 0",x,y,c);
  }
  else
  {
    printf("(%.2lfx) + (%.2lfy) + (%.2lf) = 0",x,y,-c);
  }
  return 0;
}

