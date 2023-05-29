#include <cs50.h>
#include <stdio.h>

void draw(int blocks);

int main(void)
{
    int number_of_blocks = get_int("Number: ");

    draw(number_of_blocks);

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