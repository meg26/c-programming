
#include<stdlib.h>
#include<stdio.h>


int c[100][100],p[100][100]; 

int inf=1000,n;

void show();


int main()
{
  int i, j, k, x;
  printf("Enter the number of vertices in the graph: ");
  scanf("%d", &n);
  printf("\nEnter adjacency matrix:\n");
  printf("(Enter 1000 if there is no path)\n");
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
   scanf("%d",&c[i][j]);
   p[i][j]=-1;
   }
  }
  printf("\n");

  for(k=1;k<=n;k++)
  {
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
     if(i==j)
     c[i][j]=0;
     else
     {
      x=c[i][k]+c[k][j];
      if(c[i][j]>x)
      {
      c[i][j]=x;
      p[i][j]=k;
      }
     }
    }
   }
 show();
 printf("\n");
 }
 printf("From\tTo\t\tTotal Min. Cost\n");
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
   if(i!=j)
   {
    printf("%d\t", i);
    printf("%d\t", j);
    printf("\t\t%d", c[i][j]);
    printf("\n");

   }

  }

 }
 return 0;

}



void show()

{

 int i,j;

 for(i=1;i<=n;i++)

 {

  for(j=1;j<=n;j++)

   if(c[i][j]==1000)

    printf("INF\t");

   else

    printf("%d\t", c[i][j]);

  printf("\n");

 }

}



