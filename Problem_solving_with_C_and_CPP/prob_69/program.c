/**
 📅 Date   : 07-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int len;
  scanf("%d", &len);

  for(int i = 1; i <= len; i++){

    for(int j = len; j >= i; j--){
      printf("*");
    }

    printf("\n");
  }

  return 0; 
}