
#include <stdio.h>
#include <stdlib.h>






void ucgen(int x)
{
    int i,j;

    for(i=1; i<=x; i++)
    {
        for(j=1; j<=i-1; j++)
        {
            printf("X");
        }
        printf("\n");

    }
}




    void ters_ucgen(int x)
    {

        int i,j;

        for(i=1; i<x; i++)
        {
            for(j=x; j>=i-1; j--)
            {
                printf("X");
            }
            printf("\n");



        }



    }

    int main()

    {

        ucgen(7);
        ters_ucgen(7);
        return 0;

    }











