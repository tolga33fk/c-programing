#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sayi,i=1,j,toplamt=0,toplamc=0;

    printf("sayi giriniz: ");
    scanf("%d",&sayi);

    do
    {



        if(i%2==0)
    {

        toplamc=toplamc+i;
        i++;

    }

    else
    {

        toplamt=toplamt+i;
         i++;
    }
    }

    while(i<=sayi);



    getch();


printf("tek sayilarin toplami: %d \n",toplamt);
printf("cift sayilarin toplami: %d",toplamc);




}
