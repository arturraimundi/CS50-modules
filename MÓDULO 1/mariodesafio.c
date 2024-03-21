#include <cs50.h>
#include <stdio.h>


void piramide(void)
{

    int w;
    do
    {
        w = get_int("digite um numero inteiro positivo até 8:");
    }while(w < 1 || w > 8);


    int v = w;
    int h = 1;

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < v; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < h; j++)
        {
            printf("#");
        }
        printf(" ");
        for(int j = 0; j < h; j++)
        {
            printf("#");
        }

        v--;
        h++;
        printf("\n");
    }
}

int main(void)
{
    piramide();
}
