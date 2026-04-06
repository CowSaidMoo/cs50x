#include <cs50.h>
#include <stdio.h>

int get_possitive_whole_number();

int main(void)
{
    int cent25 = 25;
    int cent10 = 10;
    int cent5 = 5;
    int cent1 = 1;

    int count = 0;

    int change_owed = get_possitive_whole_number();

    if (change_owed >= cent25)
    {
        count += change_owed / cent25;
        change_owed = change_owed % cent25;
    }

    if (change_owed >= cent10)
    {
        count += change_owed / cent10;
        change_owed = change_owed % cent10;
    }

    if (change_owed >= cent5)
    {
        count += change_owed / cent5;
        change_owed = change_owed % cent5;
    }

    if (change_owed >= cent1)
    {
        count += change_owed / cent1;
        change_owed = change_owed % cent1;
    }

    printf("%i \n", count);
    printf("%i \n", change_owed);
}

int get_possitive_whole_number()
{
    int n;
    do
    {
        n = get_int("Change owed: ");
    }
    while (n < 0);

    return n;
}

