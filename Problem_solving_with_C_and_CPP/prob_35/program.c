/**
 📅 Date   : 17-10-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

int main(){
  int number;
  scanf("%d", &number);
  
  for(int i = number; i >= 1; i--){

    for(int j = i; j >= 1; j--){
        printf("%d ", j);
    }

    printf("\n");
  }
  return 0; 
}

/*
    Input: 5
    
    Output:
    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1


*/ 


