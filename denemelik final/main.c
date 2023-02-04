#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main()
{
   void fonk(int,int[]);
   int dizi[]={1,2,3,4};
   int i;
   fonk(4,dizi);
   for(i=0;i<4;i++)
    printf("%d,",dizi[i]);
   return 0;

}

void fonk(int n, int dizi[])
{
    int p[4];
    int i=0;
    while(i<n)
    {
        p[i]= dizi[i]%2;
        i++;
    }
}
*/





/*


void yildiz(int n)
{
    printf("*");
    if(n<=2)
        return;
    printf("*");
}

void main()
{
    yildiz(2);
}
*/



/*
int main()
{
    // iki basamakli random sayilar yazdirma...
    srand(time(NULL));
    int i;
    for(i=0;i<=100;i++)
    {
        int a=rand()%90+10;
        printf("rasgele sayi=%d \n",a);
    }

}
*/

/*
// gonderilen 3 adet ondalik sayinin sadece tam kismini toplama

int toplam(float a,float b,float c)
{
    float d;
    d=a+b+c;
    return d;

}


int main()
{
    float a,b,c;
    printf("3 sayi giriniz: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    float k=toplam(a,b,c);

    printf("tam kisimlari toplami:%f",k);

}
*/


/*

// asagýdaki kod parcasinda 8 ciktisi olmasi icin index=yerine ne yazilmasi gerekir...
int main()
{
    int array[]={1,4,3,8,6,2,5};
    int secim =array[0];
    int index=2;

    for(; index <7;index++)
    {
        if(array[index]>secim )
            secim=array[index];
    }
    printf("%d\n",secim);
}
*/

/*

// floor=sayiyi bir altindaki tam sayiya yuvarlar.
// ceil= sayiyi bir ustundeki tam sayiya yuvarlar
// round=sayiyi dirak yuvarlar 5.78=6 olur mesela

int main()
{
    float a=0.81;
    float b=sqrt(a);
    b=ceil(b);
    a=round(a);
    printf("%f  %f",a,b);
}
*/




/*
int main()
{
int sayi;
printf("bir sayi giriniz:\n");
scanf("%d",&sayi);
int d[sayi],i;
int s=sayi/2;
srand(time(NULL));
for(i=0;i<sayi;i++)
{
d[i]=rand()%100;
printf("%d ",d[i]);
}
printf("\n");
int tmp;
for(i=0;i<s;i++)
{
tmp=d[i];
d[i]=d[sayi-i-1];
d[sayi-i-1]=tmp;
}
for(i=0;i<sayi;i++)
printf("%d ",d[i]);
printf("\n");
return 0 ;
}
*/


/*
//sicaklik ortalamasi hesaplayan program
int main()
{
    int dizi[1000];
    int eleman_sayi;
    printf("kac gun sicaklik:");
    scanf("%d",&eleman_sayi);

    for(int i=1;i<=eleman_sayi;i++)
    {
        printf("%d.gun:",i);
        scanf("%d",&dizi[i]);
    }
    int topsicaklik=0;
    for(int i=1;i<=eleman_sayi;i++)
    {
        topsicaklik=topsicaklik+dizi[i];

    }

    float ortsicaklik=(float)topsicaklik/eleman_sayi;
    printf("ortalama sicaklik:%f",ortsicaklik);
    printf("\n sicaklik ortalamasindan soguk gunler\n");
    for(int i=1;i<=eleman_sayi;i++)
    {
        if(dizi[i]<=ortsicaklik)
        {
            printf("%d.gun\n",i);
        }

    }



}
*/


/*
//alinan sayinin ikilik tabana donusturulmesi...
void ikilik(int sayi)
{
int i=0,k[20];
while(sayi>0)
{
i++;
k[i]=sayi%2;
sayi=sayi/2;
}
printf("\nIkilik tabandaki sayi karsiligi:\n");
for(i=i;i>0;i--)
printf("%d",k[i]);
printf("\n");
}
int main()
{
int n;
printf("Bir sayi giriniz:\n");
scanf("%d",&n);
ikilik(n);
return 0;
}

*/

/*
void BubleSort(int A[],int N)
{

for(int i=0;i<N-1;i++)
{
    int yerdegisimi=0;
   for(int j=0;j<N-1-i;j++)
     {
        if(A[j]>A[j+1])
          {
             int temp=A[j];
             A[j]=A[j+1];
             A[j+1]=temp;
             yerdegisimi=1;
        }
     }
     if (yerdegisimi==0) break;
   DiziYazdir(A,N);

}


}
void DiziYazdir(int A[],int N)
{
  for (int i=0;i<N;i++)
     printf("%d ",A[i]);
  printf("\n");
}

int main()
{
  int dizi[10]={12,22,67,34,23,-8,9,2,19,145};
  int dizi2[10]={4,2,3,1,5,6,7,8,9,10};
  DiziYazdir(dizi2,10);
  BubleSort(dizi2,10);

}
*/

int main()
{
    int dizi[100000];
    int eleman_say;
    printf("kac adet eleman gireceksiniz");
    scanf("%d",&eleman_say);
    for(int i=0;i<eleman_say;i++)
       {
          printf("dizi[ %d ]",i);
          scanf("%d",&dizi[i]);
       }

    int enk=dizi[0];
    int yer=0;
    for(int i=1;i<eleman_say;i++)
    {
       if(enk>dizi[i])
         {
            enk=dizi[i];
            yer=i;
         }
    }

  printf("dizi[%d]=%d en kucuk elemandir",yer,enk);
    return 0;
}



