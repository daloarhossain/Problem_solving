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

  // count the middle pointer and do operation
  int pointer = 0;
  if(arr_len % 2 == 1){
    pointer = (arr_len / 2) + 1;
  }
  else{
    pointer = arr_len / 2;
  }

  // If the values of backword and forward is same, then is_palindrome = 0;
  int is_palindrome = 0;

  for(int i = 1; i <= pointer; i++){
    if(arr[i - 1] != arr[arr_len - i]){
        is_palindrome += 1;
    }
  }

  // Print the output
  if(is_palindrome == 0){
    printf("YES");
  }
  else{
    printf("NO");
  }

  return 0; 
}