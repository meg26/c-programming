#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int x[20], j;

int display(int);
void n_queen(int, int);
int place(int, int);

void n_queen(int k, int l)
{
   
      for(int i= 1; i <= l; i++)
      {
            if(place(k,i))
            {
                  x[k] = i;
                  if(k ==l)
                  {
                        display(l);
                  }
                  else
                  {
                        n_queen(k + 1, l);
                  }
            }
      }
}

int place(int k, int i)
{
      int j;
      for(j = 1; j <= k - 1; j++)
      {
            if(x[j] == i)
            {
                  return 0;
            }
            else
            {
                  if(abs(x[j] - i) == abs(j - k))
                  {
                        return 0;
                  }
            }
      }
      return 1;
}

int display(int l)
{
      int m, n;
      printf("\n\nPossible Solution %d:\n\n", ++j);
      for(m = 1; m <= l; m++)
      {
            printf("\t [%d]", m);
      }
      for(m = 1; m <= l; m++)
      {
            printf("\n\n[%d]", m);
            for(n = 1; n <= l; n++)
            {
                  if(x[m] == n)
                  {
                        printf("\tQ");
                  }
                  else
                  {
                        printf("\t0");
                  }
            }
      }
}
 
void main()
{
      int l;
      printf("\nEnter Number of Queens:\t");
      scanf("%d", &l);
      if(l <= 3)
      {
            printf("\nNumber should be greater than 3 to form a Matrix\n");
      }
      else
      {
            n_queen(1, l);
      }
      printf("\n\n");
}


