/**
 📅 Date   : 16-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

void print_space(int spaces)
{
    for (int i = spaces; i >= 1; i--)
    {
        printf(" ");
    }
}

void print_star(int stars)
{
    for (int i = 1; i <= stars; i++)
    {
        printf("*");
    }

    printf("\n");
}

int count_odd_num(int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 1)
        {
            count += 1;
        }
    }

    return count;
}

int main()
{

    int size;
    scanf("%d", &size);

    /*
        I have divided the pattern into 2 parts, Top and bottom.
        --- Top ---
        1. In the top part, symbol starts with only one and increase it with 2 star symbol.

        2. In top part, row will be counted : total odd numbers from 1 to N with 5.

        3. Spece will be row - 1.

        --- Bottom ---
        1. Always 5 rows.
        2. Culumn is equal to the size.
        3. Space will be the half of total stars in top part. 
    */

    // ----------- Top -------------
    int row_for_top = count_odd_num(size) + 5;

    int stars_for_top = 1;
    int spaces_for_top = row_for_top - 1;

    for (int i = 1; i <= row_for_top; i++)
    {
        print_space(spaces_for_top);
        print_star(stars_for_top);

        // Increase or Decrease spaces and stars
        stars_for_top += 2;
        spaces_for_top -= 1;
    }

    // --------------- Bottom ---------------------

    // there is -2, because two starts were add when top part was printed for the last time.
    int space_for_bottom = (stars_for_top - (size + 2)) / 2; 
 

    for(int i = 1; i <= 5; i++){
        print_space(space_for_bottom);
        print_star(size);
    }
    return 0;
}