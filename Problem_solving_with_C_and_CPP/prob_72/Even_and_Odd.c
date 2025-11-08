/**
 📅 Date   : 08-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

void odd_even()
{
    int arr_len;
    scanf("%d", &arr_len);

    int numbers[1001];
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int even_num = 0;
    int odd_num = 0;

    for (int i = 0; i < arr_len; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even_num++;
        }
        else
        {
            odd_num++;
        }
    }

    printf("%d %d", even_num, odd_num);
}

int main()
{

    odd_even();

    return 0;
}