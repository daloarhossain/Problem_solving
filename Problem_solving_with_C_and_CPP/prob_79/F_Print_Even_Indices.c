/**
 📅 Date   : 10-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int arr_opr(int *arr[], int arr_indx){

    if(arr_indx == -1) return;

    if(arr_indx % 2 == 0){
        printf("%d ", arr[arr_indx]);
    }

    
    arr_opr(arr, arr_indx - 1);
}

int main()
{
    // Taking inputs of array's length and values;
    int arr_len;
    scanf("%d", &arr_len);

    int arr[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        scanf("%d", &arr[i]);
    }

    // pass the values and in recursive fun
    arr_opr(arr, arr_len -1);
    return 0;
}