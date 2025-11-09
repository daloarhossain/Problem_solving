/**
 📅 Date   : 08-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

void print_space(int count_space)
{
    for (int s = count_space; s >= 1; s--)
    {
        printf(" ");
    }
}

void print_hash(int count_hash)
{
    for (int i = 1; i <= count_hash; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_dash(int count_dash)
{
    for (int d = 1; d <= count_dash; d++)
    {
        printf("-");
    }
    printf("\n");
}

int main()
{
    int count_line;
    scanf("%d", &count_line);

    // ---------- Top Half ----------
    int count_hash_and_dash = 1;
    int count_space = count_line - 1;

    for (int i = 1; i <= count_line; i++)
    {
        if (i % 2 != 0)
        {
            print_space(count_space);
            print_hash(count_hash_and_dash);
        }
        else
        {
            print_space(count_space);
            print_dash(count_hash_and_dash);
        }

        count_space--;
        count_hash_and_dash += 2;
    }

    // ---------- Bottom Half ----------
    count_space = 1;
    count_hash_and_dash -= 4; 

    for (int i = count_line -1; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            print_space(count_space);
            print_hash(count_hash_and_dash);
        }
        else
        {
            print_space(count_space);
            print_dash(count_hash_and_dash);
        }

        count_space++;
        count_hash_and_dash -= 2;
    }

    return 0;
}
