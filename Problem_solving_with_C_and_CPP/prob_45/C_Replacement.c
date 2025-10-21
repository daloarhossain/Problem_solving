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

    //   Do the operation that changes all the positive values into 1 and negative values into 2;

  for(int i = 0; i < arr_len; i++){
    if(arr[i] >= 1 ){
        arr[i] = 1;
    }
    else if(arr[i] <= -1){
        arr[i] = 2;
    }
  }

//   Print the output
  int i = 0;
  while(i < arr_len){
    printf("%d ", arr[i]);

    i++;
  }

  return 0; 
}