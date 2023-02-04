#include <stdio.h>
#include <stdlib.h>



int mutlak_deger(int x)
{
    int y;
    if(x>=0)
    {
        y=x;

    }
    else
    {
        y=x*-1;

    }
    return y;

}


int main()
{
    int sonuc,sayi;
    printf("sayi girin:");
    scanf("%d",&sayi);
    sonuc=mutlak_deger(sayi);
    printf("\n |%d|=%d ",sayi,sonuc);




}
