#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir,sutun,i,j,k,l;

    printf("satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("sutun sayisini giriniz:");
    scanf("%d",&sutun);

    int matris[satir][sutun];



    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("\n[%d][%d]---->",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    printf("-----------OLUSTURULAN MATRIS---------\n\n");

    for(k=0;k<satir;k++)
    {
        for(l=0;l<sutun;l++)
        {
            printf(" %d ",matris[k][l]);

        }
        printf("\n");
    }

    printf("\n\n\n");

    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf(" %d ",matris[j][i]);
        }
        printf("\n");
    }


}
