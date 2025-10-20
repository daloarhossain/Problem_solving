/**
 📅 Date   : 20-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int arr_length;
  scanf("%d", &arr_length);

  int arr[arr_length];
  for(int i = 0; i < arr_length; i++){
    scanf("%d", &arr[i]);
  }

//   Get an index number to delete the item;
  int index;
  scanf("%d", &index);

  for(int i = index; i < arr_length; i++){
    arr[i] = arr[i + 1];
  }

//   Print the updated array
  for(int i = 0; i < arr_length - 1; i++){
    printf("%d ", arr[i]);
  }

  return 0; 
}