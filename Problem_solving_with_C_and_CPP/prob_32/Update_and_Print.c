/**
 📅 Date   : 17-10-2025
 📕  Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
    int arr_length;
    scanf("%d", &arr_length);

    //  take input and store the values
    int arr[arr_length];

    for(int i = 0; i < arr_length; i++){
        scanf("%d", &arr[i]);
    }

    // take to input to exchange the value in array
    int index, updated_value;
    scanf("%d %d", &index, &updated_value);

    arr[index] = updated_value;

    // Print the output in reverse order
    for(int i = arr_length - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    

  return 0; 
}