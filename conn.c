#include<stdio.h>
#define INF 1000
int vertex[10];

int A[10][10];
int closed[10];
int n;
int visit[10][10]; 

int main()
{
int i,j,c;
printf("enter the no: of nodes :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
		visit[i][j]=0;
}
printf( "\nconnected components in graph :");




printf("enter the adjcency matrix \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&A[i][j]);
}
}

int count=1,k=1,count2=0 ,p;
 

for(i=1;i<=n;i++)
{
	p=1;
for(j=1;j<=n;j++)
{
if(A[i][j]==1 && visit[i][j]==0 && visit[j][i]==0)
{
visit[i][j]= visit[j][i]=1;
count++;
p=0;
}
}	
	if(p==1)
	count2++;
	
}


printf("\nno: of nodes is %d",count);
printf("\nno: of graph is %d",count2);



}

