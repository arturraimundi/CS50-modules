#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float cash = get_float("troca devida euro:");
    cash = cash * 100;
    float cents = 0;
    while (cash > 24)
    {
        cash -= 25;
        cents++;
    }
    while (cash > 9)
    {
        cash -= 10;
        cents++;
    }
    while (cash > 4)
    {
        cash -= 5;
        cents++;
    }
    while (cash > 0)
    {
        cash -= 1;
        cents++;
    }
    printf("%f \n", cents);
}
