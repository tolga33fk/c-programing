#include <stdio.h>
#include <stdlib.h>

int main()
{



    char sehir[2][15];

    int i,j;
	for(i=0;i<=2;i+=1)
	{
		printf("Girmek �stedi�iniz �ehri Yaz�n�z: ");
		scanf("%s",sehir[i]);

		}
       printf("Girdi�iniz �ehirler:\n");
       for(j=0;j<=2;j++)
       {
       	printf("%s\n",sehir[j]);
	   }






}
