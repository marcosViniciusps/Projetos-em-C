#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ESTE Programa funciona como um bingo
   Autor: Marcos Vinicius
   Data: 10/09/2015
*/
int main()
{
    int vetor[100];   //vetor "numero" que vai receber os numeros já retirados
    int indice=0;   //posicao do vetor
    int i=0;

    printf ("         BINGO \n");
    printf ("   \n aperte qualquer tecla para sortear um numero \n");


         for(indice=0;indice<100;indice++)
         {
	       vetor[indice]=0;
         }
    srand( (unsigned)time(NULL) );//alimenta com semente para gerar numeros aleatorios



        for (indice=0;indice<99;indice++)
         {

           vetor[indice]=rand() % 99+1;


               {
                 getch();
                 printf(" %d \t ",vetor [indice] );
               }
         }

        for (indice=0;indice<99;indice++)
        {
            if (vetor[indice]!=vetor[indice-1]);
            getch();
            printf (" %d \t",vetor[indice]);
        }









return 0;

}
