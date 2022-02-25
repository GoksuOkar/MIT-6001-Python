#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    //Prompt the cashier for a float
    float c;
    do
    {
        c = get_float("change owed: ");
    }
    while (c <= 0);
    int cents = round(c*100);
    
    //Let's calculate how many coins will be returned
    
    int i = 0;
    
    while ( cents >= 25)
    {
        cents -= 25;
        i++;
    }
    while (cents >= 10)
    {
        cents -= 10;
        i++;
    }
    while (cents >= 5)
    {
        cents -= 5;
        i++;
    }
    while (cents >=1)
    {
        cents -= 1;
        i++;
    }
        
    printf ("Give back %i coins\n", i);
}

