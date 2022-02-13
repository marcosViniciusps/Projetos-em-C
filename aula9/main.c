#include <stdio.h>
#include <stdlib.h>
/*este programa realiza opraçoes com matrizes*/
/*autor:marcos vinicius*/
/*data:24/09/2015*/


int main()
{
    int mtrx [100] [100];
    int i,j,cont,lin,col;  //  i=lin;j=col
    printf("\n Determine a quantidade de linha e de colunas da matriz. \n");
    scanf ("%d %d",&lin,&col);
    printf ("\n Digite os valores da matriz. \n");
    i=0;
    j=0;
    for(i=0;i<lin;i++)
    for(j=0;j<col;j++)
    {
        printf("\t [%d] [%d]=",i,j);
        scanf("%d",&mtrx[i][j]);
    }
    printf("\n Matriz gerada \n\n");
    for (i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
         printf("%d \t ",mtrx[i][j]);
        }
        printf("\n \n");
    }
    printf("\n Matriz triangular superior \n\n");
    for(i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
            if (j>i)//mostra matriz triangular superior sem a diagonal principal
            printf (" %d \t", mtrx [i] [j]);
            else
            printf ("\t");
        }
        printf("\n\n");
    }

    printf("\n Matriz triangular inferior\n\n");
    for(i=0;i<col;i++)
    {
        for (j=0;j<col;j++)
       {
        if(j<=i)//mostra matriz triangular inferior com a diagonal principal
        printf("%d \t ", mtrx [i][j]);
        else
        printf ("\t");
       }
       printf("\n \n");
    }
       printf("\n \n");
    printf("\n  Diagonal principal da matriz \t  ");

    for (i=0;i<lin;i++)
    {
        for (j=0;j<col;j++)
        {
            if(j==i)
                if(i==0)
                printf("%d \t", mtrx [i] [j]);
            else
            printf ("%d",mtrx [i][j]);
            printf("\n ");
        }
    }

return 0;
}
