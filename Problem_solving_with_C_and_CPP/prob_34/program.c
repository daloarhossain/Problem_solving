/**
 📅 Date   : 17-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  
  int number;
  scanf("%d", &number);


  for(int i = 1; i <= number; i++){
    
    for(int j = 1; j <= i; j++){
        printf("%d ", j);
    }
    
    printf("\n");
    
  }


  return 0; 
}