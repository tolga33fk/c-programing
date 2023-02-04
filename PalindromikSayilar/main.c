#include <stdio.h>
#include <stdlib.h>

/* palindromik sayilar:soldan saga ve sagdan sola
 okununca birbirine esit olan sayilardir. istenilen
 sayiyi girince palondrimik olup olmadıgını bulan programi yaziniz*/

tersini_bul(int x);


int main()
{
   int sayi;
   printf("sayi giriniz:");
   scanf("%d",&sayi);
   if(sayi==tersini_bul(sayi))
    printf("palindromiktir");
   else
    printf("palindromik degildir");

   return 0;

}

tersini_bul(int x)
{
    int s = 0;
    while(x>0)
    {
        int b=x%10;
        s=(s*10)+b;
        x/=10;
    }
    return s;


}
