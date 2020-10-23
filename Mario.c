#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int alt, fil, column, space;
    do
    {
    alt = get_int ("Ingrese Altura:");
    }
    while (alt < 1 || alt > 8);
    
    for (fil = 0; fil < alt; fil++)
    {
        for (space = 0; space < alt - fil - 1; space++)
        {
            printf(" ");
        }
        for(column = 0; column <= fil; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}