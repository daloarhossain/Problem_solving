/**
 📅 Date   : 08-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int count_before_one(int numbers[], int arr_len)
{
    int count = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (numbers[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int arr_len;
    scanf("%d", &arr_len);

    int numbers[1001];
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &numbers[i]);
    }


    int count = count_before_one(numbers, arr_len);

    printf("%d", count);

    return 0;
}