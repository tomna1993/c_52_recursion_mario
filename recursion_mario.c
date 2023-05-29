#include <cs50.h>
#include <stdio.h>

void draw(int blocks);
void recursion_draw(int blocks);

int main(void)
{
    int number_of_blocks = get_int("Number: ");

    draw(number_of_blocks);

    printf ("\nRecursion: \n");

    recursion_draw(number_of_blocks);
}

void draw(int blocks)
{
    for (int i = 0; i < blocks; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf ("#");
        }
        printf ("\n");
    }
}

void recursion_draw(int blocks)
{
    // Base case
    if (blocks == 0)
    {
        return;
    }

    recursion_draw(blocks - 1);

    for (int i = 0; i < blocks; i++)
    {
        printf ("#");
    }

    printf ("\n");
}