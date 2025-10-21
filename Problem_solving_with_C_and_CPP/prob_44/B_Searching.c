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

  // get the searching value;
  int search;
  scanf("%d", &search);

  // Find the value and print it;
  int output = -1;

  for(int i = 0; i < arr_len; i++){
    if(search == arr[i]){
        output = i;
        break;
    }
  }

  printf("%d", output);

  
  return 0; 
}