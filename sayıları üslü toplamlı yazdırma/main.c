#include <stdio.h>
#include <stdlib.h>

int main()
{

   for(int sayi=100;sayi<1000;sayi++)
{


        int birler=sayi%10;
     int onlar=((sayi%100)-birler)/10;
      int yuzler=(sayi-(birler+onlar))/100;

      if(sayi==(birler*birler*birler)+(onlar*onlar*onlar)+(yuzler*yuzler*yuzler))
      {
          printf("%d \n",sayi);
      }

else
{
    printf("");
}






}
}
