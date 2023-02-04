#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("D:\\c dersleri\\bilgi.txt","w");

    putc('a',dosya);
    putc('b',dosya);          // bilgi.txt ye ab yazdirdik

    fclose(dosya);                //putc deki c chardan
                                //puts deki s string den geliyor




    return 0;
}
