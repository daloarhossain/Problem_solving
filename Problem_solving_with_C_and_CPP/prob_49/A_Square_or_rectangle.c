/**
 📅 Date   : 23-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int test_case;
    scanf("%d", &test_case);

    for (int i = 1; i <= test_case; i++)
    {
        int width, height;
        scanf("%d %d", &width, &height);

        if (width == height)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}