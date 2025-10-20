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

//   Reverse the array
  for(int i = 0, j = arr_length -1; i < j || i == j; i++, j--){
    int tmp;
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

//   After reversing the array, print it
  for(int i = 0; i < arr_length; i++){
    printf("%d ", arr[i]);
  }

  return 0; 
}