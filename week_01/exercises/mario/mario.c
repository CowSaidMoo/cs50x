#include <cs50.h>
#include <stdio.h>

int get_possitive_whole_number();

int main(void)
{
    int piramide_height = get_possitive_whole_number();
    // printf("%i\n", piramide_height);

    // print piramde
    for (int i = 0; i < piramide_height; i++)
    {
        // print white space
        for (int w = 1; w < piramide_height - i; w++)
        {
            printf(" ");
        }
        // print blocks
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}

int get_possitive_whole_number()
{
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (n <= 0);

    return n;
}

