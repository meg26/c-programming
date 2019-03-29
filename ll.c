#include<stdio.h>
#include<time.h>
#include<malloc.h>

void main()
{
int n,m,i, pos, max;double z;
clock_t t1, t2;

struct node
{
int data;
struct node *next;
}*p,*current,*first,*header;



int ele;
first=NULL;

printf("enter no.of elements");
scanf("%d",&n);

for(i=0;i<n;i++)
{
p=(struct node*)malloc(sizeof(struct node));

printf("enter element");
scanf("%d",&ele);
p->data =ele;
p->next=NULL;
if(first==NULL)
{
first=p;
}
else
{
current=first;
while(current->next != NULL)
{
current=current->next;
}
current->next=p;
}
}

if(first==NULL)
{
printf("empty");
}
else
{
current=first;
while(current!= NULL)
{
printf("%d  ",current->data);
current=current->next;
}
}


printf("enter position of element to be removed");
scanf("%d",&pos);


i=0;

t1=clock();
current=first;
if (pos==0)
{
first=current->next;
}
else
{
while(i!=pos-1)
{
current=current->next;
i++;
}
current->next=current->next->next;
}


if(current->next==NULL)
{
printf("\nno more elements in list\n");
}


if(current->next!=NULL)
{
max=current->data;
while(current->next!= NULL)
{
current=current->next;
if (max<current->data)
{
max=current->data;
}
}
}

if(first==NULL)
{
printf("empty");
}
else
{
current=first;
while(current!= NULL)
{
printf("%d  ",current->data);
current=current->next;
}
}

printf("\nnext element is %d\n",max);
t2=clock();
m=t2-t1;
z = ((double)(t2-t1))/CLOCKS_PER_SEC;
printf("time taken is %f\n",z);

}
