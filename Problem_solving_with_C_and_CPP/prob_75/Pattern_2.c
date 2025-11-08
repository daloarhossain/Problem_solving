/**
 📅 Date   : 08-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int count;
    scanf("%d", &count);

    int count_spaces = count -1;

    for (int i = 1; i <= count; i++)
    {
        // print the spaces
        for(int s = count_spaces; s >= 1; s--){
            printf(" ");
        }
        count_spaces--;

        // print the numbers
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}