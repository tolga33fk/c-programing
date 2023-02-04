#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dizi[x ekseni][y ekseni]   bu sekilde yazdirir matrisleri yazdirmak için kullanilabilir...
    // x ve y eksenleri 0 dan baslar ve ciktidan anlasilacagi uzere dizimi bu sekilde olur

    int dizi[2][3]={10,20,30,40,50,60};
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %d ",dizi[i][j]);
        }
      printf("\n",i);

    }
 printf("\n\n\n\n dizinin 0-0 elemani:%d",dizi[0][0]);
 printf("\n dizinin 0-1 elemani:%d",dizi[0][1]);
  printf("\n dizinin 0-2 elemani:%d",dizi[0][2]);
 printf("\n dizinin 1-0 elemani:%d",dizi[1][0]);
 printf("\n dizinin 1-1 elemani:%d",dizi[1][1]);
 printf("\n dizinin 1-2 elemani:%d",dizi[1][2]);




}
