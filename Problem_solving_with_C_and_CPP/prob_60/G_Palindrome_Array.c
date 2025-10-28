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
    for (int i = 0; i < arr_len; i++) scanf("%d", &arr[i]);


    // the operation length in middle
    int operation_len = 0;
    if(arr_len % 2 == 1){
        operation_len = (arr_len / 2) + 1;
    }
    else{
        operation_len = arr_len / 2;
    }

    // the the array whether it is palindrome or not;
    int is_palindorme = 0;
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] != arr[(arr_len - 1) - i]) is_palindorme++;
    }

    // print the output
    if(is_palindorme == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}