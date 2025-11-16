/**
 📅 Date   : 15-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int row, clmn;
    scanf("%d %d", &row, &clmn);

    int matrix[row][clmn];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < clmn; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking the matrix whether it is Jadu/Magic matrix or not;
    if (row == clmn)
    {
        int is_primary_diagonal = 0;
        int is_secondary_diagonal = 0;
        int is_others_values_zero = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < clmn; j++)
            {
                // checking the primary diagonal
                if (i == j && matrix[i][j] != 1)
                {
                    is_primary_diagonal += 1;
                }

                // checking the secondary diagonal;
                if (i + j == row -1 && matrix[i][j] != 1)
                {
                    is_secondary_diagonal += 1;
                }

                // Checking the others values;
                if((i != j) && (i+j != row -1)){
                    
                    if(matrix[i][j] != 0){
                        is_others_values_zero += 1;
                    }
                }
            }
        }


        if (is_primary_diagonal == 0 && is_secondary_diagonal == 0 && is_others_values_zero == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}