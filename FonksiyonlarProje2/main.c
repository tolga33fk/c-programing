#include <stdio.h>
#include <stdlib.h>


// girilen sayiya kadar olan sayilarin toplami fonksiyonlu
int deger(int x)
{
    int y,toplam,i;
    toplam=0;

    for(i=1;i<=x;i++)
    {
        toplam=toplam+i;
    }
    return toplam;
}

int main()
{
    int sonuc,sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    sonuc=deger(sayi);
    printf("%d e kadar olan sayilarin toplami=%d",sayi,sonuc);
}
