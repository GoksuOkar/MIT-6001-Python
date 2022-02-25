#include <cs50.h>
#include <stdio.h>


//prototypes
int get_integer(void);

int main(void)

{
    //get an integer from user between 1 and 8
    int h = get_integer();
    
    //Why did this code below not work inside int h? 
    //{
    //    printf("stored: %i\n", h);
    //}
    
    //build nested loops for the bricks
    {
        for (int i = 0; i < h; i++)
        {
            //first initial spaces to align the pyramids
            for (int k = 0; k < h - i; k++)
            {
                printf(" ");
            }
            //build left side of the bricks
            for (int j = 0; j < i + 1 ; j++)
            {
                printf("#");
            }
            
            //space to seperate the bricks
            printf(" ");
            //build right side of the bricks
            for (int l = 0; l < i + 1; l++)
            {
                printf("#");
            }
            printf("\n");
        }
        {
            printf("\n");
        }
    }   
}

int get_integer(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);
    return n;
    
}