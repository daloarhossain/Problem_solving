/**
 📅 Date   : 10-11-2025
 📕 Title  : (Developing problem solving skills 🙂)
 👨‍💻 Author : Daloar Hossain
 */
 
#include<stdio.h>

void print_fun(int counter, int initial_num){

    if(counter == initial_num) return;

    printf("I love Recursion\n");
    print_fun(counter, initial_num + 1);
}


int main(){
  
  int counter;
  scanf("%d", &counter);

  print_fun(counter, 0);

  return 0; 
}