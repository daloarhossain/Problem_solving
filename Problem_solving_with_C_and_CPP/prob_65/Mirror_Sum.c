/**
 📅 Date   : 31-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{
    int arr_len, first_arr[1001], last_arr[1001], final_arr[1001];
    
    // taking the length of these arrays;
    scanf("%d", &arr_len);

    // Taking first array's values;
    for(int i = 0; i < arr_len; i++){
        scanf("%d", &first_arr[i]);
    }

    // Taking last array's values;
    for(int i = 0; i < arr_len; i++){
        scanf("%d", &last_arr[i]);
    }

    // making the operation of summation
    for(int i = 0; i < arr_len; i++){
        int sum = first_arr[i] + last_arr[(arr_len - 1) - i];
        final_arr[i] = sum;
    }

    // print the output
    for(int i = 0; i < arr_len; i++){
        printf("%d ", final_arr[i]);
    }

    return 0;
}