#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yuzlera,onlara,birlera,yuzler,onlar,birler,sayi;
    int a=789;

    yuzlera=a/100;
    onlara=(a%100)/10;
    birlera=a-(yuzlera*100+onlara*10);



    printf("%d  %d  %d \n",yuzlera,onlara,birlera);





    for(sayi=100; sayi<1000; sayi++)
    {

       yuzler=sayi/100;
    onlar=(sayi%100)/10;
    birler=sayi-(yuzler*100+onlar*10);




        if(yuzler!=onlar && yuzler!=birler && onlar!=birler)
        {
            printf("%d \n",sayi );

        }
        else
            {

            }


    }





}
