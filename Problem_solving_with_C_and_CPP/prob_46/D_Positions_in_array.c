/**
 📅 Date   : 21-10-2025
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


  for(int i = 0; i < arr_len; i++){
    if(arr[i] <= 10){
        printf("A[%d] = %d\n", i, arr[i]);
    }
  }

  return 0; 
}