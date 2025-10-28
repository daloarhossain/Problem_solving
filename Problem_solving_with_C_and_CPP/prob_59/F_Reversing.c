/**
 📅 Date   : 28-10-2025
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

    // Print the array in reverse order
    for(int i = arr_len -1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}