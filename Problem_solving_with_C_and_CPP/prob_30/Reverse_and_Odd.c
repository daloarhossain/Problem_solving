#include<stdio.h>

int main()
{
    int array_length; // this is the length of array
    scanf("%d", &array_length);

    int num_arr[array_length];

    // get array value
    for(int i = 0; i < array_length; i++){ 
        scanf("%d", &num_arr[i]);
    }

    // print array value or output
    for(int i = array_length -1; i >= 0; i--){ 

        if(i % 2 == 1){
            printf("%d ", num_arr[i]);
        }
    }

    return 0;
}