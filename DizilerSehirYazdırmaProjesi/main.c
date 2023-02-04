#include <stdio.h>
#include <stdlib.h>

int main()
{



    char sehir[2][15];

    int i,j;
	for(i=0;i<=2;i+=1)
	{
		printf("Girmek Ýstediðiniz Þehri Yazýnýz: ");
		scanf("%s",sehir[i]);

		}
       printf("Girdiðiniz Þehirler:\n");
       for(j=0;j<=2;j++)
       {
       	printf("%s\n",sehir[j]);
	   }






}
