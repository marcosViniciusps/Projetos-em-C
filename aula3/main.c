#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    printf("aperte algum botao para iniciar");

    int s=0;
    int m=0;
    int h=0;
    int t=0;
    getch();


    for (t=0;t<60;t++)
    {
        printf("\n%dh:%dm:%ds",h,m,s);

        Sleep(1000);
        system("CLS");
        s++;
        if(s==60){
            s=0;
            m++;}
        if(m==60){
            m=0;
            h++;}
        if(h==24){
            h=0;}

    }







    return 0;
}
