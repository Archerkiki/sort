#include <stdio.h>
#include "include/sort.h"
void maopao(int a[],int n)
{
    int i,j,t;
    for (i=0;i<n;i++)
        for(j=i+1;j<n;j++)
       {
            if (a[i]>a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    for (i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
        printf("\n");
}
void D_insert(int a[],int n)
{
  int b[11];
    int i,j,t;
    for (i=0;i<n;i++)
        b[i+1]=a[i];
    for (i=2;i<n;i++)
    {
      if (b[i]<b[i-1])
      {
          b[0]=b[i];
          b[i]=b[i-1];
          for(j=i-2;b[0]<b[j];--j)
           {
                b[j+1]=b[j];
           }
          b[j+1]=b[0];
      }
    }
    for(i=1;i<n+1;i++)
        {
            printf("%d ",b[i]);
        }
    printf("\n");
}
void choose_sort (int a[],int n)
{
   int i,j,k,t;
   for (i=0;i<n;i++)
   {
       k=i;
       for (j=i+1;j<n;j++)
       {
           if (a[j]<a[k])
                k=j;
       }
       t=a[k];
       a[k]=a[i];
        a[i]=t;
   }
   for (i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
}
        
