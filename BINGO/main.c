#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// TEM 100 NUMEROS, TIRA UM NUMERO ALEATORIO DOS 100 E ESCREVE ELE NA TELA
//CONTINUA FAZENDO ISSO, MAS SEM O NUMERO TIRADO

int main()
{
    int vetor[10];   //vetor "numero" que vai receber os numeros já retirados
    int indice=0;   //posicao do vetor
    int valor=0;
    int i=0;
// ZERA os 100 VALORES DO VETOR

for(indice=0;indice<10;indice++)
{
	vetor[indice]=0;
}
srand( (unsigned)time(NULL) );//alimenta com semente para gerar numeros aleatorios
//************************************************************************************
indice=0;
while(indice<10)
{
    valor=rand() % 10;//gera numero aleatorio de 0 a 0//9

    for( i=0;i<indice;i++)
    {
        if(valor == vetor[i])
            break;
    }

    if(i==indice)
    {
        vetor[indice]=valor;
        indice++;
    }
    for(indice=0;indice<10;indice++)
    {
        printf("numeros %d",vetor[indice]);
    }

}

    return 0;
}



********************************************************







Para fazer com que um número ‘x’ receba um valor entre 0 e 9, fazemos:
x = rand() % 10


Para fazer com que um número ‘x’ receba um valor entre 1 e 10, fazemos:
x = 1 + ( rand() % 10 )


Para fazer com que um número ‘x’ receba um valor entre 0.00 e 1.00, primeiro geramos números inteiros, entre 0 e 100:
x = rand() % 101


Para ter os valores decimais, dividimos por 100:
x = x/100;


****************
                 scanf("%c",&c);



