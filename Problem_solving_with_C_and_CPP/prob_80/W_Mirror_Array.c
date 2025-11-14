/**
 📅 Date   : 14-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{
    // Taking the values of an array;
    int n, m;
    scanf("%d %d", &n, &m);

    int numbers[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    // inverting the array;

    for (int row = 0; row < n; row++)
    {
        for (int front_indx = 0, back_indx = m -1; front_indx <= back_indx; front_indx++, back_indx--)
        {
            int temp = numbers[row][front_indx];

            numbers[row][front_indx] = numbers[row][back_indx];
            numbers[row][back_indx] = temp;


        }
    }

    // Printing the array after being inverted;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", numbers[i][j]);
        }

        printf("\n");
    }
    return 0;
}