#include <stdio.h>
#include <stdlib.h>

int main()
{


    for(int i=0;i<=1000;i++){

printf("ziraate hosgeldiniz yapmak istediginiz islemi seciniz:\n");
printf("bakiye sorgulama=1\n");
printf("para cekme=2\n");
printf("para yatirma=3\n");
printf("kart iade=4 \n");

int a;
int b=3000;
int c;
int d;


scanf("%d",&a);





if(a==1){


    printf("bakiyeniz=%d\n\n",b);

}





 if(a==2)
    {

    printf("cekmek istediginiz tutarý giriniz:\n");
    scanf("%d",&c);

    if(c<=3000)
        {

        int kalan=b-c;
        printf("kalan tutariniz:%d\n\n",kalan);

    }
else

    {
    printf("cekmek istediginiz tutar bakiyenizi asiyor\n\n");

}

    }

else if (a==3)
    {

    printf("yatirmak istediginiz tutarý giriniz:");
scanf("%d",&d);

int yatirim=d+b;

printf("yeni tutariniz:%d\n\n",yatirim);

}

else if (a==4)

    {
    printf("bizi tercih ettiginiz icin tesekkurler\n\n");
}

else

    {
    printf("lutfen gecerli islem giriniz\n\n");

}
    }
    getch();


}













