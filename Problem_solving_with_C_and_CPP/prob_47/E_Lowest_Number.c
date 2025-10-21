/**
 📅 Date   : 21-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int arr_len;
    scanf("%d", &arr_len);

    int arr[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
    }

    //   Get the input to search
    int lowest_val = arr[0], index = 0;

    for (int i = 1; i < arr_len; i++)
    {
        if(!(lowest_val <= arr[i])){
            lowest_val = arr[i];
            index = i;
        }
    }

    printf("%d %d", lowest_val, index + 1);

    return 0;
}