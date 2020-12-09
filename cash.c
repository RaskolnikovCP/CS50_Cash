#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;

    float quarter = 0.25;

    float dime = 0.1;

    float nickel = 0.05;

    float penny = 0.01;

    int count = 0;

    do
    {
        n = get_float("cash:");
    }
    while (n <= 0);

    //printf("%f\n", n);

    if(n >= quarter){

        while (n >= quarter)
        {
            n -= quarter;
            count++;
        }
    }

    while (n >= dime && n < quarter)
    {
        n -= dime;
        count++;
    }

    while (n >= nickel && n < dime)
    {
        n -= nickel;
        count++;
    }

    while (n >= penny && n < nickel)
    {
        n -= penny;
        count++;
    }

    printf("%i\n", count);


}
