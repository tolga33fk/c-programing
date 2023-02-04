#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,k,l;

   int m1[2][2]={2,3,4,5};
   int m2[2][2]={3,4,5,6};
   int mc[2][2];

   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           mc[i][j]=m1[i][j]*m2[i][j];

       }
   }

for(k=0;k<2;k++)
{
    for(l=0;l<2;l++)
    {
        printf("%d ",mc[k][l]);
    }
    printf("\n");
}

}
