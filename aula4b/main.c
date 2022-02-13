#include <stdio.h>
#include <stdlib.h>
/*autor:marcos
  dia:28/08/2015
  realiza teste de diversas funções
  compara numeros*/
void Exibe_maior(int A, int B  , int C)
{
    int Maior;
    if(A>B)
        Maior=A;
    else
        Maior=B;
    if (C>Maior)
        Maior=C;
    printf("\n\n Maior=%d\n\n",Maior);
    return;
}
int Exibe_menor(int A, int B, int C)
{
  int Menor;
  if (A<B)
    Menor=A;
  else
    Menor=B;
  if (C<Menor)
    Menor=C;
    return(Menor);
}

void Exibe_produto(int A, int B, int C)
  {
   int Maior, Menor;
   if (A<B)
   {
       Maior=A;
       Menor=B;
   }
   else
   {
       Maior=B;
       Menor=A;
   }
   if (Maior<C)
    Maior=C;
   printf ("\n\n Maior*Menor=%d \n\n",Maior*Menor);
   return;
  }

 void Exibe_pariedade (int A, int B, int C)
 {
   if(A&2==0)
        printf("\n A=%d (par)\n",A);
    else
        printf ("\n A=%d ( impar)\n",A);
    if(B&2==0)
        printf("\n B=%d (par)\n",B);
    else
        printf ("\n B=%d ( impar)\n",B);

    if(C&2==0)
        printf("\n C=%d (par)\n",C);
    else
        printf ("\n C=%d ( impar)\n",C);
   return;
 }


    int main()
 {
     int A, B, C, Menor,teste;
   char y='1';
   printf ("\n digite o valor de A:\n");
   scanf ("%d",&A);
   printf ("\n digite o valor de B:\n");
   scanf  ("%d,",&B);
   printf ("\n digite o valor de C:\n");
   scanf  ("%d",&C);
   teste=1;
         printf ("\n \n Escolha uma das opissoes abaixo:\n");
         printf("a) Mostrar o maior\n");
         printf("b) Mostrar o menor\n");
         printf("c) Mostrar a soma dos treis numros\n");
         printf("d) Informar se cada numero e par ou impar\n");
         printf("e) Mostrar o produto entre o maior e o menor");
         printf("x) Sair do programa\n");

    while (y!='x')
        {
         y=getch();
         switch (y)
         {


            case 'a':Exibe_maior(A, B, C);
            break;
            case 'b':Menor=Exibe_menor(A,B,C);
                     printf ("\n Menor= %d \n", Menor );
            break;
            case 'c': printf("\n A+B+C= %d \n", A+B+C);
            break;
            case 'd': Exibe_pariedade(A,B,C);
            break;
            case 'e': Exibe_produto(A,B,C);
            break;
            case 'x': teste        =0;
            break;
            default: printf ("\n Opssao invalida");
            break;
         }
        }

   Menor=Exibe_menor(A,B,C);
   printf("\n\n Menor=%d\n\n",Menor);
   Exibe_maior(A,B,C);
   printf("\n\n Menor=%d\n\n",Exibe_menor(A,B,C));
    return ;
    }



