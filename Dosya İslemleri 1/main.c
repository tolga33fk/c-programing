#include <stdio.h>
#include <stdlib.h>


//  metin belgesi olusturma


/* tek '\' , string ifadelerde, ozel karakter girisleri icin kullanilir ("\n" = alt satira gec gibi).
 Bunun icin, dosya yolunu gosterirken, ya tek duz slash ('/'), ya da cift ters slash ('\\') kullanilir.  */


// D:\c dersleri\dosya kýsaltmalar ve kavramlar.txt


int main()
{
   FILE *dosya;
   dosya=fopen("D:\\c dersleri\\yeni.txt","w");



    return 0;
}
