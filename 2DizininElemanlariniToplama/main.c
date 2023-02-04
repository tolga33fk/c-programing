#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int a[]={1,2,3,4,5};
   int b[]={5,4,3,2,1};
   int yeni[5];

   for(i=0;i<=4;i++)
   {
       yeni[i]=a[i]+b[i];

   }

   for(i=0;i<=4;i++)
   {
       printf(" %d ",yeni[i]);
   }


}
