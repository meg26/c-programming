#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void func(int n)
{

FILE *fptr; 
fptr = fopen("selection.dat","a");
int a[1000],i,j,temp,min;
clock_t t1,t2,t3,t4;
double m;
printf("\n\narray size :%d",n);

printf("\n1.RANDOM :");

for (i = 0; i<n; i++) 
{
    a[i] = rand() % n + 1;
    
}


t1=clock();
//selection sort


 for (i = 0; i < n-1; i++) 
{ 
     min = i; 
     for (j = i+1; j < n; j++) 
     {     
	if (a[j] < a[min]) 
            {min = j;} 
     }  
	
    if(min!=i)
	{
	temp=a[min];
	a[min]=a[i];
	a[i]=temp;
	}
}


t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",m); 
 fprintf(fptr,"%d :",n);
 fprintf(fptr,"%f\n",m);

//2nd
printf("\n\n1.ASSENDING");
for (i = 0; i<n; i++) 
{
    a[i] =i+1;
    
}


t1=clock();
//selection sort

 for (i = 0; i < n-1; i++) 
{ 
     min = i; 
     for (j = i+1; j < n; j++) 
     {     
	if (a[j] < a[min]) 
            {min = j;}
     }  
	
    if(min!=i)
	{
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
}

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",m); 



//3rd
printf("\n\n1.DESCENDING\n");
for (i = 0; i<n; i++) 
{
    a[i] =n-i;
   
}


t1=clock();
//selection sort


 for (i = 0; i < n-1; i++) 
{ 
     min = i; 
     for (j = i+1; j < n; j++) 
     {     
	if (a[j] < a[min]) 
            min = j; 
     }  
	
    if(min!=i)
	{
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
}

t2=clock();
m=(t2-t1)/(double)CLOCKS_PER_SEC;

printf("time complexity for random no: is %f",m); 

fclose(fptr);
}

void main()
{
func(100);
func(200);
func(300);
func(400);


}
