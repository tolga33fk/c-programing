#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("1.sayi:");
    scanf("%d",&a);
    printf("1.sayi:");
    scanf("%d",&b);


    int toplamilk=0;
    int toplamiki=0;



    for(int i=2; i<=a; i++){
        int ilkbol =a/i;

        if(a%i==0){
            toplamilk=toplamilk+ilkbol;
            printf("ilk sayi bolenleri  %d  \n ",ilkbol);


        }
        else{
            printf("");
        }

    }
    printf("%d",toplamilk);


    printf("--------------------------------------------------------------------------- \n");





    for(int j=2; j<=b; j++)
    {


        int ikibol=b/j;



        if(b%j==0)
        {
            toplamiki=toplamiki+ikibol;
            printf("ikinci sayi bolenleri  %d \n  ",ikibol);


        }
        else
        {
            printf("");
        }




    }
     printf("%d \n",toplamiki);



    printf("---------------------------------------- \n");


    if(toplamilk==b && toplamiki==a)
    {

    printf("dost");

    }
    else
        {
            printf("dusman");
        }


}
