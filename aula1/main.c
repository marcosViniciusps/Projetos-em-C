#include <stdio.h>
#include <stdlib.h>
/*
Este programa utiliza o algoritimo de Euclidespara caalcular o produto de dois numeros inteiros.
Autor:marcos
Data:30/07/2015
versão:Rev_0
*/
int main()
{
    int m, n,R;//
    printf("Digite o primeiro numero\n");
    scanf("%d",&m);
    printf("digite o segundo numero\n");
    scanf("%d",&n);
    R=0;
    while(n!=0)
    {R=R+m;n=n-1;
    printf("\n n=%d",R);
    printf("\n R=%d",n)
printf("\n R=m x n:\n");
printf("\n R=%d",R);
getch();
return 0;
}
