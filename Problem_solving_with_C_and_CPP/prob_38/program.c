/**
 📅 Date   : 20-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
    int arr_length;
    scanf("%d", &arr_length);

    // Take input to add in an array (There is a +1, because one new value will be given to add)
    int arr[arr_length + 1];
    for(int i = 0; i < arr_length; i++){
        scanf("%d", &arr[i]);
    }

    // Take index number and a value to update
    int index, new_value;
    scanf("%d %d", &index, &new_value);

    // update the value in the given index
    for(int i = arr_length; i > index; i--){
        arr[i] = arr[i - 1];
    }

    // update and print the output;
    arr[index] = new_value;
    
    for(int i = 0; i <= arr_length; i++){
        printf("%d ", arr[i]);
    }

  return 0; 
}