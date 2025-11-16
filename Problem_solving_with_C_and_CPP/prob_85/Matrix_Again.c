/**
 📅 Date   : 16-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int row, clmn;
    scanf("%d %d", &row, &clmn);

    int array[row][clmn];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clmn; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    // print the last row;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < clmn; j++)
        {
            printf("%d ", array[row - 1][j]);
        }

        printf("\n");
    }

    // print the last column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("%d ", array[i][clmn -1]);
        }
    }
    return 0;
}