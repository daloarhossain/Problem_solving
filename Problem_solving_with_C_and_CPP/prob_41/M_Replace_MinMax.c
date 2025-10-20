/**
 📅 Date   : 20-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  int arr_len;
  scanf("%d", &arr_len);
  
  int arr[arr_len];
  for(int i = 0; i < arr_len; i++){
    scanf("%d", &arr[i]);
  }

  int min_num = arr[0], max_num = 0, min_index = 0, max_index = 0;

  for(int i = 0; i < arr_len; i++){
    // find max number and its index;
    if(arr[i]>= max_num){
        max_num = arr[i];
        max_index = i;
    }
    // find the min number and its index;
    if(min_num >= arr[i]){
        min_num = arr[i];
        min_index = i;
    }
  }

//   Swap the value and prite it;
  int temp = arr[max_index];
  arr[max_index] = min_num;
  arr[min_index] = temp;
  
  for(int i = 0; i < arr_len; i++){
    printf("%d ", arr[i]);
  }

  return 0; 
}