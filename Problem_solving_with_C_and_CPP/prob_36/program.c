/**
 📅 Date   : 18-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int pointer;
  scanf("%d", &pointer);

  for(int i = 1; i <= pointer; i++ ){
    
    int latter = 64 + i;
    for(int j = 1; j <= i; j++){

      printf("%c ", latter);
    }

    printf("\n");
  }

  return 0; 
}