#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ++a önce a deðiþkenini 1 attýr,daha sonra onun deðerini ifade içinde kullan.
    a++ önce a deðiþkenin deðerini ifade içinde kullan,daha sonra onun deðerini 1 arttýr.
    -a önce a deðiþkenini 1 azalt,daha sonra onun deðerini ifade içinde kullan
    a- önce a deðiþkeninin deðerini ifade içinde kullan, daha sonra onun deðerini 1 azalt.
    */

    int a=3;



    printf("%d\n",a);
    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",a--);
    printf("%d\n",--a);

    printf("%d\n",-a);

    printf("%d\n",+a);





}
