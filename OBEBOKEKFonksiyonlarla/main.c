#include <stdio.h>
#include <stdlib.h>



int obeb(int x,int y)
{
    int i,sonuc=1;
    for(i=2;i<=x&&i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
            sonuc=i;
        }
    }
    return sonuc;
}



int main()
{
    int x,y,ebob_s,ekok_s;
    printf("1. sayiyi giriniz:");
    scanf("%d",&x);
    printf("2. sayiyi giriniz:");
    scanf("%d",&y);
    ebob_s=obeb(x,y);
    ekok_s=ekok(x,y);
    printf("EBOB=%d \n",ebob_s);
    printf("EKOK=%d \n",ekok_s);
}



int ekok(int x,int y)
{
    int ebob_s;
    int i,sonuc2=1;
    sonuc2=ebob_s;
    sonuc2=x*y/sonuc2;
    return sonuc2;
}
