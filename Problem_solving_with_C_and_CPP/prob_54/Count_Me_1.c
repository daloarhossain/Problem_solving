/**
 📅 Date   : 24-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{
    // take the length of an array and values;
    int arr_len;
    scanf("%d", &arr_len);

    int arr[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // find the values those are divivided by 2 and 3;
    int divided_by_2 = 0, divided_by_3 = 0;

    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 3)
        {
            divided_by_2++;
        }
        else if(arr[i] % 2 == 0){
            divided_by_2++;
        }
        else if(arr[i] % 3 == 0){
            divided_by_3++;
        }
    }

    // print the output
    printf("%d %d", divided_by_2, divided_by_3);

    return 0;
}