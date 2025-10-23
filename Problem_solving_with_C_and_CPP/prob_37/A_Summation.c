/**
 📅 Date   : 18-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */

#include <stdio.h>

int main()
{

    int arr_length;
    scanf("%d", &arr_length);

    int arr[arr_length];
    //   get numbers from user input
    for(int i = 0; i < arr_length; i++){
        scanf("%d", &arr[i]);
    }

    // Count the summation
    long long int sum = 0;
    for(int i = 0; i < arr_length; i++){
        sum += arr[i];
    }

    // Print the absolute value of summation;
    if(sum <= -1){
        printf("%lld", sum * -1);
    }else{
        printf("%lld", sum);
    }

    return 0;
}