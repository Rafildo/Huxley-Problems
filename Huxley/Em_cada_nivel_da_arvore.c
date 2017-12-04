#include <stdio.h>
#include <string.h>

#define max(a,b) ((a) > (b) ? (a) : (b))

int levelmax=0;

void backtracking(int tree[][3],int raiz,int level,int* maximum,int* minimum)
{
    int i;
  if (levelmax<level) levelmax=level;
  if (raiz ==-1)
  {
    return ;
  }
  if (tree[raiz][0]>maximum[level])
  {
      maximum[level]=tree[raiz][0];
  }
  if (tree[raiz][0]<minimum[level])
  {
     minimum[level]=tree[raiz][0];
  }
  backtracking(tree,tree[raiz][1],level+1,maximum,minimum);
  backtracking(tree,tree[raiz][2],level+1,maximum,minimum);
}


int main()
{
  int n,i;
  scanf("%d",&n);
  int tree[n][3];
  for (i = 0; i < n; ++i)
  {
    scanf("%d %d %d",&tree[i][0],&tree[i][1],&tree[i][2]);
  }
  int maximum[n],minimum[n];
  for (i = 0; i < n; ++i)
  {
    maximum[i]=-99999;
    minimum[i]= 99999;
  }
  backtracking(tree,0,0,maximum,minimum);
  for (i = 0; maximum[i]!=-99999 && i<n ; ++i)
  {
    printf("Nivel %d: Maior = %d, Menor = %d\n",i+1,maximum[i],minimum[i]);
  }
}